/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define PI 3.1415
using namespace std;
class shape{
    protected:
    int r;
    public:
    shape(){
        r=10;
    }
};
class cylinder{
    protected:
    int h;
    
};
class av:public shape,public cylinder
{
    public:
    void calc(){
        h=10;
        cout<<"the area is:"<<2*PI*r*h;
        cout<<"the volume is:"<<PI*r*r*h;
    }
};
int main(){
    av obj;
    obj.calc();
    return 0;
}

