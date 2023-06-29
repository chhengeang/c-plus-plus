#include<iostream>
using namespace std;
class myclass{
	private:
		int data;
	public:
	myclass(){ }
	myclass(int d){ data=d;}
	myclass(myclass&a){
		data=a.data;
		cout<<"\nCopy constructor invoked";
	}
	void display(){cout<<data;}	
	void operator=(myclass&a)
	{
		data=a.data;
		cout<<"\nAssigment operator onvoked";
	}
};
int main(){
	myclass a1(37);
myclass a2;
a2=a1;
cout<<"\na2="; a2.display();
myclass a3(a1);
cout<<"\na3="; a3.display();
return 0;
}

