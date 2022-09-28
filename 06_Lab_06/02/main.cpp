#include<iostream>
class A{
public:
  int x;
  A(int a){
    x=a;
    std::cout << "X=" <<x<< '\n';
  }
};
class B{
  public:
    int y;
    B(int b){
      y=b;
      std::cout << "Y=" <<y<< '\n';
    }
  };

class C:public A,public B{
  public:
    int z;
    C(int a,int b,int c):B(b),A(a){
      z=c;
      std::cout << "Z=" <<z<< '\n';
    }

  };

int main(){
  C ob(1,2,3);
}
