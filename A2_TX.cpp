#include<iostream>
#include<string.h>
using namespace std;

template<class T>
void swap(T &x,T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
};
int main()
{
	int n=60,m=30;
	char ch1='A', ch2='D';
	float a=2.45,b=4.67;
	char  *S1="Morning";
	char *S2="Evening";
	swap(a,b);
	swap(ch1,ch2);
	swap(n,m);
	swap(S1,S2);
	
	cout<<"a = " <<a<<"\tb ="<<b<<"\n";
	cout<<"ch1 = " <<ch1<<"\tch2 ="<<ch2<<endl;
	cout<<"n = " <<n<<"\tm ="<<m<<"\n";
	cout<<"S1 = " <<S1<<",S2 ="<<S2<<"\n";
	return 0;
}
