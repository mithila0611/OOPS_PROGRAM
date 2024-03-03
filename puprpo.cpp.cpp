/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string fullName="mithila";
    protected:
    float semPercentage=9.28;
    private: 
    double phn_no=7601081605;
    public:
    double getphn()
    {
        return phn_no;
    }
    public:
    string name()
    {
        return fullName;
    }
    public:
    float percentage()
    {
        return semPercentage;
    }

};
class details : public student{
    public:
    float a=semPercentage;
    double b=getphn();
};
class details1 : private student{
    public:
    string n=name();
    float p=percentage();
    double ph=getphn();
};
class details2 : protected student{
    public:
    string m=fullName;
    float f=semPercentage;
    double d=getphn();
};
int main()
{
    details obj;
    cout<<"Public Inheritance "<<endl;
    cout<<"My name is : "<<obj.fullName<<endl;
    cout<<"Sem percentage is : "<<obj.a<<endl;
    cout<<"Phone number is : "<<obj.b<<endl<<endl;
    details1 obj1;
    cout<<"private Inheritance"<<endl;
    cout<<"My name is : "<<obj1.n<<endl;
    cout<<"Sem percentage is : "<<obj1.p<<endl;
    cout<<"Phone number is : "<<obj1.ph<<endl<<endl;
    details2 obj2;
    cout<<"protected Inheritance"<<endl;
    cout<<"My name is : "<<obj2.m<<endl;
    cout<<"Sem percentage is : "<<obj2.f<<endl;
    cout<<"Phone number is : "<<obj2.d<<endl;
}