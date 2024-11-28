#include<iostream>
using namespace std;
#include<cmath>


int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    int a=n;
    int count=0;
    

    while (true){
        count++;
        n=n/10;
        if (n==0){
            break;
        }
        else{
            continue;
        }

    }
    
    int sum;
    sum=0;
    int p=0;
    while (p<count){
        int lastdigit=a%10;
        if ((lastdigit!=0)& (lastdigit!=1)){
            cout<<"You have entered digits except 0 and 1... Error... "<<endl;
            break;
        }
        a=a/10;
        sum=sum+(lastdigit*pow(2,p));
        p++;
        if (a==0){
            break;
        }
    } 
    cout<<"Decimal no : : "<<sum<<endl;
    
    return 0;
}

