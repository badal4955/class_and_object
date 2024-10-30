#include<iostream>
using namespace std;
class item{
    int a;
    int b;
    public:
    void display(int x,int y);
    void putdata()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
void item::display(int x,int y)
{
    a=x;
    b=y;
}
int main(){
    item ob;
    ob.display(2,4);
    ob.putdata();
    return 0;
}