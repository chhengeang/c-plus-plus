#include<iostream>
#include<string.h>
using namespace std;
class Myclass
{
	public:
//		constructor with parameter
		Myclass(int a, float b,const char *c){
			this->a =a;   //Myclass::a=a;//a=aa;
			this->b =b;
			strcpy(this->c,c);
		}
		//default constructoe
		Myclass(){
			a=1;
			b=3,5;
			strcpy(c,"abc");
		}
		void show_numbers(){
			cout<< a <<' '<< b <<' '<< c << '\n';
		}
		private:
			int a;
			float b;
			char c[20];
};
int main(){
	Myclass one(1,34.5,"sok");
	Myclass defaults;
	Myclass happy(101,99.00,"chan dara");
	one.show_numbers();
	defaults.show_numbers();
	happy.show_numbers();
	return 0;
}
