#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number of row:";
    cin>>x;
    //  int y;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<" "<<endl;
    }    
    return 0;
}