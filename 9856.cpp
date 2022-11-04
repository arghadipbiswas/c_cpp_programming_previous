#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout <<"enter the nos: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
	{
        sum += i * i;
        cout << i << "*" << i << " = " << i * i;
    }
    cout << " The sum of the series is: " << sum;
    return 0;
}
