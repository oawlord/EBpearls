/*Q2) Write a C function that computes that maximum of a 2D array of size 6 by 5.*/

#include<iostream.h>
#include<process.h>

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

void searchMax(float **ptrData)
{
	int i,j;
	float max=ptrData[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(max<ptrData[i][j])
				max=ptrData[i][j];
		}
	}
	cout<<"The maximum value in the above matrix is "<<max<<endl;
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
	searchMax(ptrData);
	
	for(i=0;i<row;i++)
	{
		delete[] ptrData[i];
	}
	delete[] ptrData;	
}