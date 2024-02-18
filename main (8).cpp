/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class Student
{
    public:
    Student()
    {
        string collegeName = "MVGR";
        int collegeCode=33;
        cout<<"CollegeName : "<<collegeName<<endl;
        cout<<"CollegeCode: "<<collegeCode<<endl;
    }
    Student(string fullName, double semPerentage)
    {
        cout<<"FullName : "<<fullName<<endl;
        cout<<"SemPercentage : "<<semPerentage<<endl;
    }
    ~Student(){}
};
int main()
{
    Student mithila;
    string name;
    float val;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your sem percentage : ";
    cin>>val;
    Student mithila06(name,val);
    return 0;
}