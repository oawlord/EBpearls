/*Q9) Write a C function that searches for value key in a specific row R in a 2D array of size 6 by 5
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
	cout<<"Enter the "<<ROW<<"*"<<COL<<" matrix"<<endl;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			cin>>data[i][j];
	}
	return data[0][0];
}

//------------function to find the key---------------------
bool FindKey(int data[ROW][COL], int key, int row)
{
	int i,j;
	bool flag;
	flag=false;

	for(j=0;j<COL;j++)
	{
		if(key==data[row-1][j])
		{
			flag=true;
			break;
		}
	}
	return flag;	
}

//------------main function starts here-----------------------------------
void main()
{
	int data[ROW][COL],key, row;
	Insert(data);
	Display(data);
	cout<<"Insert the key : ";
	cin>>key;
	cout<<"Insert the row : ";
	cin>>row;
	if(row==0||row>ROW)
		cout<<"Invalid row";
	else
		cout<<"returned "<<FindKey(data,key, row);
}