/*4.	Perform LU Decomposition of any matrix.
In numerical analysis, LU decomposition (where ‘LU’ stands for ‘Lower Upper’, and also called LU factorization)
factors a matrix as the product of a lower triangular matrix and an upper triangular matrix.
The product sometimes includes a permutation matrix as well.
The LU decomposition can be viewed as the matrix form of Gaussian elimination.
Computers usually solve square systems of linear equations using the LU decomposition,
and it is also a key step when inverting a matrix, or computing the determinant of a matrix.*/


#include<iostream.h>
#include<process.h>

int row;
int col;

void display(float **ptrData)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			cout<<ptrData[i][j]<<"\t";
		cout<<endl;
	}
}

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
	
	display(ptrData);
}

void LU(float **ptrDataU, float **ptrDataL)
{
	float factor;
	int i,j,k;

	for(i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			if(i==j) 
				ptrDataL[i][j]=1; //-----------sets diagonal element of L matrix to 1
			if(i<j) 
				ptrDataL[i][j]=0; //-----------sets upper triangle element of L matrix to 0
			
			
			if(i<j)
			{
				if(ptrDataU[i][i]==0) 
				{
					cout<<"LU decomposition couldn't obtained";
					exit(0);
				}
				factor=ptrDataU[j][i]/ptrDataU[i][i];
				ptrDataL[j][i]=factor; //-----------sets lower element of L matrix
				
				for(k=0;k<row;k++) //----------------generate U matrix
				{
					ptrDataU[j][k]=ptrDataU[j][k]-factor*ptrDataU[i][k];			
				}
			}
		}
	}
}

void main()
{
	int i,j;
	float **ptrData1, **ptrData2;
	cout<<"Enter the size of the matrix. i.e row and col respectively"<<endl;
	cin>>row;
	cin>>col;
	if(row!=col)
	{
		cout<<"Matrix should be square matrix"<<endl;
	}
	else
	{
		ptrData1=new float *[row];
		ptrData2=new float *[row];
		for(i=0;i<row;i++)
		{
			ptrData1[i]=new float[col];
			ptrData2[i]=new float[col];
		}
		
		insert(ptrData1);

		LU(ptrData1,ptrData2);
		
		cout<<"L value of the above matrix"<<endl;
		display(ptrData2);
		
		cout<<"U value of the above matrix"<<endl;
		display(ptrData1);
		
		for(i=0;i<row;i++)
		{
			delete[] ptrData1[i];
			delete[] ptrData2[i];
		}
		delete[] ptrData1;
		delete[] ptrData2;
	}
}