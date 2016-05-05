#include<iostream>




using namespace std;

void readArray(int[][5]);
void searchElement(int a[][5], int v, int &r, int &c);

int main()
{
	int arr[6][5], valueKey, row, column;
	int result;
	
	readArray(arr);
	
	cout << "Enter your valueKey to be searched: \n";
	cin >> valueKey;
	
	searchElement(arr, valueKey, row, column);
	cout<<&row<<endl;
	cout <<endl<< "Row is: " << row << endl << "Column is: " << column << endl;
	
	system("pause");
}

void readArray(int arr[][5])
{
	cout << "Enter the array element for the size 6x5: \n";
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin >> arr[i][j];
		}
	}
}

void searchElement(int arr[][5], int search, int &row, int &column)
{
	row = -1, column = -1;
	cout <<&row<<endl;
	for(int i=row;i<6;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr[i][j]  == search)
			{
				row = i;
				column = j;	
			}	
		}
	}
}
