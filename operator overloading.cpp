

#include <iostream>
using namespace std;
class complex{
    private:
    float real,imag;
    public:
    complex(){
        real=0.0;
        imag=0.0;
    }
    void read()
    {
        cout<<"enter the values of real and imag:"<<endl;
        cin>>real>>imag;
    }
    void display()
    {
        cout<<"the sum is :"<<real<<"+"<<imag<<endl;}
        complex operator*(complex);
    
};
    complex complex::operator*(complex obj1)
    {
        complex osum;
        osum.real=real*obj1.real;
        osum.imag=imag*obj1.imag;
        return osum;
    }
    int main()
    {
        complex c1,c2,c3;
        c1.read();
        c2.read();
        c3=c1*c2;
        c3.display();
        return 0;}

    
