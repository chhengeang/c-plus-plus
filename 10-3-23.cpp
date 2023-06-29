#include<iostream>
#include<conio.h>
using namespace std;
class test{
	private:
		int x;
	public:
		test(){this ->x=7;}
		test(int x){this ->x=x;	}
		test(test &other){this->x=other.x;	}
		~test(){
			cout<<"object x="<<x<<"at position"<<this<<
			"was destroyed"<<endl;
		}
		void set(int xx){this->x=xx;}
		int getx (){return this ->x;	}
};
int main(){
	test b1;
	test b2(55);
	test b3(b2);
	
	cout<<"b1 has value="<<b1.getx()<<endl;
	cout<<"b2 has value="<<b2.getx()<<endl;
	cout<<"b3 has value="<<b3.getx()<<endl;
	b1.set(88);
	cout<<"b1 has value="<<b1.getx()<<endl;
	test *p=new test(777);
	cout<<"*p has value="<<p->getx()<<endl;
	
	delete p;
}
