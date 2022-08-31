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
};
Number add(Number a,Number b){
  Number temp;
  temp.x=a.x+b.x;
  temp.y=a.y+b.y;
  return temp;
}
int main(){

  Number n1(200,300);
  Number n2(500,700);
  Number n3;
  n3=add(n1,n2);
  cout << n3.x << '\n';
  cout << n3.y << '\n';
}
