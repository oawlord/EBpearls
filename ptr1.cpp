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

void add(float **ptrData1, float **ptrData2)
{
	int i,j;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			ptrData1[i][j]=ptrData1[i][j]+ptrData2[i][j];
	}
	
	cout<<"The sum of above two matrix is"<<endl;
	
	for(i=0;i<row;i++) //-----------loop to display the summed matrix-----------
	{
		for(j=0;j<col;j++)
			cout<<ptrData1[i][j]<<"\t";
		cout<<endl;
	}
}

void main()
{
	int i,j;
	float **ptrData1, **ptrData2;
	cout<<"Enter the size of the matrix. i.e row and col respectively"<<endl;
	cin>>row;
	cin>>col;
	
	ptrData1=new float *[row];
	ptrData2=new float *[row];
	for(i=0;i<row;i++)
	{
		ptrData1[i]=new float[col];
		ptrData2[i]=new float[col];
	}
	insert(ptrData1);
	insert(ptrData2);
	add(ptrData1,ptrData2);
	
	for(i=0;i<row;i++)
	{
		delete[] ptrData1[i];
		delete[] ptrData2[i];
	}
	delete[] ptrData1;
	delete[] ptrData2;
	
}