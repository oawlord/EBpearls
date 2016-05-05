#include<iostream.h>
#include<conio.h>

//-----------------This function is use too sort the array into descending order

int SortDescending(int b[],int len)
{
	int temp,count=0,count1;
	//for(int count=0;count<len;count++)
	while(count<len)
	{
		//for(int count1=0;count1<len-1;count1++)
		count1=0;
		while(count1<len-1)
		{
			if(b[count1]<b[count1+1])
			{
				temp=b[count1];
				b[count1]=b[count1+1];
				b[count1+1]=temp;
			}
			count1++;
		}
		count++;
	}
	
/*	for(count=0;count<len;count++)
		cout<<b[count]<<endl;
*/
	return b[0];
}

//-------------------This function is can find the second heighest value in the sorted array

int FindSecHighest(int a[], int len)
{
	SortDescending(a,len);
	for(int count=0;count<len-1;count++)
	{
		if(a[count]>a[count+1])
			return count+1;
	}
	return 0;
}

int main()
{
	int a[5],len=sizeof(a)/sizeof(int),i=0,index;
	clrscr();
	cout<<"Enter the 5 random numbers"<<endl;
	//for(int i=0;i<len;i++)
	while(i<len)
	{	
		cin>>a[i];	
		i++;
	}
	
	index=FindSecHighest(a,len);
	//cout<<a[index]<<endl;
	if(index)
		cout<<"The second Highest value is " << a[index]<<endl;	
	else
		cout<<"The second Highest value doesn't exist"<<endl;
	getch();
	return 0;
}
