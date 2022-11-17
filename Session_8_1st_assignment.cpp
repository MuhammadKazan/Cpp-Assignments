#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number of elemnts in your array: ";
    cin>>a;
    
    int n=a, arr[n];
    
    cout<<"Enter the elements of your array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int l=a;

   for(int i=0; i<l-1;i++){
        int temp=*(arr+i);
        *(arr+i)=*(arr+l-1);
        *(arr+l-1)=temp;
        l--;
    }

    cout<<"Your array post-reversal is: "<<endl;
    for(int k=0; k<n; k++){
        cout<<arr[k]<<"\t";
    }

    return 0;
}