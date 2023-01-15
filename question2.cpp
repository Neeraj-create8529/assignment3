// This program gives the absolute value of a given number

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter an integer: "<<endl;
    cin>>number;

    if(number<0)
    {
        number= number*(-1);
    }

    cout<<"Absolute value of number is "<<number<<endl;

    return 0;
}