/*5.	Evaluates the given polynomial equation. The polynomial equation formula is P(x) =AnXn + An-1Xn-1 + An-2Xn-2+… +A1X + A0.(The polynomial can be written as:
 * P(x) = A0 + X(A1 + X(A2 + X(A3 + X(Q4 + X(...X(An-1 + XAn)))))*/

#include<iostream.h>
#include<math.h>
float PolynomialSum(float a[], float x, int n)
{
	float sum=0.0;
	for(int i=0;i<=n;i++)
	{
		sum+=a[i]*pow(x,i);	
	}
	return sum;
}

void main()
{
	int x,i,n;
	float a[100],sum;
	do{
		cout<<"Enter the value of n : ";
		cin>>n;
		if(n<0)
		{
			cout<<"The value of n can't be less then 0"<<endl;
		}
	}while(n<0);
	cout<<"Enter the value of x : ";
	cin>>x;
	for(i=0;i<=n;i++)
	{
		cout<<"Enter the value of a["<<i<<"] : ";
		cin>>a[i];
	}
	sum=PolynomialSum(a,x,n);
	cout<<"The sum of the series is "<<sum<<endl;	
}