#include<iostream>
using namespace std;

int main(){

    int a = 90;
    int* ptr = &a;
    int** q = &ptr;

    cout << "Value of ptr (address of a): " << ptr << endl;
    cout << "Value at ptr (*ptr): " << *ptr << endl;
    cout << "Value of q (address of ptr): " << q << endl;
    cout << "Value at q (**q): " << **q << endl;

}