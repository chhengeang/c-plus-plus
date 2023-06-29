#include<iostream>
using namespace std;
void input_array(int x[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"["<<i<<"]=";
		cin>>x[i];
	}
}
void output_array(int x[],int n)
{
	for(int i=0;i<n;i++)
	cout<<x[i]<<'\t';
}
void sort_array(int x[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(x[i]>x[j])
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
	}
}
void search_array(int x[],int n)
{
	int num,k=0;
	cout<<"enter num to search="; cin>>num;
	for(int i=0;i<n; i++)
	if(x[i]==num)
	{
		k=k+1;
		cout<<x[i]<<endl;
	}
	if(k==0)
	cout<<"search not foun!";
}
int main()
{
	int n;
	cout<<"enter n=";cin>>n;
	int *a =new int[n];
	input_array(a,n);
	sort_array(a,n);
	output_array(a,n);
	search_array(a,n);
}
