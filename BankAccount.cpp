/*
Define a class to represent a bank account. Include the following members
Data Members
    1. Name of the depositor
    2. Account number
    3. Type of account
    4. Balance amount in the account.
Member functions
    1. To assign initial values
    2. To deposit an amount
    3. To withdraw an amount after checking the balance
    4. To display name and balance.
*/
#include<iostream>
using namespace std;
class Bank_Account
{

    public:
        char name[100],ty[100];
        char acno[50];
        double bal;
        int n,d,i;  
        double dep;
        public:
        Bank_Account(){
            
                
                cout<<"\nEnter name of member : ";
                cin>>name;
                cout<<"Enter Account no : ";
                cin>>acno;
                cout<<"Enter type of account : ";
                cin>>ty;
                cout<<"Enter balance : ";
                cin>>bal;
            
        }
         void initial(){
            cout<<"...................................................";
            cout<<"\nMember info: "<<"\n\tName = "<<name<<"\n\tAccount no = "<<acno<<"\n\tType of account = "<<ty<<"\n\tBalance = "<<bal<<"\n";         
            cout<<"....................................................";
        }
        void deposit(){         
                    cout<<"\ndeposit ammount = ";cin>>dep;
                    bal=bal+dep;
                    cout<<"\tBalance is : "<<bal;
        }
        void withdraw()
        {
            double with;
                cout<<"\n....................................................";
                cout<<"\n\nEnter the Withdraw Ammount  = ";
                cin>>with;
                if(with<=bal)
                bal=bal-with;
                else
                {
                cout<<"\nInsufficient balence";
                cout<<"\nPlz try again !!!  ";
                withdraw();
                }
            }
        
        void display()
        {
            cout<<"Amount withdraw Successfully";
            cout<<"\n\tNmae : "<<name<<"\n\tAvailable balence : "<<bal;
            cout<<"\n......................................................";

        }
};
int main(){
    Bank_Account ba;
    ba.initial();
    ba.deposit();
    ba.withdraw();
    ba.display();
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> g++ BankAccount.cpp
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe

Enter name of member : Sachin
Enter Account no : 7972897599
Enter type of account : Saving
Enter balance : 50000
...................................................
Member info:
        Name = Sachin
        Account no = 7972897599
        Type of account = Saving
        Balance = 50000
....................................................
deposit ammount = 6000
        Balance is : 56000
....................................................

Enter the Withdraw Ammount  = 60000

Insufficient balence
Plz try again !!!
....................................................

Enter the Withdraw Ammount  = 4000
Amount withdraw Successfully
        Nmae : Sachin
        Available balence : 52000
......................................................
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/