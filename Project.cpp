#include<iostream>
using namespace std;
void Transpose(int** arr, int row, int cols);
void Entervalues(int** arr,int rows, int cols);
void sumofvalues(int** arr, int row, int cols);
void rowAverage(int** arr, int row, int cols);
void colAverage(int** arr, int row, int cols);
void rowwisesort(int** arr, int row, int cols);
void colswisesort(int** arr, int row, int cols);
void AddTwoMatrix(int** arr, int row, int cols);
void subTwoMatrix(int** arr, int row, int cols);
void Multiplication(int** arr, int row, int cols);
void AverageofMatrix(int** arr, int row, int cols);
void productofvalues(int** arr, int row, int cols);
void AddscalarMatrix(int** arr, int row, int cols);
void SubscalarMatrix(int** arr, int row, int cols);
void MulcalarMatrix(int** arr, int row, int cols);
void DividcalarMatrix(int** arr, int row, int cols);
void SubMatrix(int** arr, int row, int cols ,int p, int q);
int DeterminatofMatrix(int** arr, int row, int cols);
void Adj(int** arr, int row, int cols);
void Matrixinverse(int** arr,int row, int cols);
int main()
{
	int rows = 4, cols = 5, op = 0, d = 0;
	int** arr1 = new int* [rows];
	for (int i = 0; i < rows; i++)
		arr1[i] = new int[cols];

	while (1)
	{
		
		cout << "\t\t\t\t\t\t\t--------------------------------------------------" << endl;
		cout << "\t\t\t\t\t\t\t|Press [1]  for Enter the values in Matrix       |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [2]  for Sum of Matrix\t\t\t |"<<endl;
		cout << "\t\t\t\t\t\t\t|Press [3]  for Product of Matrix\t\t |"<< endl;
		cout << "\t\t\t\t\t\t\t|Press [4]  for Row-wise Average\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [5]  for Column-wise Average\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [6]  for Average of Matrix\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [7]  for Row-wise Sorting\t\t |"<< endl;
		cout << "\t\t\t\t\t\t\t|Press [8]  for Column-wise Sorting\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [9]  for Scalar Matrix Addition\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [10] for Scalar Matrix Subtraction\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [11] for Subtraction of two Matrices\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [12] for Addition of two Matrices\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [13] for Scalar Matrix Multiplication\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [14] for Multiplication of two Matrices\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [15] for Scalar Matrix Subtraction\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [16] for Scalar Matrix Division\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [17] for Matrix transpose\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [18] for Matrix determinan\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [19] for Matrix Inverse\t\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t|Press [20] for Exit\t\t\t\t |" << endl;
		cout << "\t\t\t\t\t\t\t--------------------------------------------------" << endl;
		cout << "\t\t\t\t\t\t\t"; cin >> op;
		switch (op)
		{
		case 1:
			system("cls");
			cout << "\t\t\t\t\t\t\t[VALUE IS INSERTED]" << endl;
			Entervalues(arr1,rows, cols);
			break;

		case 2:
			system("cls");
			sumofvalues(arr1, rows, cols);
			break;

		case 3:
			system("cls");
			productofvalues(arr1,rows,cols);
			break;
		
		case 4:
			system("cls");
			rowAverage(arr1,rows,cols);
			break;

		case 5:
			system("cls");
			colAverage(arr1, rows, cols);
			break;

		case 6:
			system("cls");
			AverageofMatrix(arr1, rows, cols);
			break;

		case 7:
			system("cls");
			rowwisesort(arr1, rows, cols);
			break;

		case 8:
			system("cls");
			colswisesort(arr1, rows, cols);
			break;

		case 9:
			system("cls");
			AddscalarMatrix(arr1, rows, cols);
			break;

		case 10:
			system("cls");
			SubscalarMatrix(arr1, rows, cols);
			break;

		case 11:
			system("cls");
			subTwoMatrix(arr1, rows, cols);
			break;

		case 12:
			system("cls");
			AddTwoMatrix(arr1, rows, cols);
			break;

		case 13:
			system("cls");
			MulcalarMatrix(arr1, rows, cols);
			break;

		case 14:
			system("cls");
			Multiplication(arr1, rows, cols);
			break;

		case 15:
			system("cls");
			SubscalarMatrix(arr1, rows, cols);
			break;

		case 16:
			system("cls");
			DividcalarMatrix(arr1, rows, cols);
			break;

		case 17:
			system("cls");
			Transpose(arr1, rows, cols);
			break;

		case 18:
			system("cls");
			d = DeterminatofMatrix(arr1, rows, cols);
			cout << "\t\t\t\t\t\t\t[Determinat of Matrix is:" << d << "]" << endl;
			break;

		case 19:
			system("cls");
			Matrixinverse(arr1, rows, cols);
			break;

		case 20:
			system("cls");
			cout << "\t\t\t\t\t\t\t\t\t\t[THANK YOU]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t[    .    ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t[    .    ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t[    .    ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t[    .    ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t[    .    ]" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t[ THE END ]" << endl;
			exit(20);
			break;

		default:
			system("cls");
			cout << "\t\t\t\t\t\t\t[Invalid Input]" << endl;
			break;
		}
	}
	return 0;
}
void Entervalues(int** arr,int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 4;
		}
	}

	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < cols; j++)
		{
			cout<<"|" << arr[i][j] << "|";
		}
		cout << endl;
	}
	cout << "\t\t\t\t\t\t\t------------------" << endl;
}
void sumofvalues(int** arr, int row, int cols)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			sum+=arr[i][j];
	cout << "\t\t\t\t\t\t\t[Sum is:"<<sum<<"]" << endl;
}
void productofvalues(int** arr, int row, int cols)
{
	long int pro = 1;
	int sum = 0;
	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
		{
			pro *= arr[i][j];
			sum += pro;
		}
	cout << "\t\t\t\t\t\t\t[Product is:" << sum << "]" << endl;
}
void rowAverage(int** arr, int row, int cols)
{
	float sum = 0;
	float avg = 0;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			sum +=arr[i][j];

	avg = sum / row;
	cout << "\t\t\t\t\t\t\t[Row-Wise-Average is:" << avg << "]" << endl;
}

