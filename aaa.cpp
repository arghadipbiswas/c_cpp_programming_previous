// CPP program to find volume and
// total surface area of cuboid
#include <bits/stdc++.h>
using namespace std;

// utility function
double areaCuboid(double l, double h, double w)
{
	return (l * h * w);
}

double surfaceAreaCuboid(double l, double h, double w)
{
	return (2 * l * w + 2 * w * h + 2 * l * h);
}

// driver function
int main()
{
	double l = 1;
	double h = 5;
	double w = 7;
	cout << "Area = " << areaCuboid(l, h, w) << endl;
	cout << "Total Surface Area = "
		<< surfaceAreaCuboid(l, h, w);
	return 0;
}

