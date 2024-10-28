#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your age:";
    cin>>x;
    if(x>=18){
        cout<<"you can vote";
    }
    else{
        cout<<" You can't vote";
    }

    return 0;
}