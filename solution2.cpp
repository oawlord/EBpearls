/*Q2) Write a C function that computes that maximum of a 2D array of size 6 by 5.*/

#include<iostream.h>
#include<process.h>
#include<conio.h>

#define ROW 6
#define COL 5

//----------This functionis use to display the result of the matrix operation-----------
void Display(float data[][COL])
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
float Insert(float data[][COL])
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
//------------function to find the largest among the matrix---------------------
void LargestNumber(float data[ROW][COL])
{
	int i,j;
	float largest=data[0][0];
	Display(data);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			if(largest<data[i][j])
			{
				largest=data[i][j];

			}
		}
	}
	cout<<"The largest number in above matrix is "<<largest<<endl;	
}

//------------main function starts here-----------------------------------
void main()
{
	float data[ROW][COL];
	Insert(data);
	LargestNumber(data);
}