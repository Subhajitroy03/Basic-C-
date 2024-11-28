#include<iostream>
using namespace std;


int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    int a=n;
    int count=0;
    int sum;
    sum=0;
    while (true){
        sum=sum+(n%10);
        n=n/10;
        if (n==0){
            break;
        }
    }
    cout<<"Sum of digits : "<<sum<<endl;

    while (true){
        count++;
        a=a/10;
        if (a==0){
            break;
        }
        else{
            continue;
        }

    }
    cout<<"Total no of Digits is: "<<count<<endl;
    
    return 0;
}
