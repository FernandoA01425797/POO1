#include "iostream"
#include <cmath>


using namespace std;
float IMC=0;
int w=0;
int h=0;
int main()
{
 cout<<"introduce el peso:";
 cin>>w;
 cout<<"introduce la altura:";
 cin>>h;
 IMC=w/pow(h,2);
 cout<<"IMC: " << IMC;
 return 0; 
}
