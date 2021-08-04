/*Implement inline function for the following programs
    a. Square of the number
    b. Cube of the number
    c. Area of rectangle
*/
#include<iostream>
using namespace std;
inline int square(int s){
    int sq;
    sq=s*s;
    cout<<"Square root is : "<<sq;
}
inline int cube(int c){
    int cu;
    cu=c*c*c;
    cout<<"Cube root is : "<<cu;
}
inline int rectangle(int l,int b){
    int area;
    area=l*b;
    cout<<"Area of rectangle is : "<<area;
}
int main(){
    int s,c,l,b;
    cout<<"\nEnter the square : \n";cin>>s;
    square(s);
    cout<<"\n\nEnter the cube : \n";cin>>c;
    cube(c);
    cout<<"\n\nEnter the length and width : \n";cin>>l>>b;
    rectangle(l,b);
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe

Enter the square : 
10
Square root is : 100

Enter the cube :
3
Cube root is : 27

Enter the length and width :
10
20
Area of rectangle is : 200
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/