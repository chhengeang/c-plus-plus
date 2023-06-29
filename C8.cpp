#include<iostream>
using namespace std;

float total_score(float k,float m,float e){
  float data;
  data=k+m+e;  
  return data;
}
float average(float k,float m,float e){
  return (m+e+k)/3;
}
int main(){
  float math,eng,kh,avg,total;
  cout<<"Enter math = ";cin>>math;
  cout<<"Enter kh = ";cin>>kh;
  cout<<"Enter eng = ";cin>>eng;
  avg=average(math,kh,eng);
  total=total_score(math,kh,eng);
  cout<<"average  ="<<avg;
  cout<<"Total Score  ="<<total;
   
}
