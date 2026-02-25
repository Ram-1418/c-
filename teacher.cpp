#include<iostream>
#include<string>
using namespace std;

class Teacher{

  public:
  string name;
  double salary;
  string dep;


  Teacher(){
    cout<<"i am  the cosntructor"<<endl;
  }

   Teacher(string name, double salary,string dep){
    this->name=name;
    this->salary=salary;
    this->dep=dep;
   }


  void getPrint(){
    cout<<"name"<<name<<endl;
    cout<<"salary"<<salary<<endl;
    cout<<"dep"<<dep<<endl;
  }

};


int main(){
     Teacher t1("rameshwar",5555.2,"computer science");
     

     t1.getPrint();
}