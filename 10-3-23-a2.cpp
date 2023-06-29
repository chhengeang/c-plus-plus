#include<iostream>
#include<conio.h>
using namespace std;
cla8ss myclass{
	public:
		int who;
		myclass(int id);
		~myclass();
};
myclass::myclass(int id)
{
	cout<<"initializing"<<id<<endl;
	who=id;
}
myclass::~myclass()
{
	cout<<"destructing"<<who<<endl;
}
int main()
{
	myclass ob1(3);
	cout<<"here.\n";
	myclass ob2(4);
}
