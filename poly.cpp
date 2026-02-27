#include<iostream>
using namespace std;

// class Math{
//   public:
//   int add(int a, int b){
//     return a+b;
//   }

//   double  add(double a,double b){
//      return a+b;
//   }
// };

class Student{
  public:
   string name;
   int age;

   //default
   Student(){
    name="unlnown";
    age=0;
   }

   //par

   Student(string n){
    name=n;
    age=0;
   }

   Student(string n,int a){
    name=n;
    age=0;
   }

   void display(){
    cout<<name<<""<<age<<endl;
   }
};

int main(){
Student s1;
Student s2("ramesh");
Student s3("amit",20);

s1.display();
s2.display();
s3.display();

}