#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the cost price: Rs ";
    float cp;
    cin>>cp;
    cout<<"Enter the selling price: Rs ";
    float sp;
    cin>>sp;
    if(cp>sp){
        cout<<"Its a loss"<<endl;
        cout<<"The loss is of  Rs "<<cp-sp<<endl;
        cout<<"loss percentage: "<<((cp-sp)*100)/cp<<" %";
    }
    else if (sp>cp){
        cout<<"Its a profit"<<endl;
        cout<<"The profit is of  Rs "<<sp-cp<<endl;
        cout<<"profit percentage: "<<((sp-cp)*100)/cp<<" %";
    }
    else{
        cout<<"Neither profit nor loss";
    }
    return 0;

}
