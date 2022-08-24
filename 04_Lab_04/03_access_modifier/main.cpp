#include<iostream>
using namespace std;
class A{
public:
  int x=100;
protected:
  int y=200;
private:
  int z=300;
};
class B:public A{

};
class C:protected A{

};
class D:private A{

};
int main(){
  B b;
  b.x;  // access type public // accible in main function
  b.y;  //access type protected// don't accible in main func
  C c;
  c.x;  // access type protected // dont accible in main function
  c.y; //access type protected// don't accible in main func
  D d;
  d.x; // access type private // dont accible in main function
  d.y; //access type private// don't accible in main func



}
