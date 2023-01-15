//This program calculates profit or loss for given CP and SP

#include<iostream>
using namespace std;

int main()
{
    int CP, SP;
    cout<<"Enter cost price: "<<endl;
    cin>>CP;

    cout<<"Enter selling price: "<<endl;
    cin>>SP;

    if(CP>SP)
    {
        cout<<"loss = "<<(CP-SP)<<endl;
    }
    else if(CP<SP)
    {
        cout<<"Profit = "<<(SP-CP)<<endl;
    }
    else if(CP==SP)
    {
        cout<<"No profit No loss!"<<endl;
    }

    return 0;
}