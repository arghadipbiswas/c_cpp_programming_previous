#include<iostream>
#include<array>
using namespace std;
int main()
{
    //array<data_Type,array size>
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"element at 2nd Index : "<<a.at(2)<<endl;
    cout<<"empty or not : "<<a.empty()<<endl;
    cout<<"1st element  : "<<a.front()<<endl;
    cout<<"last element  : "<<a.back()<<endl;
}