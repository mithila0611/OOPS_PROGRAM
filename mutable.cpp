#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=10;
    cout<<"Integer"<<endl<<&a<<endl;
    a=20;
    cout<<&a<<endl;
    //integer is immutable
    float b=1.34;
    cout<<"Float"<<endl<<&b<<endl;
    b=9.999;
    cout<<&b<<endl;
    double c=9.99999999999;
    cout<<"Double"<<endl<<&c<<endl;
    c=8.89876531235;
    cout<<&c<<endl;
    string s="mith";
    cout<<"String"<<endl<<&s<<endl;
    s="dola";
    cout<<&s<<endl;
}
