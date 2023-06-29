#include<iostream>
#include<conio.h>
using namespace std;
int sum(int n){
	int i,s;
	s=0;
	for(i=1;i<=n;i++)
	s=s+i;
	return s;
}
int main(){
	int n,s1,s2,m,t,s3;
	cout<<"input n1:"; cin>>n;
	cout<<"input n2:"; cin>>m;
	cout<<"input n3:"; cin>>t;
	s1=sum(n);
	s2=sum(m);
	s3=sum(t);
	cout<<"sum="<<s1;
	cout<<"sum2="<<s2;
	cout<<"sum3="<<s3;
	getch();
}