void colAverage(int** arr, int row, int cols)
{
	float sum = 0;
	float avg = 0;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			sum += arr[i][j];

	avg = sum / cols;
	cout << "\t\t\t\t\t\t\t[Column-Wise-Average is:" << avg << "]" << endl;
}

void rowwisesort(int** arr, int row, int cols)
{
	int* temp = 0;
	for (int i = 0; i < row / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[row - i - 1];
		arr[row - i - 1] = temp;
	}
	cout << "\t\t\t\t\t\t\t[Row-Wise-Sort]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < cols; j++)
		{
			cout << "|" << arr[i][j] << "|";
		}
		cout << endl;
	}
}

void colswisesort(int** arr, int row, int cols)
{
	int* temp = 0;
	for (int j = 0; j < cols / 2; j++)
	{
		for (int i = 0; i < row / 2; i++)
		{
			temp = arr[i];
			arr[i] = arr[row - i - 1];
			arr[row - i - 1] = temp;

			temp = arr[j];
			arr[j] = arr[cols - j - 1];
			arr[cols - j - 1] = temp;
		}
	}

	cout << "\t\t\t\t\t\t\t[Column-Wise-Sort]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < cols; j++)
		{
			cout << "|" << arr[i][j] << "|";
		}
		cout << endl;
	}
}
void AverageofMatrix(int** arr, int row, int cols)
{
	float sum = 0;
	int count = 0;
	float avg = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	count = row + cols;
	avg = sum / count;
	cout << count << endl;
	cout << "\t\t\t\t\t\t\t[Average of Whole Matrix is:" << avg << "]" << endl;
}
void AddTwoMatrix(int** arr, int row, int cols)
{
	int** temp = new int* [row];
	for (int i = 0; i < row; i++)
		temp[i] = new int[cols];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			temp[i][j] = rand() % 5;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			temp[i][j] = temp[i][j] + arr[i][j];


	cout << "\t\t\t\t\t\t\t[Addition of Two Matrixes]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < cols; j++)
		{
			cout << "|" << temp[i][j] << "|";
		}
		cout << endl;
	}
	cout << "\t\t\t\t\t\t\t------------------" << endl;

}
void subTwoMatrix(int** arr, int row, int cols)
{
	int** temp = new int* [row];
	for (int i = 0; i < row; i++)
		temp[i] = new int[cols];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			temp[i][j] = rand() % 20;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			temp[i][j] = temp[i][j] - arr[i][j];


	cout << "\t\t\t\t\t\t\t[Subtraction of Two Matrixes]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < cols; j++)
		{
			cout << "|" << temp[i][j] << "|";
		}
		cout << endl;
	}
	cout << "\t\t\t\t\t\t\t------------------" << endl;

}
void Multiplication(int** arr, int row, int cols)
{
	int** temp = new int* [row];
	for (int i = 0; i < row; i++)
		temp[i] = new int[cols];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			temp[i][j] = rand() % 5;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			temp[i][j] = temp[i][j] * arr[i][j];


	cout << "\t\t\t\t\t\t\t[Multiplication of Two Matrixes]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < cols; j++)
		{
			cout << "|" << temp[i][j] << "|";
		}
		cout << endl;
	}
	cout << "\t\t\t\t\t\t\t------------------" << endl;
}
void Transpose(int** arr, int row, int cols)
{
	cout << "\t\t\t\t\t\t\t[Transpose of Matrixes]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < cols; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < row; j++)
		{
			cout << "|" << arr[j][i] << "|";
		}
		cout << endl;
	}
	cout << "\t\t\t\t\t\t\t------------------" << endl;
}
void AddscalarMatrix(int** arr, int row, int cols)
{
	int c = 0;
	cout << "\t\t\t\t\t\t\t[Enter the Scalar Value]" << endl;
	cout << "\t\t\t\t\t\t\t"; cin >> c;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = arr[i][j] + c;

	cout << "\t\t\t\t\t\t\t[Scalar Value Added to Matrix]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < cols; j++)
		{
			cout << "|" << arr[i][j] << "|";
		}
		cout << endl;
	}
	cout << "\t\t\t\t\t\t\t------------------" << endl;
}

