/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    //using endl
    string s;
    cout<<"Enter your name : ";
    cin>>s;
    cout<<"Hello "<<s<<endl;
    //using ends
    cout<<"Hi"<<ends;
    cout<<endl;
    //terminates by inserting null operator
    //using ws
    string name;
    getline(cin>>ws,name);
    cout<<name<<endl;
    //removes whitespaces if they are present
    //flush
    int a=60;
    cout.flush();
    cout<<"The value of a is "<<a<<endl;
    //used to force the buffer to be written
    //setw
    cout<<setw(10)<<"Hi\n";
    //creates spaces provides in setw(n)
    //setfill
    cout<<setfill('/')<<setw(20)<<"Hi maga\n";
    //fills the space given by setw
    //setprecision
    double num=1.2345678910;
    cout<<setprecision(5)<<num<<endl;
    //setprecision decides the values after the decimal points
    return 0;
}