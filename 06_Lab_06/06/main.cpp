#include<iostream>
class A{
public:
  int x;
  void SetValueA(int a){
    x=a;
    std::cout << "X=" <<x<< '\n';
  }
};
class B{
  public:
    int y;
    void setValueB(int b){
      y=b;
      std::cout << "Y=" <<y<< '\n';
    }
  };

class C:public A,public B{
  public:
    int z;
    void SetValueC(int a,int b,int c):setValueB(b),SetValueA(a){
      z=c;
      std::cout << "Z=" <<z<< '\n';
    }

  };

int main(){
  C ob;
  ob.SetValueC(1,2,3);
  ob.SetValueA();
  ob.setValueB();
}
