#include"Statistics.h"

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
short Sum(short arr[], const int n)
{
	short sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
//char Sum(char arr[], const int n)
//{
//	char sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	//cout << "Сумма элементов массива: " << sum << endl;
//	return sum;
//}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}
short Sum(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	short sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	return sum;
}

double Avg(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
double Avg(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
double Avg(short arr[], const int n)
{
	short sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, n) / n;
}
//double Avg(char arr[], const int n)
//{
//	char sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
//	return (double)Sum(arr, n) / n;
//}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	short sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	//cout << "Среднее арифметичское элементов массива: " << (double)sum / n << endl;
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int MinValueIn(int arr[], const int n)
{
	int min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
double MinValueIn(double arr[], const int n)
{
	double min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
float MinValueIn(float arr[], const int n)
{
	float min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
short MinValueIn(short arr[], const int n)
{
	short min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}
char MinValueIn(char arr[], const int n)
{
	char min_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}

int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min_element)
			{
				min_element = arr[i][j];
			}
		}
		
	}
	return min_element;
}double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min_element)
			{
				min_element = arr[i][j];
			}
		}
		
	}
	return min_element;
}
float MinValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min_element)
			{
				min_element = arr[i][j];
			}
		}
		
	}
	return min_element;
}
short MinValueIn(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	short min_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min_element)
			{
				min_element = arr[i][j];
			}
		}
		
	}
	return min_element;
}
char MinValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min_element)
			{
				min_element = arr[i][j];
			}
		}
		
	}
	return min_element;
}

int MaxValueIn(int arr[], const int n)
{
	int max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
double MaxValueIn(double arr[], const int n)
{
	double max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
float MaxValueIn(float arr[], const int n)
{
	float max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
short MaxValueIn(short arr[], const int n)
{
	short max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
char MaxValueIn(char arr[], const int n)
{
	char max_element = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}

int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max_element)
			{
				max_element = arr[i][j];
			}
		}
		
	}
	return max_element;
}
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max_element)
			{
				max_element = arr[i][j];
			}
		}
		
	}
	return max_element;
}
float MaxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max_element)
			{
				max_element = arr[i][j];
			}
		}
		
	}
	return max_element;
}
short MaxValueIn(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	short max_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max_element)
			{
				max_element = arr[i][j];
			}
		}
		
	}
	return max_element;
}
char MaxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max_element = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max_element)
			{
				max_element = arr[i][j];
			}
		}
		
	}
	return max_element;
}

void ShiftLeft(int arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		int c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}

void ShiftLeft(double arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		double c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}
void ShiftLeft(float arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		float c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}
void ShiftLeft(short arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		short c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}
void ShiftLeft(char arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shifts; i++)
	{
		char c = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = c;
	}
}
void ShiftRight(int arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		int d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}
void ShiftRight(double arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		double d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}
void ShiftRight(float arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		float d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}
void ShiftRight(short arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		short d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}
void ShiftRight(char arr[], const int n)
{
	int step_of_shifts = 3;

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shifts; i++)
	{
		char d = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = d;
	}
}
