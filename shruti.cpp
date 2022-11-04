#include <iostream>
using namespace std;
class Cube
{
    public:
      double side;
      static int count;
      Cube(double s = 7.9)
      {
          cout<<"Constructor Call";
          side = s;
          count++;
      }
};
int Cube::count;
int main() 
{
    Cube c1(9.8);
    Cube c2;
    cout<<"\nSide of Cube 1: "<<c1.side;
    cout<<"\nSide of Cube 2: "<<c2.side;
    cout<<"\nNo. Of Objects: "<<Cube :: count;
    return 0;
}
