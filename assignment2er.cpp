#include<iostream>
using namespace std;
class  sample
{
    int val1,val2;
   public:
        void get()
        {
           cout<<"\nEnter 2 value :: ";
           cin>>val1>>val2;
        }
        friend float mean(sample ob);
};
float mean(sample ob)
{
   return float(ob.val1+ob.val2)/2;
}
int main()
{
    sample obj;
    obj.get();
    cout<<"\nMean value is :: "<<mean(obj)<<"\n";
    return 0;
}
