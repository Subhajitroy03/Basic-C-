#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    cout<<"Enter the first number :  ";
    cin>>num1;
    cout<<"Enter the second number :  ";
    cin>>num2;
    char operation;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>operation;
    switch(operation){
        case '+':
            cout<<"Addition is : "<<num1+num2;
            break;
        case '-':
            cout<<"Subtraction is : "<<num1-num2;
            break;
        case '*':
            cout<<"Multiplication is : "<<num1*num2;
            break;
        case '/':
            if (num2!=0){
                cout<<"Division is : "<<num1/num2;
                break;
            }
            else{
                cout<<"Division not possible";
                break;
            }
        default:
            cout<<"Select an operator from the bracket";
            break;
    }


    return 0;
}  
