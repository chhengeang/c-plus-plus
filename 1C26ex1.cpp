#include<iostream>
using namespace std;
	float math,eng,kh,av;
	char g;
	void average()
{
	av=(math+eng+kh)/3;
}
void grade()
{
	if(av<50)
	g='f';
	else if(av<65)
	g='e';
	else if(av<75)
	g='d';
	else if(av<85)
	g='c';
	else if(av<95)
	g='b';
	else
	g='a';
}
void show_data()
{
	cout<<math<<'\t'<<eng<<'\t'<<kh<<'\t'<<av<<'\t'<<g<<endl;	
}
int main()
{
	cout<<"input math=";cin>>math;
	cout<<"input eng=";cin>>eng;
	cout<<"input kh=";cin>>kh;
	show_data();
}
