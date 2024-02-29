#include<iostream>
using namespace std;
class principal{
    public:
    void holiday()
    {
        cout<<"Tommorrow is holiday"<<endl;
    }
};
class student : public  principal{
    public:
    void rest()
    {
        cout<<"Taking rest"<<endl;
    }
};
int main()
{
    student obj;
    obj.holiday();
    obj.rest();
}
