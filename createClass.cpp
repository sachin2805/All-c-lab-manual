#include <iostream>
#include<string.h>
using namespace std;
class time
{
     int hr,m,s;
   public: 
    time()
   {
       cout<<"\nEnter the time = ";
       cin>>hr>>m>>s;
   }
   void showtime() 
   {
       cout<<"Time = "<<hr<<":"<<m<<":"<<s;

   }
};
class date
{
 int dd,mm,yyyy;
   public: 
    date()
   {
       cout<<"\nEnter the Date in pattern of dd/mm/yyyy = ";
       cin>>dd>>mm>>yyyy;
   }
   void showdate() 
   {
       cout<<"Date = "<<dd<<"/"<<mm<<"/"<<yyyy;

   }

};
class person
{
    string name;
    string dob;
    string city;
    public :
    person()
    {
        cout<<"\nEnter the name of person = ";
        cin>>name;
         cout<<"\nEnter the date of birth of person = ";
        cin>>dob;
         cout<<"\nEnter the city of person = ";
        cin>>city;
    }
    void showperson()
    {
        cout<<"\n :THE PERSON DETAIL IS : \n";
        cout<<"\n NAME : "<<name<<"\n DOB : "<<dob<<"\n Address : "<<city;
    }
    
};
class student 
{
       string name;
    string dob;
    int std;
    char div;
    public :
    student()
    {
        cout<<"\nEnter the name of student = ";
        cin>>name;
         cout<<"\nEnter the date of birth of student = ";
        cin>>dob;cout<<"\nEnter the standerd of student = ";
        cin>>std;
         cout<<"\nEnter the div of student = ";
        cin>>div;
    }
    void showstudent()
    {
        cout<<"\n :THE PERSON DETAIL IS : \n";
        cout<<"\n NAME : "<<name<<"\n DOB : "<<dob<<"\n standard : "<<std<<"\n division : "<<div;
    }
};



int main()
{
    time t;
    t.showtime();
    date d;
    d.showdate();
    person r;
    r.showperson();
    student s;
    s.showstudent();

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ createClass.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe

Enter the time = 10
20
30
Time = 10:20:30
Enter the Date in pattern of dd/mm/yyyy = 04
08
2021
Date = 4/8/2021
Enter the name of person = Sachin

Enter the date of birth of person = 28/05/2000

Enter the city of person = kolhapur

 :THE PERSON DETAIL IS :

 NAME : Sachin
 DOB : 28/05/2000
 Address : kolhapur
Enter the name of student = Dev

Enter the date of birth of student = 20/05/200

Enter the standerd of student = 12

Enter the div of student = A

 :THE PERSON DETAIL IS :

 NAME : Dev
 DOB : 20/05/200
 standard : 12
 division : A
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/