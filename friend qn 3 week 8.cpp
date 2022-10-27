/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    void setdata(int i){
        x=i;
    }
    friend void add(A,B);
};
class B{
    int y;
    public:
    void setdata(int i){
        y=i;
    }
    friend void add(A,B);
};
void add(A a,B b){
    cout<<"the sum is:"<<a.x+b.y<<endl;
}
int main()
{
    A a;
    B b;
    a.setdata(10);
    b.setdata(20);
    add(a,b);
    return 0;
}

