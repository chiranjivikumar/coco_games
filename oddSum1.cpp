#include <iostream>
using namespace std;

int main(){
    int n,i=1,count=0;
    cout<<"Enter your number:";
    cin>>n;
    while(count<n){
        if(i%2==0){
           count++;
            cout<<"sum:"<<i<<endl;
        }
    }
    i++;
    cout<<"sum:"<<i<<endl;

    return 0;
}