# include <iostream >
using namespace std;
class Truck ;
class Car
{
int passenger ;
int speed ;
public :
Car (int p, int s) { passenger = p; speed = s; }
friend int sp_greater ( Car c, Truck t);
};
class Truck
{
int weight ;
int speed ;
public :
Truck (int w, int s) { weight = w; speed = s; }
friend int sp_greater ( Car c, Truck t);
};

int sp_greater (Car c, Truck t)
{
return c. speed - t. speed ;
}
int main ()
{
int spd;
Car c (6, 110)  ;
Truck t (10000 , 150) ;
cout << " Comparing c1 and t1 :\n";
spd = sp_greater (c , t);
if(spd <0)
cout << " Truck is faster .\n";
else if(spd ==0)
cout << "Car and Truck speed is the same .\n";
else
cout << "Car is faster .\n";
}
