#include<iostream>
#include<string>
using namespace std;

class person{
	protected:
		char id[13];
		char name[19];
		char sex;
		int age;
};
class employee:private person{
	private:
		float salary;
	public:
		void input_Data();
		void show_Data();
		float tax_salary();
};
void employee::input_Data(){
	cout<<"Enter id="; cin.seekg(0); cin.get(id,13);
	cout<<"Enter name="; cin.seekg(0); cin.get(name,19);
	cout<<"Enter sex="; cin>>sex;
	cout<<"Enter age="; cin>>age;
	cout<<"Enter salary=", cin>>salary;
}
void employee::show_Data(){
	cout<<id<<'\t'<<name<<'\t'<<sex<<'\t'<<age<<'\t'<<tax_salary()<<endl;
}
float employee::tax_salary(){
	if(salary<550){
		return salary*0.05;
	}
	else{
		return salary*0.07;
	}
}
int main() {
	int n,i;
	cout<<"Enter n="; cin>>n;
	employee *em=new employee[n];
	for(i=0;i<n;i++)
		em[i].input_Data();
	cout<<"\noutput Data\n";
	for(i=0;i<n;i++)
		em[i].show_Data();
	
}

