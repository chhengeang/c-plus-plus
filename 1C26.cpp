#include<iostream>
using namespace std;
float math,eng,kh;
float average(){
	return(math+eng+kh)/3;
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
void show_data()
{
	cout<<math<<'\t'<<eng<<'\t'<<kh<<'\t'<<average()<<'\t'<<
	grade(average());	
}
int main()
{
	cout<<"input math=";cin>>math;
	cout<<"input eng=";cin>>eng;
	cout<<"input kh=";cin>>kh;
	show_data();
	char g;
}
