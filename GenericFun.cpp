/*
 WAP using generic function to find sum of 2 numbers.
*/
#include <iostream>
using namespace std;
template <typename T>
  
T add(T a, T b)  //generic function = access any data type intialised in main()
{
    return (a+b);
}
  
int main()
{   
    int a,b;
    float p,q;
    cout<<"Enter the integer two no : \n";
    cin>>a>>b;
    cout<<"Addition of integer is = "<<add(a,b);

    cout<<"\n\nEnter the float two no : \n";
    cin>>p>>q;
    cout<<"Addition of float is = "<<add(p,q);
    
  //  cout << add<double>(14.12, 7.14) << endl;
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual> ./a.exe
Enter the integer two no : 
10
20
Addition of integer is = 30

Enter the float two no :
50.60
40.60
Addition of float is = 91.2
PS F:\PROFOUND\PRACTICAL\cpp\cpp lab manual>
*/