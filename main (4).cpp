/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class shape{
    protected:
    int a;
    public:
    shape(){
        a=100;
    }
};
class rectangle{
    protected:
    int b;
    
};
class area:public shape,public rectangle
{
    public:
    void calc(){
        b=100;
        cout<<"Product of a and b is:"<<a*b;
        
    }
};
int main(){
    area obj;
    obj.calc();
    return 0;
}

