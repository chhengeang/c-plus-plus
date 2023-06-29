#include<iostream>
using namespace std;
class employee{
	private:
		char id[20];
		char name[20];
		char sex;
		int age;
		float salary;
		public:
			void input_data();
			void output_data();
			float tax_salary();
};
void employee::input_data(){
	cout<<"Input ID=";cin>>id;
	cout<<"Input Name";cin.seekg(0);cin.get(name,20);
	cout<<"Input Sex=";cin>>sex;
	cout<<"Input Age=";cin>>age;
	cout<<"Input Salary=";cin>>salary;
}
void employee::output_data(){
	cout<<id<<'\t'<<name<<'\t'<<sex<<'\t'<<age<<'\t'<<salary<<'\t'<<
	tax_salary()<<'\t'<<salary-tax_salary()<<endl;
}
float employee::tax_salary(){
	if(salary<500){
	return salary*0.03;
	}
	else{
		return salary*0.05;
	}
}
int main(){
	employee e;
	e.input_data();
	e.tax_salary();
	e.output_data();
	return 0;
}
