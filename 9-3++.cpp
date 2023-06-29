#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student_info{
	private:
		char name[20];
		char sex;
		int age;
	public:
	student_info(char *na,int a,char s);
	void display();
	class date{
		private:
			int day,moth,year;
		public:
			void input();
			void output();
	};	//end inner class
};//end outer class
void student::ob::input(){
	cout<<"enter day="; cin>>day;
	cout<<"enter moth"; cin>>month;
	cout<<"enter year"; cin>>year;
}
int naim(){
	int i,n;
	student st[20];
	student::Dob do[20];
	cout<<"enter n=";cin>>n;
	for(i=0;i<n;i++){
		st[i].input();
		dob[i].output();
	}
}
