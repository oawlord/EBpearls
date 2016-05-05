#include<iostream.h>
#include<process.h>
#include<conio.h>

#define COL 10
#define ROW 10

//----------This functionis use to display the result of the matrix operation-----------
void Display(float c[][10], int m[], int n[])
{	
	for(int i=0; i<m[0];i++)
	{
		for(int j=0; j<n[1];j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

//--------this function is use for matrix addition------------------------
void MatrixAdd(float a[][COL], float b[][COL], int m[])
{
	float c[ROW][COL];
		
	for(int i=0; i<m[0]; i++)
	{
		for(int j=0; j<m[1]; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	Display(c,m,m);
}

//--------------this function is use for matrix subtraction--------------------------
void MatrixSub(float a[][COL], float b[][COL], int m[])
{
	float c[ROW][COL];
		
	for(int i=0; i<m[0]; i++)
	{
		for(int j=0; j<m[1]; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	Display(c,m,m);
}
//----------------this function is use for matrix multiplication----------------
void MatrixMul(float a[][COL], float b[][COL], int m[], int n[])
{
	float sum,c[ROW][COL];
	int i,j,k;
	
	for (i = 0; i <m[0]; i++) 
	{
		for (j = 0; j <n[1]; j++)
		{
			sum = 0;
			for (k = 0; k <m[1]; k++)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
        }
    }
	Display(c,m,n);
}

//-------------------main function starts here------------------------------------
void main()
{
	float a[ROW][COL], b[ROW][COL];
	int m[2], n[2], choice,i,j,temp;
	bool flag, flag1=true;
	//-------------from the following the size of matrix is tested with proper input----------------------
		cout<<"Enter the dimention of the 1st matrix :"<<endl;
		for(i=0;i<2;i++)
		{
			flag = false; 
			while(!flag)
			{
				cin >> temp;
				if(temp>0 && !cin.fail() && (cin.peek() == EOF || cin.peek() == '\n'))
				{
					flag = true;
					m[i]=temp;
				}
				else
				{
					cout << "Please Enter valid data" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
		}
		
		cout<<"Enter the dimention of the 2nd matrix :"<<endl;
		for(i=0;i<2;i++)
		{
			flag = false; 
			while(!flag)
			{
				cin >> temp;
				if(temp>0 && !cin.fail() && (cin.peek() == EOF || cin.peek() == '\n'))
				{
					flag = true;
					n[i]=temp;
				}
				else
				{
					cout << "Please Enter valid data" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}
		}
//---------------input for 1st matrix starts here----------------------
		cout<<"Enter the 1st matrix"<<endl;
		for(i=0;i<m[0];i++)
		{
			for(j=0;j<m[1];j++)
				cin>>a[i][j];
		}
//--------------input for 2nd matrix strts here-------------------------
		cout<<"Enter the 2nd matrix"<<endl;
		for(i=0;i<n[0];i++)
		{
			for(j=0;j<n[1];j++)
				cin>>b[i][j];
		}
//-------------Choice for Matrix operation to select------------------	
	while(1)
	{
		if(!flag1)
		{
			exit(0);
		}	

		cout<<"Select the operation to perform with the above matrix \n 1. Addition\n 2. Subtraction\n 3. Multiplication"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				if(m[0]!=n[0] || m[1]!=n[1])
					cout<<"Matrix cannot be added"<<endl;
				else
					MatrixAdd(a,b,m);
			break;
			
			case 2:
				if(m[0]!=n[0] || m[1]!=n[1])
					cout<<"Matrix cannot be subtracted"<<endl;
				else
					MatrixSub(a,b,m);
			break;
			
			case 3:
				if(m[1]!=n[0])
					cout<<"Matrix cannot be multiplied";
				else
					MatrixMul(a,b,m,n);
			break;
			
			default:
				cout<<"Invalid Input!!"<<endl;
		}
//-----------------Asked for continuity or to exit-------------------------------
		cout<<"Enter 1 to try again or else 0 to exit : ";
		cin>>flag1;
	}
}