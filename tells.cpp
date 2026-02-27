#include<iostream>
using namespace std;

class Shape{
  public:
  virtual void area()=0;

};

class Circle:public Shape{
  public:
  void area(){
    cout <<"area of circle =3.14*r*r"<<endl;
  }
};

int main(){
  Shape *ptr;
  Circle c;
  ptr=&c;
  ptr->area();
}