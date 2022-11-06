#include<iostream>
using namespace std;

void Fibonacci(int a){
    int n1 = 0, n2 = 1, NextNumber = 0;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= a; i++)
    {
     if(i == 1)
    {
        cout << n1;
        continue;
    }
    if(i == 2)
    {
        cout <<" "<< n2 << " ";
        continue;
    }
    NextNumber = n1 + n2;
    n1 = n2;
    n2 = NextNumber;
    cout << NextNumber << " ";
    } 
}

int main(){
    int n=0;
    cout<<"Enter the number of Fibonacci Numricals: ";
    cin>> n;
    Fibonacci(n);
    return 0;
}
