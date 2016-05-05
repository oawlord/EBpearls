/*Q4) Write a C function that searches for value key in a a 2D array of size 6 by 5.
The function should return true if found false otherwise.*/

#include<iostream.h>
#include<process.h>


int row;
int col;

void insert(int **ptrData)
{
	int i,j;
	
	cout<<"Enter "<<row<<"*"<<col<<" matrix"<<endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"ptrData["<<i<<"]["<<j<<"] : ";
			cin>>ptrData[i][j];
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cout<<ptrData[i][j]<<"\t";
		cout<<endl;
	}
}

int findKey(int **ptrData,int key)
{
	int i,j,count=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			if(key==ptrData[i][j])
			{
				count++;
			}
	}
	if(count)
	{
		cout<<"Key found";
		return true;
	}
	else
	{		
		cout<<"Key Not found";
		return false;
	}
}

void main()
{
	int i,j;
	int** ptrData,key;
	cout<<"Enter the size of the matrix. i.e row and col respectively"<<endl;
	cin>>row;
	cin>>col;
	
	ptrData=new int *[row];
	for(i=0;i<row;i++)
	{
		ptrData[i]=new int[col];

	}
	
	insert(ptrData);
	
	cout<<"Enter the key : ";
	cin>>key;
	
	findKey(ptrData,key);
	
	for(i=0;i<row;i++)
	{
		delete[] ptrData[i];

	}
	delete[] ptrData;
}