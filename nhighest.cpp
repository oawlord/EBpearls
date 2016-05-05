#include<iostream.h>
#include<conio.h>
#include<limits.h>

//-----------------This function is use too sort the array into descending order


//-------------------This function is can find the second heighest value in the sorted array

int FindNHighest(int a[], int len, int n)
{
	int i=0,b[5];
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
	
	for(count=0;count<len;count++)
		cout<<a[count]<<endl;
	
	b[0]=a[0];

	for(int count=0;count<len;count++)
	{
		if(a[count]<b[i])
		{
			i++;
			//cout<<"value of i "<<i<<endl;
			b[i]=a[count];
			//cout<<"--"<<b[i]<<endl;
		}
			
	}
	if(n-1>i)
	{
		return 0;
	}
	//cout<<"highest value"<<b[n-1]<<endl;
	return b[n-1];
}

int main()
{
	int a[5],len=sizeof(a)/sizeof(int),i=0,nHighest,temp, n;
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
			if(temp>0 && !cin.fail() && (cin.peek() == EOF || cin.peek() == '\n'))
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
	nHighest=FindNHighest(a,len,n);
	//cout<<a[index]<<endl;
	if(nHighest)
		cout<<"The " << n <<" Highest value is " << nHighest<<endl;	
	else
		cout<<"The " << n <<" Highest value doesn't exist"<<endl;
	getch();
	return 0;
}
