#include<iostream>
using namespace std;
	int main()
	{
		float score;
		cout<<"Etner score="; cin>>score;
		if(score>50){
			if(score>100){
				if(score>150){
					if(score>200){
					}else{
					cout<<"You get A";
					}
				}else{
					cout<<"You get B";
				}
			}else{
				cout<<"You get C";
			}
		
		}else{
			cout<<"You get D";
		}
	}
