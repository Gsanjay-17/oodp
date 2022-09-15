/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*****************************************************************************
* #include <bits/stdc++.h>
using namespace std;
class person
{
    // Access specifier
    public:
  
    // Data Members
    string personname;
  
    // Member Functions()
    void printname()
    {
       cout << "personname is: " << personname;
    }
};
  
int main() {
  
    // Declare an object of class person
    person obj1;
  
    // accessing data member
    obj1.personname = "Abhi";
  
    // accessing member function
    obj1.printname();
    return 0;
}