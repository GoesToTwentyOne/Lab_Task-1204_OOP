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
  bool operator >(Number n);

};
bool Number::operator >(Number n){
  if(x>n.x && y>n.y){
    return true;
  }
  else{
    return false;
  }
}
int main(){

  Number n1(200,400);
  Number n2(500,700);
  bool n3;
  n3=n1>n2;
  if (n3==true){
    cout <<"n1 is greater" << '\n';
  }
  else if(n3==false){
    cout << "n2 is greater" << '\n';
  }
}
