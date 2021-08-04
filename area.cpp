 //Area of Rectangle, Circle and Square.
 #include<iostream>
 using namespace std;
void area(float x, float y)
{
  
    int arectangle = x*y;
    cout<<"\nThe area of rectangle of give length "<<x<<" and "<<" bredth "<<y<<" is = "<<arectangle;
}
void area(float x)
{
  float asquare;
    asquare = x*x;
    cout<<"\nThe area of square of give side "<<x<<" is = "<<asquare;
}
void area(int x)
{
  int acircle;
    acircle = 2*3.14*x*x;
    cout<<"\nThe area of circle of given redius "<<x<<" is = "<<acircle;
}
int main()
 {
     float l,b,s;
     int r;
     cout<<"\nTo find area of rectangle \n";
       cout<<"\nEnter the length and bredth = ";
    cin>>l>>b;
    area(l,b);
      cout<<"\nTo find area of square \n";
       cout<<"\nEnter the side of square = ";
    cin>>s;
    area(s);

     cout<<"\nTo find area of circle \n";
       cout<<"\nEnter the redius of circle = ";
    cin>>r;
    area(r);
    return 0;
 }
 /*OUTPUT
 PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ area.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe     

To find area of rectangle 

Enter the length and bredth = 10
20

The area of rectangle of give length 10 and  bredth 20 is = 200
To find area of square

Enter the side of square = 10

The area of square of give side 10 is = 100
To find area of circle

Enter the redius of circle = 10

The area of circle of given redius 10 is = 628
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> 
*/