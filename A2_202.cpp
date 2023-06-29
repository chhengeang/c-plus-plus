#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int id; 
		char name[20];
		float av;
	public:
		student(int i=0,const char *n="",float a=0.0)
		:id(i),av(a)
		{
			strcpy(name,n);
		}
		void input_data();
		void output_data();
		static void heading();	
};
void student::input_data()
{
	cout<<"input id="; cin>>id;
	cout<<"input name="; cin.seekg(0); cin.get(name,20);
	cout<<"input av="; cin>>av;
}
void student::output_data()
{
	cout<<id<<'\t';
	cout.setf(ios::left|ios::fixed|ios::showpoint);
	cout.width(10);
	cout<<name<<'\t';
	cout.precision(2);
	cout<<av<<'\t';
	cout<<endl;
}
void student::heading()
{
	cout<<"\nID\tNAME\t\tAverage\n";
	cout<<"================";
	cout<<endl;
}
int main()
{
	int n,i;
	cout<<"input number of student=";
	cin>>n;
	student *stu=new student[n];
	for(i=0;i<n;i++){
	stu[i].input_data();
	cout<<endl;
	}
	student::heading();
	for(i=0;i<n;i++){
		stu[i].output_data();
	}
	
}

