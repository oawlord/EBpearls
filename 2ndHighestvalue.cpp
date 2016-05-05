#include<iostream.h>
#include<conio.h>
int asc(int b[],int len)
{
	int temp,count=0,count1;
	//for(int count=0;count<len;count++)
	while(count<len)
	{
		//for(int count1=0;count1<len-1;count1++)
		count1=0;
		while(count1<len-1)
		{
			if(b[count1]>b[count1+1])
			{
				temp=a[count1];
				b[count1]=b[count1+1];
				b[count1+1]=temp;
			}
			count1++;
		}
		count++;
	}
	return 0;
}

void main()
{
	int a[5],flag,len=sizeof(a)/sizeof(int),i=0;
	clrscr();
	cout<<"Enter the 5 random numbers"<<endl;
	//for(int i=0;i<len;i++)
	while(i<len)
	{
		cin>>a[i];
		i++;
	}
	cout<<"\nThe Second heighest value is "<<asc(a,len);
	for(i=0;i<len;i++)
		cout<<a[i]<<endl;
	getch();
}
