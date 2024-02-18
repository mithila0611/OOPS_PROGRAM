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
    string fullName;
    int rollNum;
    double semPerentage;
    string collegeName;
    int collegeCode;
    Student()
    {
        cout<<"Student class initialized!!\nIam a student\n";
    }
    ~Student(){}
};
int main()
{
    Student mithila;
    cout<<"Enter your name : ";
    getline(cin,mithila.fullName);
    cout<<"Enter your roll number : ";
    cin>>mithila.rollNum;
    cout<<"Enter your sem percentage : ";
    cin>>mithila.semPerentage;
    cout<<"Enter your college name : ";
    cin>>mithila.collegeName;
    cout<<"Enter your college code : ";
    cin>>mithila.collegeCode;
    cout<<"Name : "<<mithila.fullName<<endl;
    cout<<"RollNum : "<<mithila.rollNum<<endl;
    cout<<"SemPercentage : "<<mithila.semPerentage<<endl;
    cout<<"CollegeName : "<<mithila.collegeName<<endl;
    cout<<"CollegeCode : "<<mithila.collegeCode<<endl;
    return 0;
}
