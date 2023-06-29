#include<iostream>
#include<string.h>
using namespace std;
class employee{
	private:
		char id[13];
		char name[20];
		int age;
		float salary;
		public:
			employee(){
				strcpy(id,"001");
				strcpy(name,"heng dara");
				age=18;
				salary=1300;
			}
			void show_data(){
				cout<<id<<'\t'<<name<<'\t'<<salary<<endl;
			}
};
int main()
{
	int i,n;
	cout<<"enter n="; cin>>n;
	employee *emp=new employee[n];
	
	for(i=0;i<n;i++)
	emp[i].show_data();
}
