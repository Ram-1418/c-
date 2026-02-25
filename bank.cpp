#include<iostream>
#include<string>
using namespace std;

class Bank{
    public:
    string name;

    Bank(string name){
        name=name;
    }

    void print(){
        cout << "Name:" <<name<<endl;
}
};

int main(){
    Bank b1("ramesh");
    b1.print();

    return 0;
}