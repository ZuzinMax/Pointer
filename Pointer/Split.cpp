#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int o = 10;
	int e = 10;
	int* even = new int[e];
	int* odd = new int[o];
	cout << "Исходный массив:   ";
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	cout << "Массив из четных чисел: ";
	
	for (int i = 0;i < n; i++)
	{
		for (int j = i; j < n;j++)
		{
			if (arr[i] % 2 == 0)
			{
				int buffer = arr[i];
				arr[i] = even[j];
				even[j] = buffer;
				cout << even[j] << "\t";
			}
		}
	}
	delete even;
	//delete odd;
	}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << "\t";
	}
}
