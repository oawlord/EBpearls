#include<iostream.h>
#include<conio.h>
void asc(int a[],int len)
{
	int temp;
	for(int count=0;count<len;count++)
	{
		for(int count1=0;count1<len-1;count1++)
		{
			if(a[count1]>a[count1+1])
			{
				temp=a[count1];
				a[count1]=a[count1+1];
				a[count1+1]=temp;
			}
		}
	}
	cout<<"Sorting in Ascending order\n";
	for(int count=0;count<len;count++)
	{
		cout<<a[count]<<" ";
	}
}

void desc(int a[], int len)
{
	int temp;
	for(int count=0;count<len;count++)
	{
		for(int count1=0;count1<len-1;count1++)
		{
			if(a[count1]<a[count1+1])
			{
				temp=a[count1];
				a[count1]=a[count1+1];
				a[count1+1]=temp;
			}
		}
	}
	cout<<"Sorting in Descending order\n";
	for(int count=0;count<len;count++)
	{
		cout<<a[count]<<" ";
	}

}
void main()
{
	int a[]={1,9,8,100,0,4},flag,len=sizeof(a)/sizeof(int);
	clrscr();
	cout<<"0. Descending Order\n1. Ascending Order\n";
	cin>>flag;
	switch(flag){
		case 0:
			desc(a,len);
			break;
		case 1:
			asc(a,len);
			break;
		default:
			cout<<"Invalid flag";
	}
	getch();
}
