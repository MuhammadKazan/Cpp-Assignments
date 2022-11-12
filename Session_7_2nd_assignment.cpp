<<<<<<< HEAD
#include<iostream>
using namespace std;
void reverse(int a, int arr[]){
  for(int i=0; i<a-1;i++){
        int temp=arr[i];
        arr[i]=arr[a-1];
        arr[a-1]=temp;
        a--;
    }
}

int main(){
    int  NumberofElements, array[NumberofElements];
    
    cout<<"Enter the number of elements in your array: ";
    cin>>NumberofElements;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<NumberofElements; i++){
        cin>>array[i];
    }

   reverse(NumberofElements,array);

    cout<<"Your array post-reversal is: "<<endl;
    for(int i=0; i<NumberofElements; i++){
        cout<<array[i]<<"\t";
    }

    return 0;
=======
#include<iostream>
using namespace std;
void reverse(int a, int arr[]){
  for(int i=0; i<a-1;i++){
        int temp=arr[i];
        arr[i]=arr[a-1];
        arr[a-1]=temp;
        a--;
    }
}

int main(){
    int  NumberofElements, array[NumberofElements];
    
    cout<<"Enter the number of elements in your array: ";
    cin>>NumberofElements;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<NumberofElements; i++){
        cin>>array[i];
    }

   reverse(NumberofElements,array);

    cout<<"Your array post-reversal is: "<<endl;
    for(int i=0; i<NumberofElements; i++){
        cout<<array[i]<<"\t";
    }

    return 0;
>>>>>>> 67dc5db (slight adjustments and 7th assignment and arrays and struct challanges on HackerRank)
}