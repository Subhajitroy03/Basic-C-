#include<iostream>
using namespace std;
#include<cmath>

int main(){
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int sum=0;
    int i=0;
    while (true){
        int remainder=n%2;
        if (n==1 || n==0){
            sum=sum+(n*pow(10,i));
            break;
        }
        n=n/2;
        sum=sum+(remainder*pow(10,i));
        i=i+1;
        
    }
    cout<<sum<<endl;
    return 0;
}
