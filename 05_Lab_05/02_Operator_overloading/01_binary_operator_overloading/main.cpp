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
  Number(){
    x=0;
    y=0;
  }
  void display(){
    cout << x << '\n';
    cout << y << '\n';
  }
  Number operator +(Number n);
};
Number Number::operator +(Number n){
  Number temp;
  temp.x=x+n.x;
  temp.y=y+n.y;
  return temp;
}

int main(){

  Number n1(200,400);
  Number n2(500,700);
  Number n3;
  n3=n1+n2;
  n3.display();

}
