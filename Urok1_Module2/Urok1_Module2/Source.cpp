#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>

using namespace std;

int f_2(int *x, int *y); //задание 2
int f_3(int *x, int *y); //задание 3
double f_4(double *x, double *y); //задание 4
double f_5(double x, double y, double z); //задание 5
double maxDouble(double x, double y, double z); //задание 5
double minDouble(double x, double y, double z); //задание 5
double averageDouble(double x, double y, double z); //задание 5
int minInteger(int x, int y, int z); //задание 6
int maxInteger(int x, int y, int z); //задание 7
bool f_8(int x, int y, int z); //задание 8
bool f_9(int x, int y); //задание 9
bool f_10(int x, int y, int z); //задание 10


void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	do
	{
		cout << "Работа содержит 10 заданий." << endl;
		cout << "Для завершения наберите 0." << endl;
		cout << endl;
		cout << "Введите номер задания n=";
		cin >> n;
		cout << endl;

		switch (n)
		{
			case 1:
			{
				/*1. Дано натуральное (целое неотрицательное) число, а и целое положительное число d. 
				Вычислить частное q и остаток r при делении, а на d*/

				int a, d, q, r;

					while (1)
					{
						cout << "Введите натуральное число а: ";
						cin >> a;

						cout << "Введите целое положительное число d: ";
						cin >> d;

						if (a > 0 && d > 0) break;

						cout << "Число а должно быть натуральным и число d должно быть целым положительным." << endl;
					}

					q = a / d;
					r = a%d;

					cout << "Частное q = " << q << endl;
					cout << "Остаток от деления r = " << r << endl;

				system("pause");
				system("cls");
			}break;

			case 2:
			{
				/*2. Напишите функцию int f(int x, int y), которая возвращает 0,
				если значения x и y оба равны нулю, 12/x, если y равен 0, 12/y, 
				если x равен 0, иначе 144/(x*y).*/

				int x, y;

					cout << "Введите целое число x: ";
					cin >> x;

					cout << "Введите целое число y: ";
					cin >> y;

					cout <<"Возвращаемое значение: "<< f_2(&x, &y) << endl;

				system("pause");
				system("cls");
			}break;

			case 3:
			{
				/*3. Напишите функцию int f(int x, int y), 
				которая возвращает x-y, если x больше y, 
				иначе возвращает y-x*/

				int x, y;

					cout << "Введите целое число x: ";
					cin >> x;

					cout << "Введите целое число y: ";
					cin >> y;

					cout <<"abs(x-y) = "<< f_3(&x, &y) << endl;

				system("pause");
				system("cls");
			}break;

			case 4:
			{
				/*4. Напишите функцию double f(double x, double y), 
				которая возвращает x/y, если x больше y, 
				иначе возвращает y/x. Предполагается, что значения параметров
				больше нуля.  */

				double x, y;

					while (1)
					{
						cout << "Введите вещественное число x: ";
						cin >> x;

						cout << "Введите вещественное число y: ";
						cin >> y;

						if (x>0 && y>0) break;

						cout << "Числа x и y должны быть больше 0." << endl;
						cout << "Введите значения еще раз." << endl;
					}

					cout <<"Возвращаемое значение: " << f_4(&x, &y) << endl;

				system("pause");
				system("cls");
			}break;

			case 5:
			{
				/*5. Напишите функцию double f(double x, double y, double z), 
				которая возвращает m*n/k, где k есть меньшее из чисел x, y, z, а m и n есть среднее
				и большее из этих чисел. Предполагается, что значения параметров больше нуля */

				double x, y, z;

					while (1)
					{
						cout << "Введите вещественное число x: ";
						cin >> x;

						cout << "Введите вещественное число y: ";
						cin >> y;

						cout << "Введите вещественное число z: ";
						cin >> z;

						if (x>0 && y>0 && z>0) break;

						cout << "Числа x, y и z должны быть больше 0." << endl;
						cout << "Введите значения еще раз." << endl;
					}

				cout << f_5(x, y, z) << endl;

				system("pause");
				system("cls");
			}break;

			case 6:
			{
				/*6. Напишите функцию int f(int a, int b, int c), 
				которая возвращает наименьшее из значений a, b, c.*/

				int x, y, z;

					cout << "Введите целое число a: ";
					cin >> x;

					cout << "Введите целое число b: ";
					cin >> y;

					cout << "Введите целое число c: ";
					cin >> z;

					cout << endl;

				cout<<"Наименьшее число из введенных: " << minInteger(x, y, z) << endl;

				system("pause");
				system("cls");
			}break;

			case 7:
			{
				/*7. Напишите функцию int f(int a, int b, int c), 
				которая возвращает наибольшее из значений a, b, c.*/

				int x, y, z;

					cout << "Введите целое число a: ";
					cin >> x;

					cout << "Введите целое число b: ";
					cin >> y;

					cout << "Введите целое число c: ";
					cin >> z;

					cout << endl;

					cout << "Наибольшее число из введенных: " << maxInteger(x, y, z) << endl;

				system("pause");
				system("cls");
			}break;

			case 8:
			{
				/*8. Напишите функцию bool f(int x, int y, int z), 
				которая возвращает true, если х2+у2= z2, иначе
				возвращает false.*/

				int x, y, z;

					cout << "Введите целое число x: ";
					cin >> x;

					cout << "Введите целое число y: ";
					cin >> y;

					cout << "Введите целое число z: ";
					cin >> z;

				cout << endl;

				f_8(x, y, z) ? cout << "Выражение х^2 + у^2 = z^2 истинно."
							 : cout << "Выражение х^2 + у^2 = z^2 ложно.";

				cout << endl;
				system("pause");
				system("cls");
			}break;

			case 9:
			{
				/*9. Напишите функцию bool f(int x, int y),
				которая возвращает true, если x делится нацело на y, 
				или наоборот, y делится нацело на x, 
				иначе возвращает false. Предполагается, что значения
				параметров больше нуля.*/

				int x, y;
					while (1)
					{
						cout << "Введите целое число x: ";
						cin >> x;

						cout << "Введите целое число y: ";
						cin >> y;

						if (x>0 && y>0) break;

						cout << "Числа x и y должны быть больше 0." << endl;
						cout << "Введите значения еще раз." << endl;
					}

				cout << endl;
				cout << "Проверить выполнение условия: " << endl;
				cout << "x делится нацело на y, или наоборот, y делится нацело на x" << endl;
				cout << endl;
				f_9(x, y) ? cout << "Условие выполняется."
						  : cout << "Условие не выполняется..";

				cout << endl;
				system("pause");
				system("cls");
			}break;

			case 10:
			{
				/*10. Положительные числа x, y, z могут быть сторонами 
				треугольника, если большее из них меньше суммы двух 
				других. Напишите функцию bool f(int x, int y, int z), 
				которая возвращает true, если числа x, y, z могут быть 
				сторонами треугольника, иначе возвращает false. 
				Предполагается, что значения параметров больше нуля*/

				int x, y, z;
					while (1)
					{
						cout << "Введите целое число x: ";
						cin >> x;

						cout << "Введите целое число y: ";
						cin >> y;

						cout << "Введите целое число z: ";
						cin >> z;

						if (x>0 && y>0 && z>0) break;

						cout << "Числа x, y и z должны быть больше 0." << endl;
						cout << "Введите значения еще раз." << endl;
					}

				cout << endl;
				cout << "Проверить выполнение условия: " << endl;
				cout << "Могут ли числа x, y, z быть сторонами треугольника." << endl;
				cout << endl;
				f_10(x, y, z) ? cout << "Условие выполняется."
							  : cout << "Условие не выполняется.";

				cout << endl;
				system("pause");
				system("cls");
			}break;

		}
	} while (n != 0);
}


