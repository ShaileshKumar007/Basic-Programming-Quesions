// HCF and GCD is the same thing

#include<iostream>
using namespace std;

int main()
{
	int fnum,snum,gcd,lcm;

	cout<<"Enter first number";
	cin>>fnum;

	cout<<"\nEnter second number";
	cin>>snum;
	
	for(int i=1;i<=fnum && i<=snum;i++)
	{
		if(fnum%i==0 && snum%i==0)
			gcd=i;
	}
	
	lcm = fnum*snum/gcd;   // formula to calculate lcm with the help of gcd

	cout<<"\n GCD of given numbers is:"<<gcd;
	cout<<"\n LCM of given numbers is:"<<lcm;
    
	return 0;
}