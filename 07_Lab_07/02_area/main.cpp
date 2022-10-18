#include <iostream>

using namespace std;

class Shape {
   public:
      virtual int getArea() = 0;
      void setWidth(int w) {
         width = w;
      }

      void setHeight(int h) {
         height = h;
      }

   protected:
      int width;
      int height;
};

class Rectangle: public Shape {
   public:
      int getArea() {
         return (width * height);
      }
};

class Triangle: public Shape {
   public:
      int getArea() {
         return 0.5*height*width;
      }
};

int main(void) {
  Shape *shape1;
   Rectangle rect;
   Triangle  tri;
   shape1=&rect;
   rect.setWidth(5);
   rect.setHeight(7);
   cout << "Total Rectangle area: " << rect.getArea() << '\n';
   shape1=&tri;
   tri.setWidth(5);
   tri.setHeight(7);
   cout << "Total Triangle area: " << tri.getArea() << '\n';

   return 0;
}
