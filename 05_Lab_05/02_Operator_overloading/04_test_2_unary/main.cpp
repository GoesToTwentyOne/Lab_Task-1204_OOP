#include<iostream>
using namespace std;
class Number{
public:
  int x;
  int y;
  Number(int a,int b){
     x=a;
     y=b;
  }

  void display(){
    cout << x << '\n';
    cout << y << '\n';
  }
  Number operator ++();
  Number operator --();
  Number operator +();
};
Number Number::operator ++(){
  x=++x;
  y=++y;
  return *this;
}
Number Number::operator --(){
  x=--x;
  y=--y;
  return *this;
}
Number Number::operator +(){
  x=x+=1;
  y=y+=1;
  return *this;
}
int main(){

  Number n1(200,400);
  // Number n2(500,700);
  ++n1;
  n1.display();
  --n1;
  n1.display();
  +n1;
  n1.display();

}
