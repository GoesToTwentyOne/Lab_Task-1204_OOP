#include<iostream>
class Number{
private:
  int x,y;
public:
  void SetNumber(){
    x=10;
    y=20;
  }
  void ShowNumber();

};
void Number::ShowNumber(){
  std::cout << "value of x is :"<<x << '\n'<<"value of y is :"<<y <<'\n';
}
main(){
  Number ob1;
  ob1.SetNumber();
  ob1.ShowNumber();
}
