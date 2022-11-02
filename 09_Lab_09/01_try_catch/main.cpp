#include<iostream>
using namespace std;
int main(){
  int x;
cin >> x;
try{
  if(x>0){
    cout << "value of x is :" <<x<< '\n';
  }
  else{
    throw(x);
  }
}
catch(int n){
  cout <<"you enter the negative one.Which is invalid.Try again" << '\n';
}
}
