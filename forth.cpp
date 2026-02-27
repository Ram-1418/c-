#include<iostream>
using namespace std;


// class GrandFather{
//   public:
//  void property() {
//         cout << "Grandfather's Property" << endl;
//     }
// };

// class Father :public GrandFather{
//   public:
//   void business() {
//         cout << "Father's Business" << endl;
//     }
// };

// class Child:public Father{
//   public:
//  void study() {
//         cout << "Son is Studying" << endl;
//     }
// };

class Person{
  public:

  void speak(){
    cout<< "peson can speak";
  }
};

class Student:public Person{
  public:
   void study(){
    cout<< "this is the student "<<endl;
   };
};

class Teacher :public Person{
  public:
  void tech(){
    cout <<"teacher is teaching"<<endl;
  }
};

int main(){
  Student s;
  Teacher t;

  s.speak();
  s.study();

  t.speak();
  t.tech();
}

      

