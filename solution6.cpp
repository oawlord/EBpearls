/*Q6) Write a C function that searches for value key in a a 2D array of size 6 by 5.
The function should return the row # and col# of location the value was found at if found and return 
-1 if not found. The function returns these two values using arguments passed by reference.
*/

#include<iostream.h>
#include<process.h>
#include<conio.h>

#define ROW 6
#define COL 5

//----------This functionis use to display the result of the matrix operation-----------
void Display(int data[][COL])
{
	for(int i=0; i<ROW;i++)
	{
		for(int j=0; j<COL;j++)
		{
			cout<<data[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

//---------insertion function for matrix-------------------------------------
int Insert(int data[][COL])
{
	int i,j;
	cout<<"Enter the 6*5 matrix"<<endl;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			cin>>data[i][j];
	}
	return data[0][0];
}
//------------function to find the key---------------------
int FindKey(int data[ROW][COL], int &key, int index[][2])
{
	int i,j,count=0;
	bool flag=false;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			if(key==data[i][j])
			{
					index[count][0]=i;
					index[count][1]=j;
					flag=true;	
					count++;
			}
		}
	}
	if(flag)
		return count;	
	else
		return -1;
}

//------------main function starts here-----------------------------------
void main()
{
	int data[ROW][COL],key, index[ROW][2], count;
	Insert(data);
	Display(data);
	cout<<"Insert the key : ";
	cin>>key;
	count=FindKey(data,key,index);
	if(count==-1)
		cout<<"returned -1"<<endl;
	else
	{
		cout<<"key found at"<<endl;
		cout <<"ROW\t COL"<<endl;
		for(int i=0;i<count;i++)
			cout<<index[i][0]+1<<"\t"<<index[i][1]+1<<endl;
	}
}