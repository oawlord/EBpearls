#include<iostream.h>
#include<conio.h>
int asc(int a[],int len)
{
	int temp,count=0,count1;
	//for(int count=0;count<len;count++)
	while(count<len)
	{
		//for(int count1=0;count1<len-1;count1++)
		count1=0;
		while(count1<len-1)
		{
			if(a[count1]>a[count1+1])
			{
				temp=a[count1];
				a[count1]=a[count1+1];
				a[count1+1]=temp;
			}
			count1++;
		}
		count++;
	}
	cout<<"Sorting in Ascending order\n";
	for(int count=0;count<len;count++)
	{
		cout<<a[count]<<" ";
	}
	return a[len-2];
}

int desc(int a[], int len)
{
	int temp,count=0,count1;
	//for(int count=0;count<len;count++)
	while(count<len)
	{
		//for(int count1=0;count1<len-1;count1++)
		count1=0;
		while(count1<len-1)
		{
			
			if(a[count1]<a[count1+1])
			{
				temp=a[count1];
				a[count1]=a[count1+1];
				a[count1+1]=temp;
			}
			count1++;
		}
		count++;
	}
	cout<<"Sorting in Descending order\n";
	for(int count=0;count<len;count++)
	{
		cout<<a[count]<<" ";
	}
	return a[1];

}
void main()
{
	int a[]={1,9,8,100,0,4,500, 20, 10, 90},flag,len=sizeof(a)/sizeof(int),secHighest;
	clrscr();
	cout<<"0. Descending Order\n1. Ascending Order\n";
	cin>>flag;
	switch(flag){
		case 0:
			secHighest=desc(a,len);
			break;
		case 1:
			secHighest=asc(a,len);
			break;
		default:
			cout<<"Invalid flag";
	}
	cout<<"\nThe Second heighest value is "<<secHighest;
	getch();
}
