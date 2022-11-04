#include<iostream>
using namespace std;
int main()
{
   // variables
   int n1, n2, n3;
   int sum;

   // take input and store in variables
   cout << "Enter three numbers: ";
   cin >> n1 >> n2 >> n3;

   // calculate sum
   sum = n1 + n2 + n3;
   
   // display result
   cout << "Sum = " << sum << endl; 

   return 0;
}
