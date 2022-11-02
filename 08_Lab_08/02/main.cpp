#include<iostream>
using namespace std;
template <typename T>
class A{
public:
  T x,y;
  A(T a,T b){
    x=a;
    y=b;
  }
  T max();
  T min();
};
template <typename T>
T A<T>::max(){
  return (x>y)?x:y;
}
template <typename T>
T A<T>::min(){
  return (x<y)?x:y;
}
int main(){
  A <int>ob(20,30);
  cout << ob.max() << '\n';

  A <double>ob1(20,30);
  cout << ob.min() << '\n';

  A <string>ob2("Nihad","Ab");
  cout << ob2.max() << '\n';

  A <string>ob3("Nihad","Ab");
  cout << ob3.min() << '\n';
}
