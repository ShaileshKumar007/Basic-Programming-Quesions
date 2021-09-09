#include <iostream>
#include<cmath> 
using namespace std;

int main()
{
  int a,b,c; 

    cout << "Enter the three sides of the triangle\n";

    cin>>a>>b>>c;

    float s=(float)(a+b+c)/2; 

    float area=sqrt(s*(s-a)*(s-b)*(s-c)); // calculating area using Heron's formula

    cout<<"Area="<<area; 

    return 0;

}