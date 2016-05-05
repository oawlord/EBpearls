#include<iostream.h>
#include<conio.h>
#include<limits.h>

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

int FindNHighest(int a[], int len, int n)
{
	int i=1,b[len];
	SortDescending(a,len);
	b[0]=a[0]
	for(int count=1;count<len-1;count++)
	{
		if(a[count]<b[i])
		{
			i++;
			b[i]=a[count];
		}
	}
	return b[n-1];
}

int main()
{
	int a[5],len=sizeof(a)/sizeof(int),i=0,secondHeighest,temp;
	bool flag;
	clrscr();
	cout<<"Enter the 5 random numbers"<<endl;
	//for(int i=0;i<len;i++)
	while(i<len)
	{	
		flag = false; 
		while(!flag)
		{
			cin >> temp;
			if(!cin.fail() && (cin.peek() == EOF || cin.peek() == '\n') && temp<0)
			{
				flag = true;
				a[i]=temp;
			}
			else
			{
				cout << "Please Enter valid data" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
		i++;
	}
	cout<<"Enter the number to find n highest value : ";
	cin>>n;
	nHeighest=FindNHighest(a,len,n);
	//cout<<a[index]<<endl;
	if(nHeighest)
		cout<<"The n Highest value is " << nHeighest<<endl;	
	else
		cout<<"The n Highest value doesn't exist"<<endl;
	getch();
	return 0;
}
