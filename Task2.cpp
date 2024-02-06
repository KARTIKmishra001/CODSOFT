#include<iostream>
using namespace std;
class Calculator{
    public:
    virtual void calculate(){}
};
class addition: public Calculator{
    public:
    float num1,num2,ans;
      void calculate(){
        cout<<"Enter the first Addend:";
        cin>>num1;
        cout<<"Enter the second Addend:";
        cin>>num2;
        ans=num1+num2;
        cout<<"Your addition of number is :";
        cout<<ans;
        cout<<endl;
      }
};
class substraction: public Calculator{
    public:
    float num1,num2,ans;
      void calculate(){
        cout<<"Enter the  Minuend:";
        cin>>num1;
        cout<<"Enter the Subtrahend:";
        cin>>num2;
        ans=num1-num2;
        cout<<"The  difference is :";
        cout<<ans;
        cout<<endl;
      }
};
class multiplication: public Calculator{
    public:
    float num1,num2,ans;
      void calculate(){
        cout<<"Enter the Multiplicand:";
        cin>>num1;
        cout<<"Enter the Multiplier:";
        cin>>num2;
        ans=num1*num2;
        cout<<"The product of the number is :";
        cout<<ans;
        cout<<endl;
      }
};
class division: public Calculator{
    public:
    float num1,num2,ans;
      void calculate(){
        cout<<"Enter the Dividend:";
        cin>>num1;
        cout<<"Enter the Diviser:";
        cin>>num2;
        ans=num1 / num2;
        cout<<"The quotient is :";
        cout<<ans;
        cout<<endl;
      }
};

int main(){
    int choice;
    char n;
    Calculator *ptr;
    do{
        cout <<"\t\t\t\tWelcome to CALCULATOR"<<endl;
    cout<<"\t\tEnter 1 for Addition\t\tEnter 2 for Substraction"<<endl;
    cout<<"\t\tenter 3 for multiplication\tEnter 4 for Division"<<endl;
    cout<<"\t\t\t\tEnter 0 to exit"<<endl;
    cin>>choice;
    addition a;
    substraction s;
    multiplication m;
    division d;
    switch(choice){
        case 1:
          ptr=&a;
          ptr->calculate();
          break;
        case 2:
          ptr=&s;
          ptr->calculate();
          break;
        case 3:
          ptr=&m;
          ptr->calculate();  
          break;
        case 4:
          ptr=&d;
          ptr->calculate();
          break; 
        case 0:
          break;   
    }
    cout<<"Do you want to use calculator again[y/n]:";
    cin>>n;
    }while(n=='y'||n=='Y');

}