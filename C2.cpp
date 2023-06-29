#include<iostream>
using namespace std;
int main()
{
	float points;
	cout<<"enter points ="; cin>>points;
	if(points>=650){
		cout<<"you get A";
	}
	else if(points>=550 && points<649){
		cout<<"you get B";
	}
	else if(points>=450 && points<549){
		cout<<"you get C";
	}
	else if(points>=350  && points<449){
		cout<<"you get D";
	}
	else if(points>=250  && points<349){
		cout<<" you get E";
	}
	else{
		cout<<"you get F";
	}
	return 0;
}
