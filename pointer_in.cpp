#include<iostream>
using namespace std;
void fun(){
    int var=20;
    int*ptr;
    ptr=&var;

    cout<<"value of ptr"<<ptr<<endl;
    cout<<"value of var"<<var<<endl;
    cout<<"value at *ptr="<<*ptr<<endl;
}
int main(){
    fun();
    return 0;
}