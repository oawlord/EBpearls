/*3.	Find Sum of the Series 1/1! + 2/2! + 3/3! + ……1/N!*/

#include<iostream.h>
#include<math.h>
#include<conio.h>

int factorial(int number) {
	if(number == 1 || number ==0) 
		return 1;
	else
	{
		return number * factorial(number - 1);
	}
}

float Sum(int n)
{
	float count,sum=0.0;
	for(count=1;count<=n;count++)
	{
		sum+=1.0/factorial(count);
	}
	return sum;
}

void main()
{
	int n;
	do
	{
		cout<<"Enter the value of n to find the sum of the series 1/1!+1/2!+...+1/n! : ";
		cin>>n;
		if(n<0)
			cout<<"The value of n shouldn't be less then 0"<<endl;
	}while(n<0);
	cout<<"\nSum of the seriese is "<<Sum(n)<<endl;
}