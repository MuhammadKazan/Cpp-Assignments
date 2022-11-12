<<<<<<< HEAD
#include<iostream>
using namespace std;

void sortby (int a, int arr[], int n){
   if(n==0){
      for(int j=0; j<a;j++){
         for(int i=0;i<a-1;i++){
            if(arr[i]<arr[i+1]){
               int temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
            }
         }
      }
   }
   else if (n==1){
      for(int j=0; j<a;j++){
         for(int i=0;i<a-1;i++){
            if(arr[i]>arr[i+1]){
               int temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
            }
         }
      }
   }
   else{
      cout<<"Error! The sorting method input can only be 1 or 0."<<endl;
   }
}

int main(){
   int NumberofElements, array[NumberofElements];
   int Ascending;

   cout<<"Enter the number of elements in the array: ";
   cin>>NumberofElements;
   cout<<"Enter the elements of the array: ";
   for(int i=0; i<NumberofElements; i++){
        cin>>array[i];
   }

   cout<<"Enter the sorting method (1=ascending, 0=descending): ";
   cin>>Ascending;

   sortby(NumberofElements,array,Ascending);

   cout<<"Your array after sorting is: "<<endl;
   for(int i=0;i<NumberofElements;i++){
      cout<<array[i]<<"\t";
   }

   return 0;
=======
#include<iostream>
using namespace std;

void sortby (int a, int arr[], int n){
   if(n==0){
      for(int j=0; j<a;j++){
         for(int i=0;i<a-1;i++){
            if(arr[i]<arr[i+1]){
               int temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
            }
         }
      }
   }
   else if (n==1){
      for(int j=0; j<a;j++){
         for(int i=0;i<a-1;i++){
            if(arr[i]>arr[i+1]){
               int temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
            }
         }
      }
   }
   else{
      cout<<"Error! The sorting method input can only be 1 or 0."<<endl;
   }
}

int main(){
   int NumberofElements, array[NumberofElements];
   int Ascending;

   cout<<"Enter the number of elements in the array: ";
   cin>>NumberofElements;
   cout<<"Enter the elements of the array: ";
   for(int i=0; i<NumberofElements; i++){
        cin>>array[i];
   }

   cout<<"Enter the sorting method (1=ascending, 0=descending): ";
   cin>>Ascending;

   sortby(NumberofElements,array,Ascending);

   cout<<"Your array after sorting is: "<<endl;
   for(int i=0;i<NumberofElements;i++){
      cout<<array[i]<<"\t";
   }

   return 0;
>>>>>>> 67dc5db (slight adjustments and 7th assignment and arrays and struct challanges on HackerRank)
}