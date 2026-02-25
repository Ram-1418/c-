#include<iostream>
using namespace std;

class Number{
    private:
    int id;

    public:


    Number(){
        cout <<"i am the construcotr\n";
    }
   void setId(int id){
    this->id=id;
   }

   void show(){
    cout << "employee" << id << endl;
   }
};

int main(){
    Number n1;
    n1.setId(255);
    n1.show();

}