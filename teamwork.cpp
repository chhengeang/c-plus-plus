#include<iostream>
#include<string.h>
using namespace std;

// class product 
class product{
  
  private:
    int id;
    char name[20];
    int qty;
    char category[10];
    float price;
    
  public:
    product(int id=0,const char *name="",const char *category="",int qty=0,float price=0){
      
    }
    void Input_Data();
    void Show_Data();
    void Header();
    //setter 
    void setID(int id){
      this->id=id;
    }
    void setName(char *name){
      strcpy(this->name,name);
    }
    void setQty(int qty){
      this->qty=qty;
    }
    void setCategory(char *category){
      strcpy(this->category,category);
    }
    void setPrice(float price){
      this->price=price;
    }
    
    
    //getter 
    int getID(){return id;}
    char *getName(){ return name;}
    int getQty(){ return qty;}
    char *getCategory(){ return category; }
    float getPrice(){ return price;}
    
};

// declear function
void Message();
void sorting(product Pro[],int n);

// global variable
int i,n,j,tempID,tempQty;
float tempPrice;
char tempName[20],tempCategory[10];


int main(){
  cout<<"#_____________________________________________#"<<endl;
  cout<<"Plz input product before use system"<<endl;
  cout<<"#_____________________________________________#"<<endl;
  cout<<endl;
  cout<<"Plz input num of product: ";cin>>n;
    product *Pro=new product[n];
    
    cout<<endl;
      for(i=0;i<n;i++)
        Pro[i].Input_Data();
  

int choice;
again:
  Message();
  cout<<endl;
  cout<<"Plz choose: ";cin>>choice;
  switch(choice){
    case 1:{
      cout<<endl;
      sorting(Pro,n);
      Pro->Header();
      for(i=0;i<n;i++){
        Pro[i].Show_Data();
        cout<<endl;
      }
      cout<<endl;
      goto again;
      break;  
    }
    case 2:{
    
      break;
    }
    
  }

  
  
  return 0;
  
}
void product::Header(){
  cout<<"#_____________________________________________#"<<endl;
  cout<<"ID"<<"\t"<<"NAME"<<"\t"<<"CATEGORY"<<"\t"<<"QTY"<<"\t"<<"PRICE"<<endl;
  cout<<"#_____________________________________________#"<<endl;
}
void product::Input_Data(){
//  system("cls");
  cout<<"Input ID:";cin.seekg(0);cin>>id;
  cout<<"Input Name:";cin.seekg(0);cin.get(name,20);
  cout<<"Input Qty:";cin.seekg(0);cin>>qty;
  cout<<"Input Category:";cin.seekg(0);cin.get(category,10);
  cout<<"Input Price:";cin.seekg(0);cin>>price;
}
void product::Show_Data(){
  
  cout<<""<<id<<"\t"<<""<<name<<"\t"<<""<<category<<"\t\t"<<""<<qty<<"\t"<<""<<price<<endl;
}
void update_All_By_ID(product Pro[],int n){
  
}
void Message(){

  cout<<"1.List Product "<<endl;
  cout<<"2.Update All By ID: "<<endl;
  cout<<"2.Update By one "<<endl;
  cout<<"3.Search Product"<<endl;
  cout<<"4.Delete Product"<<endl;
  
}

void sorting(product Pro[],int n){
    for(i=0;i<n-1;i++){
      for(j=+1;j<n;j++){
        if(strcmp(Pro[i].getCategory(),Pro[j].getCategory())>0){
          
          tempID=Pro[i].getID();
          strcpy(tempName,Pro[i].getName());
          tempQty=Pro[i].getQty();
          strcpy(tempCategory,Pro[i].getCategory());
          tempPrice=Pro[i].getPrice();
          

          Pro[i].setID(Pro[j].getID());
          strcpy(Pro[i].getName(),Pro[j].getName());
          Pro[i].setQty(Pro[j].getQty());
          strcpy(Pro[i].getCategory(),Pro[j].getCategory());
          Pro[i].setPrice(Pro[j].getPrice());
          
          
          Pro[j].setID(tempID);
          strcpy(Pro[j].getName(),tempName);
          Pro[j].setQty(tempQty);
          strcpy(Pro[j].getCategory(),tempCategory);
          Pro[j].setPrice(tempPrice);
          
        }
      }
    }
}
