#include "iostream"
#include <cmath>
#include <iomanip>


using namespace std;
double F=0;
float c=0;
int main()
{
 cout<<"introduce los celsius:";
 cin>>c;
 F=((9*c)/5)+32;
 cout <<  setprecision(2) <<"Fahrenheit: " << F;
 
 return 0; 
}
