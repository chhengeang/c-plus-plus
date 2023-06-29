#include<iostream>
#include<conio.h>
using namespace std;

int sum(int n,int &r);

int main(){
	int number,result;
	cout<<"input number: "; cin>>number;
	sum(number,result);
	cout<<"Result: "<<result<<endl;
	
	return 0;
}

int sum(int n,int &r){
	int s=0;
	for(int i=1;i<=n;i++)
	s+=i;
	r=s;	
}
