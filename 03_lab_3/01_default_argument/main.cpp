#include <iostream>
using namespace std;

  void funcShow(double x, int y, int z)
  {
    cout << "value of x,y and z is " << x << ", " << y << ", " << z <<endl;
  }
  void funcShow(int x, int y=0, int z=0)
  {
    cout << "value of x,y and z is " << x << ", " << y << ", " << z <<endl;
  }
  void funcShow(char x, int y)
  {
    cout << "value of x,y is " << x << ", " << y <<endl;
  }

int main() {
  funcShow(1,2,3);
  funcShow(100,200);
  funcShow(230.45,400,500);
  funcShow(19);
  funcShow('N',45);
	return 0;
}
