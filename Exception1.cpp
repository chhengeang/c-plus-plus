#include<iostream>
using namespace std;
int main()
{
	double operand1,operand2,result;
	cout<<"this program allow you to perform a divition of two number \n";
	cout<<"to process enter two num:";
	try{
		cout<<"first number:";
		cin>>operand1;
		cout<<"second number:";
		cin>>operand2;
		if(operand2==0)
			throw"division by zero not allowed";
			result=operand1/operand2;
			cout<<"\n"<<operand1<<"\n"<<"\n"<<operand2<<"="<<result<<endl;
	}
	catch(char const *str)
	{
		cout<<"\n bad oparator:"<<str;
	}
}
