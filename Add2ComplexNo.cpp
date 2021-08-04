#include<iostream>
using namespace std;
class complex 
{
    int real , img;
    public:
    void set(int x)
    {
        cout<<"\nEnter the "<<x<<" complex number\n ";
        cout<<"\nEnter the real number = ";
        cin>>real;
        cout<<"\nEnter the imaginary number = ";
        cin>>img;
        cout<<"\nThe "<<x<<" complex number is = "<<real<<"+"<<img<<"i";

    }
     
     friend complex operator+
     (complex , complex );

    void display()
    {
        cout<<"\n\nsum of Complex number is = "<<real<<"+"<<img<<"i";
    }
};
complex operator+(complex a , complex b)
{
    complex temp;
    temp.real=a.real+b.real;
     temp.img=a.img+b.img;
     return temp;

}
int main()
{
    complex a,b;
    a.set(1);
    b.set(2);
    a=a+b;
    a.display();
    return 0;
    
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ Add2ComplexNo.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe

Enter the 1 complex number

Enter the real number = 10

Enter the imaginary number = 20

The 1 complex number is = 10+20i
Enter the 2 complex number      

Enter the real number = 50

Enter the imaginary number = 80

The 2 complex number is = 50+80i

sum of Complex number is = 60+100i
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/