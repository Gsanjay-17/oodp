/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class student{
    protected:
    int rno,m1,m2;
    public:
         void get()
         {
             cout<<"Enter the Roll no:";
             cin>>rno;
             cout<<"Enter the two marks:";
             cin>>m1>>m2;
         }
};
class stud{
    protected:
    int am;
    public:
         void getam()
         {
             cout<<"\Enter the aptitude marks:";
             cin>>am;
         }
};
class marksheet:public student,public stud
{
    int tot,avg;
    public:
    void display(){
        tot=(m1+m2+am);
        avg=tot/3;
        cout<<"Roll no:"<<rno<<"Total:"<<tot;
        cout<<"Average:"<<avg;
    }
    
};
int main()
{
    marksheet obj;
    obj.get();
    obj.getam();
    obj.display();
    return 0;
}

