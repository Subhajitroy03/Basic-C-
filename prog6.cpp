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
    cout<<"Total no of Digits is: "<<count<<endl;
    int sum;
    sum=0;
    for (int p=count;p>=1;p--){
        int lastdigit=a%10;
        a=a/10;
        cout<<lastdigit<<endl;
        sum=sum+(lastdigit*pow(10,p-1));
        if (a==0){
            break;
        }
    }
    cout<<"Reverse number : "<<sum<<endl;
    
    return 0;
}
