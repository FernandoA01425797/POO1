#include "iostream"
#include <cmath>

using namespace std;
float ym=0;
float yv=0;
float yj=0;
float ys=0;
float x=0;

int main()
{
 cout<<"introduce la edad:";
 cin>>x;
 
 ym=(x*365)/88;
 yv=(x*365)/225;
 yj=(x*365)/4380;
 ys=(x*365)/10767;
 
 cout <<"Mercurio: " << ym;
 cout <<"Venus: "<< yv;
 cout <<"jupiter: "<<yj;
 cout <<"Saturno: "<<ys;
 
 return 0; 
}
