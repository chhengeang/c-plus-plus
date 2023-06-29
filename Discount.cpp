#include<iostream>
using namespace std;
int main(){	
float Discount(float);
float Amount, Dis;

	cout<<"Amount:";  cin>>Amount;
    Dis=Discount (Amount);
	cout<<"Discount="<<Dis<<endl;
	cout<<"Total payment="<<Amount-Dis<<endl;
return 0;

}

float Discount(float Amount){

	if (Amount<550){

	return Amount*0.05;

} 
	else{
	return Amount *0.09;
}
}
