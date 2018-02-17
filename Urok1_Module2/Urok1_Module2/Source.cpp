#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>

using namespace std;

int f_2(int *x, int *y); //������� 2
int f_3(int *x, int *y); //������� 3
double f_4(double *x, double *y); //������� 4
double f_5(double x, double y, double z); //������� 5
double maxDouble(double x, double y, double z); //������� 5
double minDouble(double x, double y, double z); //������� 5
double averageDouble(double x, double y, double z); //������� 5
int minInteger(int x, int y, int z); //������� 6
int maxInteger(int x, int y, int z); //������� 7
bool f_8(int x, int y, int z); //������� 8
bool f_9(int x, int y); //������� 9
bool f_10(int x, int y, int z); //������� 10


void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	do
	{
		cout << "������ �������� 10 �������." << endl;
		cout << "��� ���������� �������� 0." << endl;
		cout << endl;
		cout << "������� ����� ������� n=";
		cin >> n;
		cout << endl;

		switch (n)
		{
			case 1:
			{
				/*1. ���� ����������� (����� ���������������) �����, � � ����� ������������� ����� d. 
				��������� ������� q � ������� r ��� �������, � �� d*/

				int a, d, q, r;

					while (1)
					{
						cout << "������� ����������� ����� �: ";
						cin >> a;

						cout << "������� ����� ������������� ����� d: ";
						cin >> d;

						if (a > 0 && d > 0) break;

						cout << "����� � ������ ���� ����������� � ����� d ������ ���� ����� �������������." << endl;
					}

					q = a / d;
					r = a%d;

					cout << "������� q = " << q << endl;
					cout << "������� �� ������� r = " << r << endl;

				system("pause");
				system("cls");
			}break;

			case 2:
			{
				/*2. �������� ������� int f(int x, int y), ������� ���������� 0,
				���� �������� x � y ��� ����� ����, 12/x, ���� y ����� 0, 12/y, 
				���� x ����� 0, ����� 144/(x*y).*/

				int x, y;

					cout << "������� ����� ����� x: ";
					cin >> x;

					cout << "������� ����� ����� y: ";
					cin >> y;

					cout <<"������������ ��������: "<< f_2(&x, &y) << endl;

				system("pause");
				system("cls");
			}break;

			case 3:
			{
				/*3. �������� ������� int f(int x, int y), 
				������� ���������� x-y, ���� x ������ y, 
				����� ���������� y-x*/

				int x, y;

					cout << "������� ����� ����� x: ";
					cin >> x;

					cout << "������� ����� ����� y: ";
					cin >> y;

					cout <<"abs(x-y) = "<< f_3(&x, &y) << endl;

				system("pause");
				system("cls");
			}break;

			case 4:
			{
				/*4. �������� ������� double f(double x, double y), 
				������� ���������� x/y, ���� x ������ y, 
				����� ���������� y/x. ��������������, ��� �������� ����������
				������ ����.  */

				double x, y;

					while (1)
					{
						cout << "������� ������������ ����� x: ";
						cin >> x;

						cout << "������� ������������ ����� y: ";
						cin >> y;

						if (x>0 && y>0) break;

						cout << "����� x � y ������ ���� ������ 0." << endl;
						cout << "������� �������� ��� ���." << endl;
					}

					cout <<"������������ ��������: " << f_4(&x, &y) << endl;

				system("pause");
				system("cls");
			}break;

			case 5:
			{
				/*5. �������� ������� double f(double x, double y, double z), 
				������� ���������� m*n/k, ��� k ���� ������� �� ����� x, y, z, � m � n ���� �������
				� ������� �� ���� �����. ��������������, ��� �������� ���������� ������ ���� */

				double x, y, z;

					while (1)
					{
						cout << "������� ������������ ����� x: ";
						cin >> x;

						cout << "������� ������������ ����� y: ";
						cin >> y;

						cout << "������� ������������ ����� z: ";
						cin >> z;

						if (x>0 && y>0 && z>0) break;

						cout << "����� x, y � z ������ ���� ������ 0." << endl;
						cout << "������� �������� ��� ���." << endl;
					}

				cout << f_5(x, y, z) << endl;

				system("pause");
				system("cls");
			}break;

			case 6:
			{
				/*6. �������� ������� int f(int a, int b, int c), 
				������� ���������� ���������� �� �������� a, b, c.*/

				int x, y, z;

					cout << "������� ����� ����� a: ";
					cin >> x;

					cout << "������� ����� ����� b: ";
					cin >> y;

					cout << "������� ����� ����� c: ";
					cin >> z;

					cout << endl;

				cout<<"���������� ����� �� ���������: " << minInteger(x, y, z) << endl;

				system("pause");
				system("cls");
			}break;

			case 7:
			{
				/*7. �������� ������� int f(int a, int b, int c), 
				������� ���������� ���������� �� �������� a, b, c.*/

				int x, y, z;

					cout << "������� ����� ����� a: ";
					cin >> x;

					cout << "������� ����� ����� b: ";
					cin >> y;

					cout << "������� ����� ����� c: ";
					cin >> z;

					cout << endl;

					cout << "���������� ����� �� ���������: " << maxInteger(x, y, z) << endl;

				system("pause");
				system("cls");
			}break;

			case 8:
			{
				/*8. �������� ������� bool f(int x, int y, int z), 
				������� ���������� true, ���� �2+�2= z2, �����
				���������� false.*/

				int x, y, z;

					cout << "������� ����� ����� x: ";
					cin >> x;

					cout << "������� ����� ����� y: ";
					cin >> y;

					cout << "������� ����� ����� z: ";
					cin >> z;

				cout << endl;

				f_8(x, y, z) ? cout << "��������� �^2 + �^2 = z^2 �������."
							 : cout << "��������� �^2 + �^2 = z^2 �����.";

				cout << endl;
				system("pause");
				system("cls");
			}break;

			case 9:
			{
				/*9. �������� ������� bool f(int x, int y),
				������� ���������� true, ���� x ������� ������ �� y, 
				��� ��������, y ������� ������ �� x, 
				����� ���������� false. ��������������, ��� ��������
				���������� ������ ����.*/

				int x, y;
					while (1)
					{
						cout << "������� ����� ����� x: ";
						cin >> x;

						cout << "������� ����� ����� y: ";
						cin >> y;

						if (x>0 && y>0) break;

						cout << "����� x � y ������ ���� ������ 0." << endl;
						cout << "������� �������� ��� ���." << endl;
					}

				cout << endl;
				cout << "��������� ���������� �������: " << endl;
				cout << "x ������� ������ �� y, ��� ��������, y ������� ������ �� x" << endl;
				cout << endl;
				f_9(x, y) ? cout << "������� �����������."
						  : cout << "������� �� �����������..";

				cout << endl;
				system("pause");
				system("cls");
			}break;

			case 10:
			{
				/*10. ������������� ����� x, y, z ����� ���� ��������� 
				������������, ���� ������� �� ��� ������ ����� ���� 
				������. �������� ������� bool f(int x, int y, int z), 
				������� ���������� true, ���� ����� x, y, z ����� ���� 
				��������� ������������, ����� ���������� false. 
				��������������, ��� �������� ���������� ������ ����*/

				int x, y, z;
					while (1)
					{
						cout << "������� ����� ����� x: ";
						cin >> x;

						cout << "������� ����� ����� y: ";
						cin >> y;

						cout << "������� ����� ����� z: ";
						cin >> z;

						if (x>0 && y>0 && z>0) break;

						cout << "����� x, y � z ������ ���� ������ 0." << endl;
						cout << "������� �������� ��� ���." << endl;
					}

				cout << endl;
				cout << "��������� ���������� �������: " << endl;
				cout << "����� �� ����� x, y, z ���� ��������� ������������." << endl;
				cout << endl;
				f_10(x, y, z) ? cout << "������� �����������."
							  : cout << "������� �� �����������.";

				cout << endl;
				system("pause");
				system("cls");
			}break;

		}
	} while (n != 0);
}


//������� 2
int f_2(int *x, int *y)
{
	if (*x == 0 && *y == 0) return 0;
	else if (*x == 0) return 12 /(*y);
	else if (*y == 0) return 12 /(*x);
	else if (*x != 0 && *y != 0) return 144 / (*x**y);
}

//������� 3
int f_3(int *x, int *y)
{
	if (*x>*y) return *x-*y;
	else if (*x<*y) return *y-*x;
}

//������� 4
double f_4(double *x, double *y)
{
	if (*x > *y) return (*x)/(*y);
	else if (*x < *y) return (*y)/(*x);
}

//������� 5
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

//������� 6
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


//������� 7
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

//������� 8
bool f_8(int x, int y, int z)
{
	if ((x*x + y*y) == z*z) 
		return true;
	else 
		return false;
}

//������� 9
bool f_9(int x, int y)
{
	if (x%y==0||y%x==0)
		return true;
	else
		return false;
}

//������� 10
bool f_10(int x, int y, int z)
{
	int max = maxInteger(x, y, z);
	int sum = x + y + z;
	if ((sum-max) > max)
		return true;
	else
		return false;
}

