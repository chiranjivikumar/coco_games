#include <iostream>
using namespace std;

int main(){
    cout<<"Enter your number:";
    int n;
    int sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            sum+=i;
        }
        
    }
    cout<<"sum:"<<sum<<endl;
    return 0;
}