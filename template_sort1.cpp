#include<iostream>
using namespace std;

template<class T>
class sample
{
	protected:
		T num;
	public:
		void input()
		{
			cout << "Input number: ";
			cin >> num;
		}

		void output()
		{
			cout << num << '\t';
		}

		T getnum()
		{
			return num;
		}	
};
template<class T>
void search(T obj[], int n)
{
	T value;
	cout << "Enter a value to search for: ";
	cin >>value;

	bool found = false;
	for (int i = 0; i < n; i++)
	{
		if (obj[i].getnum() == value)
		{
			found = true;
			cout << "Value found at index " << i << endl;
		}
	}

	if (!found)
		cout << "Value not found" << endl;
}


template<class T>
void sort(T obj[], int n)
{
	int i, j;
	T tmp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (obj[i].getnum() > obj[j].getnum())
			{
				tmp = obj[i];
				obj[i] = obj[j];
				obj[j] = tmp;
			}
		}
	}
}

int main()
{
	sample<int> s[10];
	int i, n;

	cout << "Input n: ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		s[i].input();
	}

	sort(s, n);

	for (i = 0; i < n; i++)
	{
		s[i].output();
		cout<<endl;	
	}

	sample<float> s1[10];
	cout << "Input N: ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		s1[i].input();
	}

	sort(s1, n);

	for (i = 0; i < n; i++)
	{
		s1[i].output();
		cout << endl;
	}

	sample<char> s2[10];
	cout << "Input N: ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		s2[i].input();
	}

	sort(s2, n);	

	for (i = 0; i < n; i++)
	{
		s2[i].output();
		cout << endl;
	}		

	return 0;
}

