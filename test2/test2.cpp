// example on constructors and destructors
#include <iostream>
using namespace std;

class CRectangle {
    int *width, *height;
  public:
    CRectangle ();
    CRectangle (int,int);
    ~CRectangle ();
    int area () {return (*width * *height);}
};

CRectangle::CRectangle () {
  width = new int;
  height = new int;
  *width = 5;
  *height = 5;
  cout << "constructor: no param" << endl;
}
CRectangle::CRectangle (int a, int b) {
  width = new int;
  height = new int;
  *width = a;
  *height = b;
  cout << "constructor: a=" << a << " b=" << b << endl;
}

CRectangle::~CRectangle () {
  delete width;
  delete height;
  cout << "destructor" << endl;
}

int main () {
  CRectangle recta (3,4);
  cout << "recta area: " << recta.area() << endl;
  CRectangle rectb;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
