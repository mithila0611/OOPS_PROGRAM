#include<iostream>
using namespace std;
class pureAbs{
    public:
    virtual void preparation()=0;
};
class student : public pureAbs{
    public:
    string name;
    public:
    int no;
    public:
    string dept;
    void preparation()
    {
        cout<<"Nyt out"<<endl;
    }
};
int main()
{
    student obj;
    cout<<"Enter student name: ";
    cin>>obj.name;
    cout<<"Enter roll no : ";
    cin>>obj.no;
    cout<<"Enter department name : ";
    cin>>obj.dept;
    obj.preparation();
}
