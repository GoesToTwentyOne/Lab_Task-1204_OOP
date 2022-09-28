#include<iostream>
class A{
public:
  int x;
};
class B: virtual public A {
  public:
    int y;
  };

class C:virtual public A{
  public:
    int z;
  };
  class D: public B,public C{
    public:
      int multiply(){
        return x*y*z;
      }


  };
int main(){
  D ob;
  ob.x=1;
  ob.y=2;
  ob.z=3;
  std::cout << ob.multiply() << '\n';
}
