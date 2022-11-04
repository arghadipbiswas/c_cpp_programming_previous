#include<iostream>
using namespace std;
class sos
{
	private:
		int num;
		public:
			int kok();
			
			void lol();
};
int sos :: kok()
{
	cout<<"enter the nos:";
	cin>>num;
	return 0;
}
void sos :: lol()
{
	if(num==0)
	{
		cout<<"zero";
	}
	else if( num<0)
	{
		cout<< "negative";
	}
	else
	{
			cout<<"positive";
	}
}
int main()
{
	sos m;
	m.kok();
	m.lol();
	return 0;
}
