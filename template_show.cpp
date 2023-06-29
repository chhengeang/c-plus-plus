#include<iostream>
using namespace std;

template <class T1, class T2>
class Show {
	private:
		T1 x;
		T2 y;
	public:
		void input();
		void output();
};

template <class T1, class T2>
void Show<T1, T2>::input() {
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
}

template <class T1, class T2>
void Show<T1, T2>::output() {
	cout << x << '\t' << y << endl;
}

int main() {
	Show<int, int> obj1;
	obj1.input();
	obj1.output();

	Show<int, float> obj2;
	obj2.input();
	obj2.output();

	Show<float, char> obj3;
	obj3.input();
	obj3.output();

	return 0;
}

