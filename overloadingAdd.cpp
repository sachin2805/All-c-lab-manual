#include <iostream>
using namespace std;
int add(int x , int y)
{
    int sum = x + y;
    return sum;
}
float add(float x , float y)    //function overloading becoz of same function name
{
    float sum = x + y;
    return sum;
}
int main()
{
    int a,b,x;
    float c,d,y;
    cout<<"\nEnter the two integer values = ";
    cin>>a>>b;
    x = add(a,b);
    cout<<"\nThe addition of given "<<a<<" and "<<b<<" is = "<<x;


    cout<<"\nEnter the two floating values = ";
    cin>>c>>d;
    y = add(c,d);
    cout<<"\nThe addition of given "<<c<<" and "<<d<<" is = "<<y;
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ overloadingAdd.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe

Enter the two integer values = 10
20

The addition of given 10 and 20 is = 30
Enter the two floating values = 20.30
50.4

The addition of given 20.3 and 50.4 is = 70.7
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/

