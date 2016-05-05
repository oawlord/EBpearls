/*Q4) Write a C function that searches for value key in a a 2D array of size 6 by 5.
The function should return true if found false otherwise.*/

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
	cout<<"Enter the integer value in 6*5 matrix"<<endl;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			cin>>data[i][j];
	}
	return data[0][0];
}
//------------function to find the key---------------------
bool FindKey(int data[ROW][COL], int key)
{
	int i,j;
	bool flag;
	flag=false;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			if(key==data[i][j])
			{
				flag=true;
				break;
			}
		}
	}
	return flag;	
}

//------------main function starts here-----------------------------------
void main()
{
	int data[ROW][COL],key;
	Insert(data);
	Display(data);
	cout<<"Insert the key : ";
	cin>>key;
	cout<<"returned "<<FindKey(data,key);
}