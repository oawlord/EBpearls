/*2.	Calculates the Sum of Series 1 + 1/2 + 1/3 + 1/4 + … + 1/N.*/

#include<iostream.h>
#include<math.h>
#include<conio.h>

double Sum(int n)
{
	int count;
	double sum=0.0;
	for(count=1;count<=n;count++)
		sum+=1.0/count;
	return sum;	
}			
				
				
void main()
{
		int n;
		do{
			cout<<"Enter the value of n to find the sum of the series 1/1+1/2+...+1/n : ";
			cin>>n;
			if(n<0)
				cout<<"The value of n cannot be less then 0"<<endl;
		}while(n<0);
		cout<<"\nSum of the seriese is "<<Sum(n)<<endl;
}