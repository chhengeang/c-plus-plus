#include<iostream>
using namespace std;
  int main()
  {
  	int studentAge;
  	try{
  		cout<<"student age=";
  		cin>>studentAge;
  		if(studentAge<0)
  		throw "positive number requied";
  			cout<<"\n student Age="<<studentAge<<"\n\n";
	  }
	  catch(char const *message)
	  {
	  	cout<<"Error:"<<message;
	  }
  }

