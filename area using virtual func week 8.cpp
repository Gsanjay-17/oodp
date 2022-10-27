/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class polygon{
    public:
    int a,b;
    virtual void area(int a,int b){
        cout<<"the area is:"<<endl;    }
};
class triangle:public polygon{
    void area(int a,int b){
        cout<<"the area of triangle is:"<<a*b/2;
        
    }
};
class rectangle:public polygon{
    void area(int a,int b){
        cout<<"the area of rectangle is:"<<a*b;
        
    }
};
int main(){
    polygon*bptr;
    triangle t;
    bptr=&t;
    bptr->area(5,6);
    rectangle r;
    bptr=&r;
    bptr->area(7,8);
    return 0;
}