//This program checks whether the length and bredth are of a square or not

#include<iostream>
using namespace std;

int main()
{
    int length, bredth;
    cout<<"Enter length and bredth: "<<endl;
    cin>>length>>bredth;

    if(length==bredth)
    {
        cout<<"It is a square"<<endl;
    }
    else{
        cout<<"It is a ractangle"<<endl;
    }

    return 0;
}