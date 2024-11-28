#include<iostream>
#include<vector>
using namespace std;
vector <int> vec;
void twopointer(vector <int> &v){
    int leftpointer=0;
    int rightpointer=v.size()-1;
    while(leftpointer<rightpointer){
        if (v[leftpointer]%2!=0 && v[rightpointer]%2==0){
            int a=v[leftpointer];
            v[leftpointer]=v[rightpointer];
            v[rightpointer]=a;

            leftpointer++;
            rightpointer--;
        }
        else if (v[leftpointer]%2==0){
            leftpointer++;
        }
        else if (v[rightpointer]%2!=0){
            rightpointer--;
        }

    }
}
int main(){
    int len;
    int element;
    cout<<"Enter the length of vector : ";
    cin>>len;

    for (int i=0;i<len;i++){
        cout<<"Enter the element : ";
        cin>>element;
        vec.push_back(element);
    }
    twopointer(vec);
    
    for (int i=0;i<len;i++){
        cout<<vec[i]<<" ";

    }

    return 0;
}