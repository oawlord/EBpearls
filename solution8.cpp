/*Q8) Write a C function that computes that total sum of of a specific col C in a 2D array of size 6 by 5*/


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
	cout<<"Enter the "<<ROW<<"*"<<COL<<" matrix"<<endl;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			cin>>data[i][j];
	}
	return data[0][0];
}
//------------function to find the SUm of matrix containt---------------------
void Sum(float data[ROW][COL], int col)
{
	int i,j;
	float sum=0;
	Display(data);
	for(i=0;i<ROW;i++)
	{
			sum+=data[i][col];
	}
	cout<<"The sum ot the "<<col+1<<" col containt is "<<sum<<endl;	
}

//------------main function starts here-----------------------------------
void main()
{
	float data[ROW][COL];
	int col;
	Insert(data);
	cout<<"Enter the column number to find the sum of the containt : ";
	cin>>col;
	if(col==0||col>COL)
		cout<<"Invalid column";
	else
		Sum(data,col-1);
}