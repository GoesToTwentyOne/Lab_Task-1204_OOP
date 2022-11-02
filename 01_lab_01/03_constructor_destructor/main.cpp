#include<iostream>
class Number{
public:
Number(){
  std::cout << "Consturctor from base class" << '\n';
};
~Number(){
  std::cout << "Destroy Number Constructor from base class" << '\n';
};
};
class NumberTwo:public Number{
public:
NumberTwo(){
  std::cout << "Consturctor from derived class" << '\n';

};
~NumberTwo(){
  std::cout << "Destroy Number Constructor from derived class" << '\n';
};
};
main(){
NumberTwo ob1;
}
