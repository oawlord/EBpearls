/*1.	Calculates the Sum of Series 1^2 + 2^2 + …. + n^2.
Then the Sum of the series 1^2 + 2^2 + …. + n^2 = n(n + 1)(2n + 1) / 6.
*/
#include<iostream.h>
#include<math.h>
#include<conio.h>

long Sum(int n)
{	
	long sum;
	sum=(n+1)*(2*n+1)*n/6;
	return sum;
}

void main()
{
	int n;
	//clrscr();
	do
	{
		cout<<"Enter the value of n to find the sum of the series 1^2+2^2+...+n^2: ";
		cin>>n;
		if(n<0)
			cout<<"The value of n cannot be less then 0"<<endl;
	}while(n<0);
	cout<<"\nSum of the seriese is "<<Sum(n)<<endl;
}