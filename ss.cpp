#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
		void display()
		{
			cout<<"Distance is feet= "<<feet<<", inches= "<<inches<<endl;
		}
	public:
		void set_distance();
		void add(Distance p, Distance d);
};
void Distance :: set_distance()
{
	cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
}
void Distance :: add(Distance d1, Distance d2)
{
	feet = d1.feet + d2.feet;
	inches = d1.inches + d2.inches;
	feet = feet + (inches / 12);
	inches = inches % 12;
	display();
}
int main()
{
	Distance d1, d2, d3;
	d1.set_distance();
	d2.set_distance();
	d3.add(d1, d2);
	return 0;
}
