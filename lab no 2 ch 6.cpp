#include<iostream>
using namespace std;
float mean(int,int,int);
int main()
{ int a,b,c;
 cout<< "Enter Three Number For Sum :\n";
 cin>>a>>b>>c;
 cout<<"The Mean of These Number is: "<<mean(a,b,c);
}
float mean(int a,int b,int c)
{
 float Mean=(a+b+c)/3;
 return Mean;
 
 }
