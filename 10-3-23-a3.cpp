#include<iostream>
#include<conio.h>
using namespace std;
class point{
	private:
		int x,y;
	public:
		void input()
		{
			cout<<"x="; cin>>x;
			cout<<"y="; cin>>y;
		}
		void output()
		{
			cout<<"x="<<x<<'\t'<<y<<endl;
		}
};
int main()
{
	int n,i;
	cout<<"input number of point:"; cin>>n;
	point *p=new point[n];
	cout<<"input n points:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"point["<<(i+1)<<"]:"<<endl;
		p[i].input();
	}
	cout<<"\n output n point:"<<endl;
	for(i=0;i<n;i++)
	{
		p[i].output();
		cout<<endl;
	}
	delete[] p;
}
