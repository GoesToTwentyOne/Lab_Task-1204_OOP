#include <iostream>
using namespace std;
class Poly
{
	public:

	void funcShow(int x)
	{
		cout << "value of x is " << x << endl;
	}

	void funcShow(double x)
	{
		cout << "value of x is " << x << endl;
	}

	void funcShow(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y << endl;
	}
  void funcShow(double x, double y)
  {
    cout << "value of x and y is " << x << ", " << y << endl;
  }
  void funcShow(double x, int y, int z)
  {
    cout << "value of x,y and z is " << x << ", " << y << ", " << z <<endl;
  }
};

int main() {
	Poly ob;
	ob.funcShow(7);
  ob.funcShow(56.33);
  ob.funcShow(50,100);
  ob.funcShow(96.33,78.33);
  ob.funcShow(96.33,100,200);

	return 0;
}
