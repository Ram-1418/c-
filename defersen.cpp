#include<iostream>
using namespace std;

int main(){
    int a=50;
    int *ptr=&a;


    cout <<"addres of a"<< *(&a)<<endl;
     cout <<"addres of a"<< *(ptr)<<endl;
    
}