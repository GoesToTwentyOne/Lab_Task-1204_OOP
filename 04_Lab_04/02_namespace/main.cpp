#include<iostream>
using namespace std;
namespace scope_1{
  void func(){
    cout << "I'm from scope_1" << '\n';
  }
}
namespace scope_2{
  void func(){
    cout << "I'm from scope_2" << '\n';
  }
}
int main(){
  scope_1::func();
  scope_2::func();
}
