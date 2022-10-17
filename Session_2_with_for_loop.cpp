#include<iostream>
using namespace std;
int main()
{
    int StudentNumber=1, age, ID, cls;
    string name;
    for(StudentNumber=1; StudentNumber<=5; StudentNumber++)
    {
        cout<<"Enter the name of student number "<<StudentNumber<<"\t";
        cin>>name;
        cout<<"Enter the age of student number "<<StudentNumber<<"\t";
        cin>>age;
        cout<<"Enter the ID of student number "<<StudentNumber<<"\t";
        cin>>ID;
        cout<<"Enter the class of student number "<<StudentNumber<<"\t";
        cin>>cls;
        cout<<"The information of student number "<<StudentNumber<<"are:"<<"\n"<<"Name: "<<name<<"\n"<<"Age: "<<age<<"\n"<<"ID: "<<ID<<"\n"<<"Class: "<<cls<<"\n";
    }

}