/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void even(int);
int main()
{
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    if(num>=0) {
        even(num);
    }
    else {
       cout<<"Invalid input!!"<<endl; 
    }
}
void even(int n)
{
    if(n%2==0)
    {
        cout<<n<<" is an even number"<<endl;
    }
    else
    {
        cout<<n<<" is an odd number"<<endl;
    }
}