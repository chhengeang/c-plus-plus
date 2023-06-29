#include<iostream>
using namespace std;

template <class T>
class cuboid{
	public:
		T x,y,z;
		cuboid(T L, T W, T H)
		{x=L;y=W;z=H;}
		T surface_area();
		T volume();
};
template <class T>
T cuboid <T>::surface_area()
{return 2*(x*y+y*z+z*x);}

template < class T>
T cuboid <T>::volume()
{return x*y*z;}
 
int main()
{
	cuboid<int>c1(5,6,7);
	cuboid<double> c2(2.5,3.5,4.5);
	
	cout<<"volume of c1"<< c1.volume()<<endl;
	cout<<"volume of c2"<< c2.volume()<<endl;
	cout<<"sueface area of c1 ="<<c1.surface_area()<<endl;
	cout<<"surface area of c2 ="<<c2.surface_area()<<endl;
}