void SubscalarMatrix(int** arr, int row, int cols)
{
	int c = 0;
	cout << "\t\t\t\t\t\t\t[Enter the Scalar Value]" << endl;
	cout << "\t\t\t\t\t\t\t"; cin >> c;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = arr[i][j] - c;

	cout << "\t\t\t\t\t\t\t[Scalar Value Subtracted to Matrix]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t\t\t\t\t";
	for (int j = 0; j < cols; j++)
	{
		cout << "|" << arr[i][j] << "|";
	}
	cout << endl;
	}
cout << "\t\t\t\t\t\t\t------------------" << endl;
}
void MulcalarMatrix(int** arr, int row, int cols) 
{

	int c = 0;
	cout << "\t\t\t\t\t\t\t[Enter the Scalar Value]" << endl;
	cout << "\t\t\t\t\t\t\t"; cin >> c;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = arr[i][j] * c;

	cout << "\t\t\t\t\t\t\t[Scalar Value Multipliplied to Matrix]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < cols; j++)
		{
			cout << "|" << arr[i][j] << "|";
		}
		cout << endl;
	}
	cout << "\t\t\t\t\t\t\t------------------" << endl;
}
void DividcalarMatrix(int** arr, int row, int cols)
{
	int c = 0;
	cout << "\t\t\t\t\t\t\t[Enter the Scalar Value]" << endl;
	cout << "\t\t\t\t\t\t\t"; cin >> c;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = arr[i][j] / c;

	cout << "\t\t\t\t\t\t\t[Scalar Value Divided to Matrix]" << endl;
	cout << "\t\t\t\t\t\t\t------------------" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t\t\t\t\t\t";
		for (int j = 0; j < cols; j++)
		{
			cout << "|" << arr[i][j] << "|";
		}
		cout << endl;
	}
	cout << "\t\t\t\t\t\t\t------------------" << endl;

}
void SubMatrix(int** arr, int row, int cols, int p, int q)
{
	int** temp = nullptr;
	int k = 0, x = 0;

	temp = new int* [row];
	for (int i = 0; i < row; i++)
		temp[i] = new int[cols];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i!=p && j!=q)
			{
				temp[k][x++] = arr[i][j];
				if (x == row - 1)
				{
					x = 0;
					k++;
				}
			}
		}
	}
}
int DeterminatofMatrix(int** arr, int row, int cols)
{
	int det = 0, sign = 1;
	int** temp = nullptr;

	temp = new int* [row];
	for (int i = 0; i < row; i++)
		temp[i] = new int[cols];

	for (int i = 0; i < row; i++)
	{
		SubMatrix(arr, row, cols, 0, i);
		det += sign * arr[0][i] * DeterminatofMatrix(temp,row,cols-1);
		sign = -sign;
	}
	return det;
}
void Adj(int** arr, int row, int cols)
{
	int** temp = nullptr;
	int s = 1;
	int** adj = new int* [row];

	for (int i = 0; i < row; i++)
		adj[i] = new int[cols];

	temp = new int* [row];
	for (int i = 0; i < row; i++)
		temp[i] = new int[cols];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			SubMatrix(arr, row, cols, i, j);
			if ((i + j) % 2 == 0)
				s = 1;
			else
				s = -1;
			adj[j][i] = (s) * (DeterminatofMatrix(temp, row, cols-1));

		}
	}
}
void Matrixinverse(int** arr, int row, int cols)
{
	int det = DeterminatofMatrix(arr, row, cols);
	if(det==0)
		cout << "\t\t\t\t\t\t\t[Inverse of  Matrix is:"<<det<<" ]" << endl;
	else {
		int** adj = new int* [row];
		for (int i = 0; i < row; i++)
			adj[i] = new int[cols];

		Adj(adj, row, cols);

		int** inv = new int* [row];
		for (int i = 0; i < row; i++)
			inv[i] = new int[cols];


		for (int i = 0; i < row; i++)
			for (int j = 0; j < cols; j++)
				inv[i][j] = adj[i][j] / det;


		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << inv[i][j] << " ";
			}
			cout << endl;
		}
	}
}