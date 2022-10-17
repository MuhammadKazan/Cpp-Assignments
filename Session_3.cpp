#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int firstNumber, secondNumber;
    char Operation;
    
    cout<<"Enter the first number"<<endl;
    cin>>firstNumber;

    E: cout<<"Enter the operator (supports logical operators)"<<"\n"<<"AND=&"<<"\n"<<"OR=|"<<"\n"<<"NOT=!"<<"\n"<<"XOR=X"<<"\n"<<"Square Root=S"<<"\n";
    cin>>Operation;

    switch (Operation)
    {
    case '!':
        cout<<"The answer is "<<!firstNumber<<endl;
        break;
    case 'S':
        cout<<"The answer is "<<sqrt(firstNumber)<<endl;
        break;
    case '+':
        cout<<"Enter the second number"<<endl;
        cin>>secondNumber;
        cout<<"The answer is "<<firstNumber+secondNumber<<endl;
        break;
    case '-':
        cout<<"Enter the second number"<<endl;
        cin>>secondNumber;
        cout<<"The answer is "<<firstNumber-secondNumber<<endl;
        break;
    case '*':
        cout<<"Enter the second number"<<endl;
        cin>>secondNumber;
        cout<<"The answer is "<<firstNumber*secondNumber<<endl;
        break;
    case '/':
        cout<<"Enter the second number"<<endl;
        cin>>secondNumber;
        cout<<"The answer is "<<firstNumber/secondNumber<<endl;
        break;
    case '%':
        cout<<"Enter the second number"<<endl;
        cin>>secondNumber;
        cout<<"The answer is "<<firstNumber%secondNumber<<endl;
        break;
    case '^':
        cout<<"Enter the second number"<<endl;
        cin>>secondNumber;
        cout<<"The answer is "<<pow(firstNumber,secondNumber)<<endl;
        break;   
    case '&':
        cout<<"Enter the second number"<<endl;
        cin>>secondNumber;
        cout<<"The answer is "<<(firstNumber & secondNumber);
        break;
    case '|':
        cout<<"Enter the second number"<<endl;
        cin>>secondNumber;
        cout<<"The answer is "<<(firstNumber | secondNumber);
        break;
    case 'X':
        cout<<"Enter the second number"<<endl;
        cin>>secondNumber;
        cout<<"The answer is "<<(firstNumber ^ secondNumber);
        break;
    default:
        cout<<"ERROR! Unknown Operator. Please try again."<<endl;
        goto E;
        break;
    }
    return 0;
}