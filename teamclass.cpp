#include<iostream>
#include <string>
using namespace std;
class Team
{
    
    string country[20];
    string player[20];
    int match[20];
    int age[20],i;
    float bat[5];
    float ball[5];
    public :
    Team()
    {
       
        for(i=0;i<5;i++)
        {
            cout<<"\nEnter the country name = ";
        cin>>country[i];
        cout<<"\nEnter the player name = ";
        cin>>player[i];
        cout<<"\nEnter the number of matches = ";
        cin>>match[i];
        cout<<"\nEnter the age of player = ";
        cin>>age[i];
        cout<<"\nEnter the batting average of player = ";
        cin>>bat[i];
        cout<<"\nEnter the balling avgerage of player = ";
        cin>>ball[i];
        }
        

    }
    void showdata()
    {
        cout<<"\ncountry\t\tplayer name\t\tmatch\t\tage\t\tbattingavg\t\tballingavg";
        cout<<"\n----------------------------------------------------------------------------------------------------------------";
         for(i=0;i<5;i++)
        {
          cout<<"\n"<<country[i]<<"\t\t"<<player[i]<<"\t\t\t"<<match[i]<<"\t\t"<<age[i]<<"\t\t"<<bat[i]<<"\t\t\t"<<ball[i];
     
        }
    }
};
int main()
{
    Team t;
    t.showdata();
    return 0;
}

/*output
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ teamclass.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe

Enter the country name = india

Enter the player name = sachin

Enter the number of matches = 200

Enter the age of player = 21

Enter the batting average of player = 89.8

Enter the balling avgerage of player = 98.90

Enter the country name = uk  

Enter the player name = Saurabh

Enter the number of matches = 150

Enter the age of player = 20

Enter the batting average of player = 60.80

Enter the balling avgerage of player = 98.50

Enter the country name = pakistan

Enter the player name = akash

Enter the number of matches = 160

Enter the age of player = 21

Enter the batting average of player = 59.60

Enter the balling avgerage of player = 56.30

Enter the country name = desh

Enter the player name = suraj

Enter the number of matches = 140

Enter the age of player = 23

Enter the batting average of player = 56.90

Enter the balling avgerage of player = 89.60

Enter the country name = USA

Enter the player name = Rahul

Enter the number of matches = 168

Enter the age of player = 25

Enter the batting average of player = 60 

Enter the balling avgerage of player = 54.90

country         player name             match           age             battingavg              ballingavg
----------------------------------------------------------------------------------------------------------------
india           sachin                  200             21              89.8                    98.9
uk              Saurabh                 150             20              60.8                    98.5
pakistan        akash                   160             21              59.6                    56.3
desh            suraj                   140             23              56.9                    89.6
USA             Rahul                   168             25              60                      54.9
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/