//задание 2
int f_2(int *x, int *y)
{
	if (*x == 0 && *y == 0) return 0;
	else if (*x == 0) return 12 /(*y);
	else if (*y == 0) return 12 /(*x);
	else if (*x != 0 && *y != 0) return 144 / (*x**y);
}

//задание 3
int f_3(int *x, int *y)
{
	if (*x>*y) return *x-*y;
	else if (*x<*y) return *y-*x;
}

//задание 4
double f_4(double *x, double *y)
{
	if (*x > *y) return (*x)/(*y);
	else if (*x < *y) return (*y)/(*x);
}

//задание 5
double f_5(double x, double y, double z)
{
	double k, m, n;

		k= minDouble(x, y, z);
		m= averageDouble(x, y, z);
		n = maxDouble(x, y, z);

	return m*n/k;

}

double maxDouble(double x, double y, double z)
{
	double A[3] = { x, y, z };
	double max=A[0];
		for (int i = 1; i < 3; i++)
		{
			if (A[i] > max) max = A[i];
		}
	return max;
}

double minDouble(double x, double y, double z)
{
	double A[3] = { x, y, z };
	double min = A[0];
		for (int i = 1; i < 3; i++)
		{
			if (A[i] < min) min = A[i];
		}
	return min;
}

double averageDouble(double x, double y, double z)
{	
	return (x+y+z)/3;
}

//задание 6
int minInteger(int x, int y, int z)
{
	int A[3] = { x, y, z };
	int min = A[0];
		for (int i = 1; i < 3; i++)
		{
			if (A[i] < min) min = A[i];
		}
	return min;
}


//задание 7
int maxInteger(int x, int y, int z)
{
	int A[3] = { x, y, z };
	int max = A[0];
		for (int i = 1; i < 3; i++)
		{
			if (A[i] > max) max = A[i];
		}
	return max;
}

//задание 8
bool f_8(int x, int y, int z)
{
	if ((x*x + y*y) == z*z) 
		return true;
	else 
		return false;
}

//задание 9
bool f_9(int x, int y)
{
	if (x%y==0||y%x==0)
		return true;
	else
		return false;
}

//задание 10
bool f_10(int x, int y, int z)
{
	int max = maxInteger(x, y, z);
	int sum = x + y + z;
	if ((sum-max) > max)
		return true;
	else
		return false;
}

