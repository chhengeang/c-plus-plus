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
			int day,month,year;
		public:
			date(int d,int m,int y);
			void show_date();
	};	//end inner class
};//end outer class
student_info::student_info(char *na, int a,char s)
{
	strcpy(name,na);
	age=a;
	sex=s;
}
student_info::date::date(int d,int m,int y)
{
	day=d;
	month=m;
	year=y;
}
void student_info::display()
{
	cout<<"student's name age sex date of birth(dd-mm-yy)\n";
	cout<<"----------------------------"<<endl;
	cout<<name<<" "<<"\t\t";
	cout<<age<<" ";
	cout<<sex<<" "<<"\t";
}
void student_info::date::show_date()
{
	cout<<day<<"/"<<month<<"/"<<year<<endl;
	cout<<"------------------------"<<endl;
}
int main()
{
	student_info obj1("DARA",20,'M');
	student_info::date obj2(15,10,91);
	obj1.display();
	obj2.show_date();
}
