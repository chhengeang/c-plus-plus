#include<iostream>
using namespace std;
float average(float,float,float);
int main()
{
  float math,eng,kh,avg;
  cout<<"Enter math=";cin>>math;
  cout<<"Enter kh";cin>>kh;
  cout<<"Enter eng";cin>>eng;
    avg=average(math,kh,eng);
  cout<<average(math,kh,eng);
    //cout<<"average  ="<<avg;
    
   
}
float average(float m,float e,float k){
  return (m+e+k)/3;
}
example 2:(non return value)


#include<iostream>
using namespace std;
//float average(float,float,float);
void average(float m,float e,float k){
   float avg;
   avg=(m+e+k)/3;
   cout<<"average ="<<avg;
}
int main()
{
  float math,eng,kh,avg;
  cout<<"Enter math=";cin>>math;
  cout<<"Enter kh";cin>>kh;
  cout<<"Enter eng";cin>>eng;
    average(math,kh,eng);
  //cout<<average(math,kh,eng);
    //cout<<"average  ="<<avg;
    
   
}



example3:

#include<iostream>
using namespace std;

void average()//fucn declaration
{
  float math,eng,kh,avg;
  cout<<"Enter math=";cin>>math;
  cout<<"Enter kh";cin>>kh;
  cout<<"Enter eng";cin>>eng;
    avg=(math+kh+eng)/3;
    cout<<"average ="<<avg;
}
int main()
{
    average();//func call

   
}

example4:

#include<iostream>
using namespace std;

float average(){
  float math,eng,kh,avg;
  cout<<"Enter math=";cin>>math;
  cout<<"Enter kh=";cin>>kh;
  cout<<"Enter eng=";cin>>eng;
    
    return (math+kh+eng)/3;
}
int main()
{
    cout<<"avarage = "<<average();//func call

   
}
