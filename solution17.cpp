/*2.	Check if the matrix is invertible or not.
It is invertible only if its determinant is non-zero.	*/

#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<math.h>

#define ROW 10
#define COL 10


//----------This functionis use to display the result of the matrix operation-----------
void Display(float data[][COL], int m)
{
	for(int i=0; i<m;i++)
	{
		for(int j=0; j<m;j++)
		{
			cout<<data[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

//---------insertion function for matrix-------------------------------------
float Insert(float data[][COL],int m)
{
	int i,j;
	cout<<"Enter the "<<m<<"*"<<m<<" matrix"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
			cin>>data[i][j];
	}
	return data[0][0];
}
//------------function to find the determinant---------------------
float Determinant(float data[][COL], int m)
{
	int column,i,j,innerI,innerJ;
	float determinant=0.0,innerMatrix[ROW][COL];
	
	//--------------condition if 2*2 matrix
	if(m==2)
	{                                      
		determinant = data[0][0]*data[1][1] - data[0][1]*data[1][0];
		return determinant;
	}
	else{
	//-------------condition for matrix greater than 2*2----------------
		for(column = 0; column < m; column++)
        {  
            innerI = 0;  
            for(i = 1; i < m; i++)//--------loops for generating inner matrix-----------
            {  
                innerJ = 0;
                for(j = 0; j < m; j++) 
                {    
                    if (j == column)
                    {
                        continue;
                    }
                    innerMatrix[innerI][innerJ] = data[i][j];
                    innerJ++;
                }
                innerI++;
            
			}
			//Display(innerMatrix, m-1);
			determinant = determinant + (pow(-1 ,column) * data[0][column] * Determinant(innerMatrix,m-1));
        }
		return determinant;
	}
}

//------------main function starts here-----------------------------------
void main()
{
	float data[ROW][COL],determinant;
	int m;
	cout<<"Insert the size of square matrix"<<endl;
	cin>>m;		
	Insert(data,m);
	Display(data,m);
	determinant=Determinant(data,m);
	cout<<"Determinant = "<<determinant<<endl;
}