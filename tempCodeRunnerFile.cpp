#include 
using namespace std;
class Shape {
  public:
     void area() {
      cout << "Base Class" << endl;
  }
};
class Circle : public Shape {
  public :
    void area() {
      out << "Area of Circle" << endl;
  }
};
class Rectangle : public Shape {
  public :
    void area() {
      out << "Area of rectangle" << endl;
  }
};

int main() {
  
Shape *p , *q;
p = new Circle();
p -> area();

q = new Rectangle();
q -> area();
  return 0;
}