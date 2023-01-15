//This program is to create a calculator using switch statement

#include<iostream>
using namespace std;

int main()
{
    float number1, number2;
    char op;

    cout<<"Enter two numbers: "<<endl;
    cin>>number1>>number2;

    cout<<"Enter an operator (+, -, *, /): "<<endl;
    cin>>op;

    switch(op){

        case '+':
        cout<<"Addition = "<<(number1 + number2)<<endl;
        break;

        case '-':
        cout<<"Subtraction = "<<(number1 - number2)<<endl;
        break;

        case '*':
        cout<<"Multiplication = "<<(number1 * number2)<<endl;
        break;

        case '/':
        cout<<"Division = "<<(number1 / number2)<<endl;
        break;

        default:
        cout<<"The operator is not valid!!"<<endl;
        break;
    }

    return 0;
}