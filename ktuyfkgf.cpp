#include <iostream>
using namespace std;
int main()
{
 float s1,s2,s3,s4,s5, avg, percentage;
 cout << "Enter 5 subject marks: ";
 cin >>s1>>s2>>s3>>s4>>s5;
 percentage = (s1+s2+s3+s4+s5) * 100 / 500;
 cout << "Student get "<< percentage <<" % \n";
 if (percentage >= 60)
 cout << "1st Division";
 else if (percentage >= 50 && percentage <= 59)
 cout << "2nd Division";
 else if (percentage >= 40 && percentage <= 49)
 cout << "3rd Division";
 else if (percentage<40)
 cout << "Fail";
 return 0;
}
