/*Q1) Write a C Program that declares 3 arrays of size 4 by 3 and type integer.
Your program should read the values of the first two arrays add the two arrays values and store the results in a third array.
Declare function to read the array values, use the function twice.
Declare another function to add two arrays and store the result in a third one.*/


#include<iostream.h>
#include<process.h>
#include<conio.h>

#define ROW 4
#define COL 3


//----------This functionis use to display the result of the matrix operation-----------
void Display(int c[][COL])
{
	for(int i=0; i<ROW;i++)
	{
		for(int j=0; j<COL;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

//--------this function is use for matrix addition------------------------
void MatrixAdd(int a[][COL], int b[][COL], int c[ROW][COL])
{
	for(int i=0; i<ROW; i++)
	{
		for(int j=0; j<COL; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	//Display(c);
}

//---------insertion function for matrix-------------------------------------
int Insert(int data[][COL], int i)
{
	int j;
	cout<<"Enter the "<<i<<" matrix"<<endl;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			cin>>data[i][j];
	}
	return data[0][0];
}
//------------main function starts here-----------------------------------
void main()
{
	int a[ROW][COL], b[ROW][COL],c[ROW][COL];
	Insert(a,1);
	Display(a);
	Insert(b,2);
	Display(b);
	MatrixAdd(a,b,c);
	cout<<"The sum of above matrix is"<<endl;
	Display(c);
}
