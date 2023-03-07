
//Прототипы используемых в данном задании функций:
#include <tuple>

extern int& ref;
int IncByValue(int x);
int IncByPointer(int* rx);
int IncByReference(int& m);

void Swap(int* a, int* b);
void Swap(int& a, int& b);

const int N = 6, M = 4;
extern const int N, M;

int Min(int(*arr)[M]);
void full(int** c, int n, int m);
int Min(int** c, int n, int m);

int MyStrCmp(const char* str1, const char* str2);
int  DayOfYear(int day, int month, int year, int arr[][12]);
bool isLeapYear(int year);
std::tuple<int, int> DayOfMonth(int DayOfYear, int month, int year, int arr[][12]);

void full(int* arr, int n);
void addition(int*& arr, int& n, int add);


int sumFirstN(int n);

void VarArgs(int arg1, ...);
void VarArgsM(int arg1, ...);

int* MyMin(int arr[], unsigned int n);