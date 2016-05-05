/*4.	Calculates the value of nCr. The algorithm used in this program is nCr = n! /((n-r)!r!). */


#include<iostream.h>
#include<math.h>
#include<conio.h>

double factorial(int number) 
{
	if(number == 1 || number ==0) 
		return 1;
	else
	{
		return number * factorial(number - 1);
	}
}

void main()
{
		int n,r;
		cout<<"Find the combination nCr"<<endl;;
		cout<<"n=";
		cin>>n;
		cout<<"r=";
		cin>>r;
		if(!(r>n))
		{
			cout<<"The combination is "<<factorial(n)/(factorial(n-r)*factorial(r));
		}
		else
			cout<<"r shouldn't be greater than n";
}