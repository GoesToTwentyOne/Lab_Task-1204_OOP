#include<iostream>
class A{
public:
  int x;
  A(int a){
    x=a;
    std::cout << "X=" <<x<< '\n';
  }
};
  class B:public A{
  public:
    int y;
    B(int a,int b){
      y=b;
      std::cout << "Y=" <<y<< '\n';
    }
  };

  class C:public B{
  public:
    int z;
    C(int a,int b,int c):B(a,b){
      z=c;
      std::cout << "Z=" <<z<< '\n';
    }

  };

int main(){
  C ob(1,2,3);
}
