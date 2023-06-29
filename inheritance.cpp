#include<iostream>
using namespace std;

class B
{
	public:
		int a,m;
	public:
		int product1(){
			return a*m;
		}
};
class D:public B
{
	public:
		int n;
		int product2(){
			return n* product1();
		}
};
int main()
{
	D C1;
	C1.m=5;
	C1.a=4;
	C1.n=3;
	cout<<"product1 ="<<C1.product1()<<endl;
	cout<<"product2 ="<<C1.product2()<<endl;
	return 0;
}
