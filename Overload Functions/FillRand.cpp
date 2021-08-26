#include"FillRand.h"
void FillRand(int arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	} cout << endl;
}
void FillRand(double arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	} cout << endl;
}
void FillRand(float arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 100;
	} cout << endl;
}
void FillRand(short arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = short(rand() % 10000) / 10;
	} cout << endl;
}
void FillRand(char arr[], const int n)
{
	//заполнить его случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 255);
	} cout << endl;
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}