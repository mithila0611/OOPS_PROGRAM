#include<iostream>
using namespace std;
class A
{
    public:
    void aClass()
    {
    cout<<"Iam a Animal\n";
    }
};
class B: public A
{
    public:
    void bClass()
    {
        cout<<"I am a Mammals\n";
    }
};
class C: public A
{
    public:
    void cClass()
    {
        cout<<"I am a Herbivore\n";
    }
};
class D: public C,public B
{
    public:
    void dClass()
    {
        cout<<"Iam a Cow, animal, mammal, herbivore\n";
    }
};
int main()
{
    D obj1;
    //obj1.aClass();
    //aClass() method becomes ambiguous here
    obj1.bClass();
    obj1.cClass();
    obj1.dClass();
    return 0;
}
