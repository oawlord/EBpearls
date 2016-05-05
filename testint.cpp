#include<iostream.h>
#include<math.h>
#include<conio.h>

double factorial(int number) {
	if(number == 1 || number ==0) 
		return 1;
	else
	{
		return number * factorial(number - 1);
	}
}

void main()
{
		double sum=NULL,a[500];
		int count,n;
		//clrscr();
		cout<<"Enter the value of n to find the sum of the series 1+1/1!+1/2!+...+!/(n-1)! : ";
		cin>>n;
		if(n>=0)
		{
			for(count=0;count<n;count++)
			{
				a[count]=1.0/factorial(count);
				sum+=a[count];
				cout.precision(20);
				cout<<"     "<<a[count]<<"   "<<sum<<endl;
			}
			//cout.precision(20);
			cout<<"\nSum of the seriese is "<<sum<<endl;
		}
		else
		{
			cout<<"invalid input";
		}
}