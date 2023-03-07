#include "other.h"
#include <ctime>
#include <cstdlib>
#include<iostream>
#include <cstdarg>
#include <tuple>

///////////////////////////////////////////////////
int d = 9;
int& ref = d;
int IncByValue(int x)
{
	return ++x;
};
int IncByPointer(int* rx)
{
	return(++ * rx);
};
int IncByReference(int& m)
{
	return(++m);
};
void Swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
};
void Swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
};
int Min(int(* arr)[M])
{
	int mn = arr[0][0];
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < M; i++) {
			if (mn > arr[k][i])
				mn = arr[k][i];
		}
	}
	return mn;
};

int Min(int** c, int n, int m) {
	int min = 99999;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (min > c[i][j]) {
				min = c[i][j];
			}
		}
	}
	return min;
};

void full(int** c, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i][j] = rand() % 1000;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << c[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}
int MyStrCmp(const char* str1, const char* str2) {
	int min = (strlen(str1) < strlen(str2) ? strlen(str1) : strlen(str2));
	for (int i = 0; i < min; i++) {
		if (str1[i] > str2[i]) {
			return 1;
		}

		if (str1[i] < str2[i]) {
			return -1;
		}
	}
	if (strlen(str1) == strlen(str2))
		return 0;
	if (strlen(str1) > strlen(str2))
		return 1;
	if (strlen(str1) < strlen(str2))
		return -1;
}
bool isLeapYear(int year) {
	return (year % 4 == 0) and ((year % 100 != 0) or (year % 400 == 0));
}
int  DayOfYear(int day, int month, int year, int arr[][12]) {
	int x;
	int res = 0;
	if (isLeapYear(year)==1) x = 1;
	else x = 0;
	for (int i = 0; i < month - 1; i++) {
		res += arr[x][i];
	}
	return res+day;
}
std::tuple<int, int> DayOfMonth(int DayOfYear, int month, int year, int arr[][12]) {
	int x;
	int res = DayOfYear;
	if (isLeapYear(year) == 1) x = 1;
	else x = 0;
	for (int i = 0; i < month - 1; i++) {
		res -= arr[x][i];
	}
	return std::make_tuple(res, month);
}  

void full(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 1000;
		std::cout << arr[i] << ' ';
	}
}
void addition(int*& arr, int& n, int add) {
	bool flag = 1;
	for (int j = 0; j < n; j++) {
		if (arr[j] == add) {
			flag = 0;
			break;
		}
	}

	if (flag) {
		int* a = new int[++n];
		for (int i = 0; i < n - 1; i++) {
			a[i] = arr[i];
		}
		a[n - 1] = add;
		delete[] arr;
		arr = a;
	}
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << ' ';
	}
}

int sumFirstN(int n) {
	return (n > 1) ? n + sumFirstN(n - 1) : 1;
}
	
//Подсказка-заготовка для задания 7а
//Без использования макросов

void VarArgs(int arg1,...)
{
	int number = 0;	//счетчик элементов
	//Объявите указатель на int и инициализируйте его адресом
	//первого аргумента
	int* tmp = &arg1;

	//Пока не достигнут конец списка:
	// а) печать значения очередного аргумента
	// б) модификация указателя (он должен указывать на
	//следующий аргумент списка)
	// в) увеличить счетчик элементов
	while (*tmp != 0) {
		std::cout << *tmp << " ";
		tmp++;
		number++;
	}



	//Печать числа элементов
	std::cout << std::endl;
	std::cout << "number:\t" << number << std::endl;
}

void VarArgsM(int arg1, ...) {
	int a = arg1;
	int number = 0;
	va_list p;
	va_start(p, arg1);

	while (a != 0) {
		std::cout << a << ' ';
		number++;
		a = va_arg(p, int);
	}
	va_end(p);
	std::cout << "\t " << number << " numbers" << "\n";
}
int* MyMin(int arr[], unsigned int N) {
	int* p = arr;
	for (int i = 0; i < N; i++) {
		if (arr[i] < *p) p = &arr[i];
	}
	return p;
}
