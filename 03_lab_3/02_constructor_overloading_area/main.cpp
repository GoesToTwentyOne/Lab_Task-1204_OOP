#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;
class Area{
private:
  double circleArea;
  int rectangleArea;
  double tringleArea;
public:
  Area(double r)
  {
    circleArea=PI*r*r;
    cout<<"Area of circle is : "<<circleArea<<endl;
  }
  Area(int len, int wth)
  {
    rectangleArea=len*wth;
    cout<<"Area of rectangle is : "<<rectangleArea<<endl;
  }
  Area(int a,int b,int c)
  {
    int s=(a+b+c)/2;
    tringleArea=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of tringle is : "<<tringleArea<<endl;
  }

};
int main(){
  Area(5.6);
  Area(76,54);
  Area(12,15,5);
}
