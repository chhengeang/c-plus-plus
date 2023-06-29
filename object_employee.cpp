#include <iostream>
using namespace std;

class employee{
	private:
		char id[15];
		char name[19];
		char sex;
		int age;
		float salary;
	public:
		void input_Data(){
			cout<<"Enter id: "; cin.seekg(0); cin.get(id,15);
			cout<<"Enter name: "; cin.seekg(0); cin.get(name,19);
			cout<<"Enter sex: "; cin>>sex;
			cout<<"Enter age: "; cin>>age;
			cout<<"Enter salary: "; cin>>salary;
		}
		void output_Data(){
			cout<<id<<'\t'<<name<<'\t'<<sex<<'\t'<<age<<'\t'<<salary<<endl;
		}
};

int main(){
	int n;
	cout<<"Enter n: "; cin>>n;
	employee *emp=new employee[n];
	for(int i=0; i<n; i++)
	emp[i].input_Data();
	
	for(int i=0; i<n; i++)
	emp[i].output_Data();
}
