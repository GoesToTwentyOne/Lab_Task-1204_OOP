#include<iostream>
class StarTech{
public:
  virtual void phone()=0;
  // virtual void laptop()=0;
};
class Nokia:public StarTech{
  void phone(){
   camera();
   features();
   display();
   height_weight();
   manufacture_Country();
  }
  void camera(){
    std::cout << "64MP" << '\n';
    std::cout << "Night mode" << '\n';
    std::cout << "Slow Motion" << '\n';
    std::cout << "Super Slow Motion" << '\n';
  }
  void display(){
    std::cout << "Super Amulated" << '\n';

  }
  void height_weight(){
    std::cout << "smoth size" << '\n';
  }
  void features(){
    std::cout << "Fingerprint" << '\n';
    std::cout << "Facelock" << '\n';
    std::cout << "RAM=8GB and ROM=256GB" << '\n';
  }
  void manufacture_Country(){
    std::cout << "Nokia India" << '\n';
    std::cout  << '\n';
    std::cout  << '\n';
  }
};
class Iphone:public StarTech{
  void phone(){
   camera();
   features();
   display();
   height_weight();
   manufacture_Country();

  }
  void camera(){
    std::cout << "Ai lens" << '\n';
    std::cout << "Night mode" << '\n';
    std::cout << "Slow Motion" << '\n';
    std::cout << "Super Slow Motion" << '\n';


  }
  void display(){
    std::cout << "Super Amulated" << '\n';

  }
  void height_weight(){
    std::cout << "smoth size" << '\n';
  }
  void features(){
    std::cout << "Fingerprint" << '\n';
    std::cout << "Facelock" << '\n';
    std::cout << "RAM=8GB and ROM=256GB" << '\n';

  }
  void manufacture_Country(){
    std::cout << "Apple USA" << '\n';
    std::cout  << '\n';
    std::cout  << '\n';
  }
};
class Asus:public StarTech{
  void laptop(){
   camera();
   features();
   display();
   height_weight();
   manufacture_Country();

  }
  void camera(){
    std::cout << "1080 hd" << '\n';
    std::cout << "Night mode" << '\n';
  }
  void display(){
    std::cout << "60 HZ" << '\n';

  }
  void height_weight(){
    std::cout << "1.5 KG "<< '\n';
  }
  void features(){
    std::cout << "Fingerprint" << '\n';
    std::cout << "RAM=8GB" << '\n';
    std::cout << "SSD = 500 GB" << '\n';

  }
  void manufacture_Country(){
    std::cout << "Asus USA" << '\n';
    std::cout  << '\n';
    std::cout  << '\n';
  }
};


int main(){
  StarTech *st;
  Nokia n;
  st=&n;
  st->phone();
  Iphone i;
  st=&i;
  st->phone();
  // Asus as;
  // st=&as;
  // st->laptop();
}
