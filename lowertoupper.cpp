#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<" the character you've Entered is lower case.";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<" the character you've Entered is Upper case.";
    }
    else{
        cout<<"invalid"<<endl;
    }
    return 0;
}