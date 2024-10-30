#include <iostream>
using namespace std;
 class construct
 { 
public:
 float area; 
// Constructor with no parameters
 construct()
 {
    area = 0;
 }
 // Constructor with two parameters
 construct(int a, int b)
 {
 area = a * b;
 }
 };
 int main()
 {
 // Constructor Overloading 
// with two different constructors
 // of class name
 construct o;
 construct o2(10,20);
 cout<<o.area<<endl;
 cout<<o2.area;
 return 1;
 }
