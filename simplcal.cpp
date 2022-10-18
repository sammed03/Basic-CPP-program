#include<iostream>
using namespace std;

int main()
{
    cout<<"\nSIMPLE CALCULATOR";

    int num1, num2;
    char ch;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;

    cout<<"\nChoose any Operation:- "<<endl;
    cout<<"1 Addition"<<endl;
    cout<<"2 Subtraction"<<endl;
    cout<<"3 Multiplication"<<endl;
    cout<<"4 Division"<<endl;

    cout<<"\nEnter Your Choice: "<<endl;
    cin>>ch;

    switch(ch){

        case '1':
            cout<<"\nAddition of " << num1 << " and " << num2 << " is : " << num1 + num2;
            break;

        case '2':
            cout<<"\nSubtraction of " << num1 << " and " << num2 << " is : " << num1 - num2;
            break;

        case '3':
            cout<<"\nMultiplication of " << num1 << " and " << num2 << " is : " << num1 * num2;
            break;

        case '4':
            cout<<"\nDivision of " << num1 << " and " << num2 << " is : " << num1 / num2;
            break;

        default :
            cout<<"\nERROR ! You Entered a Wrong Choice . ";

    }

    return 0;
}