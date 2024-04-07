#include<iostream>
using namespace std;
class impureAbs{
    public:
    virtual void exam()=0;
    public:
    virtual void preparation()
    {
        cout<<"Studying"<<endl;
    };
};
class student : public impureAbs{
    public:
    string name;
    public:
    int no;
    public:
    string dept;
    void exam()
    {
        cout<<"Oops exam"<<endl;
    }
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
    obj.exam();
}
