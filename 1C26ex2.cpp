#include<iostream>
using namespace std;
float average(float math,float kh,float eng)
{
	return(math+kh+eng)/3;
}
char grade(float av)
{
	char g;
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
	return g;
}
void show_data(float m,float k,float e,float av,char g)
{
	cout<<m<<'\t'<<k<<'\t'<<e<<'\t'<<av<<'\t'<<g<<endl;	
}
int main()
{
	float math,eng,kh,av;
	char gg;
	cout<<"input math=";cin>>math;
	cout<<"input kh=";cin>>kh;
	cout<<"input eng=";cin>>eng;
	av=average(math,kh,eng);
	show_data(math,kh,eng, av,gg);
}
