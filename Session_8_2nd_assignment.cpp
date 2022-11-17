#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    int& x=a, &y=b;
    int temp=b;
    y=a;
    x=temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}