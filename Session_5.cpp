#include<iostream>
using namespace std;

int main()
{
    /*First Triangle:*/
    for (int x1=0;x1<=5;x1++){
        for(int y1=5-x1;y1>=0;y1--){
            cout<<" ";
        }
        for(int z1=1; z1<=x1+1;z1++){
            cout<<"*";
            
        }
        cout<<"\n";
    }

    cout<<endl;

    /*Second Triangle:*/
    for (int x2=0;x2<=5;x2++){
        for(int y2=5-x2;y2>=0;y2--){
            cout<<" ";
        }
        for(int z2=1;z2<=x2+(x2+1);z2++){
            cout<<"*";  
        }
        cout<<"\n";
    }
    return 0;
}