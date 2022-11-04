#include<iostream>
using namespace std;
class q
{
		public:
			int x;
			void cal();
			void get();
};
void q ::cal()
{
	if(x%2==0)
	{
		cout<<"even nos";
	}
	else
	cout<<"odd nos";
}
void q :: get()
{
	cout<<"enter the nos: ";
	cin>>x;
}
int main()
{
	q p;
	p.get();
	p.cal();
	return 0;
}
