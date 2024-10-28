#include<iostream>
using namespace std;
int main(){
    int Marks;
    cout<<"Enter your Marks:";
    cin>>Marks;
    if(Marks>=90){
        cout<<"Your Grade is ' S '";
    }
    else if (Marks>=80&& Marks<90)
    {
        cout<<"Your Grade is ' A+ '";
    }
    else if (Marks>=70&& Marks<80)
    {
        cout<<"Your Grade is ' A '";
    }
    else if (Marks>=60&& Marks<70)
    {
        cout<<"Your Grade is ' B+ '";
    }
    else if (Marks>=50&& Marks<60)
    {
        cout<<"Your Grade is ' B '";
    }else if (Marks>=40&& Marks<50)
    {
        cout<<"Your Grade is ' C '";
    } 
    else{
        cout<<"Fail";
}   

    return 0;
}