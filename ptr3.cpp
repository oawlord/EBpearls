/*Q3) Write a C function that computes that total sum of a 2D array of size 6 by 5.*/

#include<iostream.h>
#include<process.h>
#include<new.h>

int row;
int col;

void insert(float **ptrData)
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

void sumContaint(float **ptrData)
{
	int i,j;
	float sum=0;;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			sum+=ptrData[i][j];
	}
	
	cout<<"The sum of the containt of above matrix is "<<sum<<endl;
	
}

void main()
{
	int i,j;
	float **ptrData;
	cout<<"Enter the size of the matrix. i.e row and col respectively"<<endl;
	cin>>row;
	cin>>col;
	
	ptrData=new float *[row];
	for(i=0;i<row;i++)
	{
		ptrData[i]=new float[col];

	}
	
	insert(ptrData);
	sumContaint(ptrData);
	
	for(i=0;i<row;i++)
	{
		delete[] ptrData[i];

	}
	delete[] ptrData;
}