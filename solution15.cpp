/*1.	Check sparsity of a given matrix.
If the number of zeros in a matrix exceeds (n*m)/2,
where n, m is the dimension of the matrix, matrix is sparse matrix.*/

#include<iostream.h>
#include<process.h>
#include<conio.h>

#define ROW 6
#define COL 5


//----------This functionis use to display the result of the matrix operation-----------
void Display(int data[][COL], int m[])
{
	for(int i=0; i<m[0];i++)
	{
		for(int j=0; j<m[1];j++)
		{
			cout<<data[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

//---------insertion function for matrix-------------------------------------
int Insert(int data[][COL],int m[])
{
	int i,j;
	cout<<"Enter the matrix"<<endl;
	for(i=0;i<m[0];i++)
	{
		for(j=0;j<m[1];j++)
			cin>>data[i][j];
	}
	return data[0][0];
}
//------------function to find the key---------------------
int CheckSparse(int data[][COL], int m[])
{
	int i,j,count=0;
	for(i=0;i<m[0];i++)
	{
		for(j=0;j<m[1];j++)
		{
			if(data[i][j]==0)
			{
				count++;
			}
		}
	}
	return count;	
}

//------------main function starts here-----------------------------------
void main()
{
	int data[ROW][COL],m[2],count;
	cout<<"Insert the size of the matrix"<<endl;
	cout<<"Row";cin>>m[0];
	cout<<"Column";cin>>m[1];
	Insert(data,m);
	Display(data,m);
	count=CheckSparse(data,m);
	if(count>(m[0]*m[1])/2.0)
		cout<<"The given matrix is sparse matrix";
	else
		cout<<"The given matrix is not sparse matrix";
}