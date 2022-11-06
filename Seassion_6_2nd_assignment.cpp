#include<iostream>
#include <cstdarg> 
using namespace std;

void arrang(int num, int ascending, ...){
   int array[num];
   va_list MyList;
   va_start(MyList,ascending);
   for(int i=0;i<num;i++){
      array[i]=va_arg(MyList,int);
   }
   if(ascending==0){
   for(int j=0; j<num;j++){
      for(int i=0;i<num-1;i++){
         if(array[i]<array[i+1]){
            int temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
         }
      }
   }
   }
   else if (ascending==1){
   for(int j=0; j<num;j++){
      for(int i=0;i<num-1;i++){
         if(array[i]>array[i+1]){
            int temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
         }
      }
   }
   }
   else {
      cout<<"error";
   }
   for(int i=0;i<num;i++){
      cout<<array[i]<<"\t";
   }
   va_end(MyList);
}

int main(){
   int n=6,a,array[n];
   cout<<"Enter the arranging order (1=Ascending, 0=Descending): ";
   cin>>a;
   /*cout<<"Enter the number of numricals: ";
   cin>>n;
    cout<<"Enter the desired numbers: ";
   for(int i=0;i<n;i++){
      cin>>array[i];
   }
   arrang(n,a,array[n]); */
   arrang(n,a,11,22,412,1,0,2);
}