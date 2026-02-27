#include<iostream>
using namespace std;

 class Animal {
  public:
   virtual void sound(){
    cout<< "animal makes sound"<<endl;
   }
 };

 class Dog:public Animal{
   public:
    void sound(){
      cout<<"doog barks"<<endl;
    }
 };

 int main(){
  Animal *ptr;
  Dog d;
  ptr=&d;
  ptr->sound();
 }