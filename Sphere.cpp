/*
Write a Program to implement a sphere class with appropriate members
and
member function to find the surface area and the volume.
(Surface = 4 π r2 and Volume = 4/ 3 π r3)
*/
#include<iostream>
//#define pi=3.14
using namespace std;
class Sphere{
    public:
    double r,s,v,pi=3.14;
    void show(){
        cout<<"Enter the redius of Sphere = \n";
        cin>>r;
        s=4*pi*r*r;
        v=(4/3)*pi*r*r*r;
        cout<<"Surface area = "<<s<<"\nVolume = "<<v<<"\n";
    }
};

int main(){
    Sphere sp;
    sp.show();
}

/*OUPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ Sphere.cpp         
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe
Enter the redius of Sphere = 
10
Surface area = 1256
Volume = 3140
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>*/