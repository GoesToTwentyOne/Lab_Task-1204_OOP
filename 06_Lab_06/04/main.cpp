#include<iostream>
class A{
public:
  int x;
  A(int a){
    x=a;
    std::cout << "X=" <<x<< '\n';
  }
};
class B:virtual public A{
  public:
    int y;
    B(int a,int b):A(a){
      y=b;
      std::cout << "Y=" <<y<< '\n';
    }
  };

class C:virtual public A{
  public:
    int z;
    C(int a,int c):A(a){
      z=c;
      std::cout << "Z=" <<z<< '\n';
    }

  };
  class D: public B,public C{
    public:
      D(int a,int b,int c):A(a),B(a,b),C(a,c){
        std::cout << "Class D calling " << '\n';

      }
      int multiply(){
        return x*y*z;
      }

    };

int main(){
  D ob(1,2,3);
  std::cout << ob.multiply()<< '\n';
}
