#pragma once
#include"stdafx.h"
int Sum(int arr[], const int n);//����� ��������� �������
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
short Sum(short arr[], const int n);
//char Sum(char arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
short Sum(short arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(float arr[], const int n);
double Avg(char arr[], const int n);
//double Avg(char arr[], const int n);//������� �������������� ��������� �������

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(short arr[ROWS][COLS], const int ROWS, const int COLS);


int MinValueIn(int arr[], const int n);//����������� �������� �������
double MinValueIn(double arr[], const int n);
float MinValueIn(float arr[], const int n);
short MinValueIn(short arr[], const int n);
char MinValueIn(char arr[], const int n);

int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float MinValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
short MinValueIn(short arr[ROWS][COLS], const int ROWS, const int COLS);
char MinValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(int arr[], const int n);//������������ �������� �������
double MaxValueIn(double arr[], const int n);
float MaxValueIn(float arr[], const int n);
short MaxValueIn(short arr[], const int n);
char MaxValueIn(char arr[], const int n);

int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float MaxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
short MaxValueIn(short arr[ROWS][COLS], const int ROWS, const int COLS);
char MaxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int n);//����� ����� �� ������������ ���������� ��������
void ShiftLeft(double arr[], const int n);//����� ����� �� ������������ ���������� ��������
void ShiftLeft(float arr[], const int n);//����� ����� �� ������������ ���������� ��������
void ShiftLeft(short arr[], const int n);//����� ����� �� ������������ ���������� ��������
void ShiftLeft(char arr[], const int n);//����� ����� �� ������������ ���������� ��������

void ShiftRight(int arr[], const int n);//����� ������ �� ������������ ���������� ��������
void ShiftRight(double arr[], const int n);//����� ������ �� ������������ ���������� ��������
void ShiftRight(float arr[], const int n);//����� ������ �� ������������ ���������� ��������
void ShiftRight(short arr[], const int n);//����� ������ �� ������������ ���������� ��������
void ShiftRight(char arr[], const int n);//����� ������ �� ������������ ���������� ��������