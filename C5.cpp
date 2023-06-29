#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter n="; cin>>n;
	int*x=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"x["<<i<<"]=";
		cin>>x[i];
	}
	cout<<"\noutput array\n";
	for(i=0;i<n;i++){
		cout<<"x["<<i<<"]="<<x[i]<<"\t";
	}
//		cout<<"x["<<i<<"]="<<x[i]<<"\t";
}
