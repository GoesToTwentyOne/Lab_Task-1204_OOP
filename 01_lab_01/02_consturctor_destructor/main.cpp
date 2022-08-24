#include<iostream>
class Number{
private:
  int x,y;
public:
Number(int a ,int b ){
  x=a;
  y=b;
};
~Number(){
  std::cout << "Destroy Number Constructor" << '\n';
}
  void ShowNumber();

};
void Number::ShowNumber(){
  std::cout << "value of x is :"<<x << '\n'<<"value of y is :"<<y <<'\n';
}
main(){
  int a,b;
  std::cout<<"Enter value of x:";
  std::cin>>a;
  std::cout<<"Enter value of y:";
  std::cin>>b;
  Number ob1=Number(a,b);
  ob1.ShowNumber();
}
