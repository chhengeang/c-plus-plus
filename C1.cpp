#include<iostream>

using namespace std;
int main()
{
	int id;
	char name(20);
	char sex;
	float avg;
	cout<<"enter id=";  cin>>id;
	cout<<"rnter name"; cin.seekg(0);
	cin.get(name=20);
	cout<<"enter sex="; cin>>sex;
	cout<<"enter avg="; cin>>avg;
	cout.precision(2);
	cout.setf(ios::fixed ,ios::floatfield);
	cout<<"id="<<id<<"\n"<<"name="<<name<<"\n"<<"sex="<<sex<<"\n"<<"avg="<<avg;
	return 0;
}
