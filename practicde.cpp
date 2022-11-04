#include<iostream>
using namespace std;
class base
{
    int x;
    public:
    int y;
    void get();
    int get_x();
    void show_x();
};
class derived :public base{
    int z;
    public:
    void add();
    void show();
};
void base :: get()
{
    cin>>x>>y;
}
int base :: get_x()
{
    return x;
}
void base :: show_x()
{
    cout<<x;
}
void derived :: add()
{
    z=y+get_x();
}
void derived :: show()
{
    cout<<"x= "<<show_x();
    cout<<"y= "<<y;
    cout<<"z= "<<z;
}
int main()
{
    derived kp;
    kp.get();
    kp.add();
    kp.show();
    return 0;
}