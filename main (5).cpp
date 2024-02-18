/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include "areaBox.h"
#include "volumeBox.h"
using namespace std;
int main()
{
    float length,breadth,height;
    cout<<"Enter the length, breadth, and height : ";
    cin>>length>>breadth>>height;
    #ifdef AREA
    {
       area(length,breadth,height);
    }
    #endif
    #ifndef AREA
    {
        cout<<"You have not included areaBox.h file"<<endl;
    }
    #endif
    #ifdef VOLUME
    {
        volume(length,breadth,height);
    }
    #endif
    #ifndef VOLUME
    {
        cout<<"You have not included volume.h file"<<endl;
    }
    #endif
    return 0;
}
