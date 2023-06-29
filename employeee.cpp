#include<iostream>
#include<string.h>
using namespace std;
class employee{
	private:
		int id;
		char name[21];
		char sex;
		float salary;
	public:
		int getid()       {return id;}	
		char *getname()   {return name;}
		char getsex()     {return sex;}
		float getsalary() {return salary;}
		
		void setid(int i) {id=i;}
		void setname(const char *n) {strcpy(name,n);}
		void setsex(char s){sex=s;}
		void setsalary(float sa){salary=sa;}
		void input_data();
		void output_data();
		
};
void employee::input_data(){
	cout<<"enter id="; cin>>id;
	cout<<"enter name="; cin.seekg(0); cin.get(name,20);
	cout <<"enter sex="; cin>>sex;
	cout<<"enter salary="; cin>>salary;
}
void employee::output_data(){
	cout<<getid()<<'\t'<<getname()<<'\t'<<getsex()<<'\t'<<getsalary()<<endl;
}
void sort_data(employee em[],int n){
	int i,j;
	employee temp;
	for(i=0;i<n;i++)
	for(j=i+1;j<n-1;j++)
	if(em[i].getsalary()<em[j].getsalary())
	{
		temp=em[i];
		em[i]=em[j];
		em[j]=temp;
	}
}
int main()
{
	int i,n;
	cout<<"enter n="; cin>>n;
	employee *emp=new employee[n];
	for(i=0;i<n;i++)
	emp[i].input_data();
	
	sort_data(emp,n);
	cout<<"Id"<<'\t'<<"Name"<<'\t'<<"Sex"<<'\t'<<"Salary"<<endl;
	for(i=0;i<n;i++)
	emp[i].output_data();
}

