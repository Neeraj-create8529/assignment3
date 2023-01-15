// This program is to print the positive number entered by the user

#include<iostream>
using namespace std;

int main()
{
   int number;

   cout<<"Enter an integer: "<<endl;
   cin>>number;

   if(number>=0)
   {
    cout<<"Entered number = "<<number<<endl;
   }
   else{
    cout<<"Number is negative and skipped!"<<endl;
   }

    return 0;
}