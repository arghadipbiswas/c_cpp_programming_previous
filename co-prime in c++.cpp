#include<iostream>
using namespace std;
class sample
{
	private:
		void read();
		int num1,num2,hcf;
		public:
			void get();
			void cal();
};
void sample :: read()
{
	if(hcf==1)
	{
		cout<<"co-prime nos are=  "<<num1<<num2;
	}
	else
	{
		cout<<"NOT co-prime nos are=  "<<num1<<num2;
	}
}
void sample :: get()
{
	cout<<"enter two nos: ";
	cin>> num1>>num2;
}
void sample :: cal()
{
	for(int i=1;i<=num1;i++)
	{
		if(num1 % i==0 && num2 % i==0)
		{
			hcf=i;
		}
	}
	read();
}
int main()
{
	sample p;
	p.get();
	p.cal();
	return 0;
}
