#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;
char f;
void main()
{
	setlocale(LC_ALL, "rus");
	do {
		int N;
		cout << "������� ����� �������" << endl;
		cin >> N;
		if (N == 1)
		{
			/*1.	��� ��������� n � ����� ����� ��������� n! � n2.*/
			int n;
			int b = 0;
			int g = 1;
			cout << "������� ����� n" << endl;
			cin >> n;
			for (int i = 1; i <= n; i++)
			{
				g *= i;
				b = pow(i, 2);
				cout << "n^2 = " << b << endl;
			}
			cout << "n!= " << g << endl;
		}
		if (N == 2)
		{
			/*2.	������ ����������� ����� �� 10 �� N. ����� ���������� ����� ������ ����������� �����.*/
			int N;
			cout << "������� ����� N" << endl;
			cin >> N;
			int g;
			int f;
			for (int i = 10; i <= N; i++)
			{
				g = i / 10;
				f = i % 10;
				if (g > f)
				{
					cout << "���������� ����� ������ ����������� ����� = " << g << endl;
				}
				else if (f>g)
				{
					cout << "���������� ����� ������ ����������� ����� = " << f << endl;
				}
			}
		}
		if (N == 3)
		{
			/*3.	������ ����������� ����� �� 10 �� N. ��� ������������ ����� ����� ������ ����� � ����� ��� ����.*/
			int N;
			cout << "������� ����� N" << endl;
			cin >> N;
			int p;
			int v;
			int b;
			int sum;
			for (int i = 10; i <= N; i++)
			{
				p = 0;
				v = 0;
				b = 0;
				if (i > 99)
				{
					p = i / 100;
					v = (i / 10) % 10;
					b = p % 10;
				}
				else if (i < 99)
				{
					p = i / 10;
					b = i % 10;
				}
				sum = p + v + b;
				cout << "������ ����� = " << p << endl;
				cout << "����� ���� = " << sum << endl;
				cout << "----------------------------------------------" << endl;
			}
		}
		if (N == 4)
		{
			/*4.	����������, �������� �� ����� ����� ������������, �. �. ����� ������, ������� ��������� �������� ����� ������� � ������ ������ (���������, ����������).
			��������, ����� 123321, 202, 9889, 5555.*/
			int N;
			cout << "������� �����" << endl;
			cin >> N;
			if (N < 1000)
			{
				int a = N / 10;
				int b = N % 10;
				if (a == b)
				{
					cout << "����� ����������" << endl;
				}
				else
				{
					cout << "�� ����������" << endl;
				}
			}
			if ((N > 999) && (N < 10000))
			{
				int a = N / 1000;
				int b = (N / 100) % 10;
				int c = (N / 10) % 10;
				int v = N % 10;
				if ((a == v) && (b == c))
				{
					cout << "����� ����������" << endl;
				}
				else
				{
					cout << "�� ����������" << endl;
				}
			}
			if ((N > 9999) && (N < 100000))
			{
				int a = N / 10000;
				int b = (N / 1000) % 10;
				int c = (N / 100) % 10;
				int v = (N / 10) % 10;
				int d = N % 10;
				if ((a == d) && (b == v))
				{
					cout << "����� ����������" << endl;
				}
				else
				{
					cout << "�� ����������" << endl;
				}
			}
		}
		else if (N == 5)
		{
			/*5.	������� ����� ��������� ����� �� 12 �� 80 �� 1- ����� � ������.*/
			int qw;
			for (int i = 12; i <= 80; i++)
			{
				qw = pow(i, 2);
				cout << qw << endl;
			}
		}
		else if (N == 6)
		{
			/*6.	������� �������� ��������� ����� �� 22 �� 88 �� 1- ����� � ������.*/
			int qw;
			int qw2;
			int razn;
			for (int i = 12, i2 = 13; i <= 80; i++, i2++)
			{
				qw = pow(i, 2);
				qw2 = pow(i2, 2);
				razn = qw2 - qw;
				cout << razn << endl;
			}
		}
		else if (N == 7)
		{
			/*7.	���� ������������ ����� A � ����������� ����� �� 1 �� N (> 0). ����� �������� ��������� A � ����������� ����� N .   */
			int A;
			cout << "������� ����� A" << endl;
			cin >> A;
			int N;
			cout << "������� ����� N" << endl;
			cin >> N;
			int qw;
			int qw2;
			int razn;
			for (int i = 1; i <= N; i++)
			{
				qw = pow(A, 2);
				qw2 = pow(i, 2);
				razn = qw - qw2;
				cout << razn << endl;
			}
		}
		else if (N == 8)
		{
			/*8.	������ ����������� ����� �� 10 �� N. ����� ���������� ����� ������ ����������� �����.1*/
			int N;
			cout << "������� ����� N" << endl;
			cin >> N;
			int g;
			int f;
			for (int i = 10; i <= N; i++)
			{
				g = i / 10;
				f = i % 10;
				if (g < f)
				{
					cout << "���������� ����� ������ ����������� ����� = " << g << endl;
				}
				else if (f<g)
				{
					cout << "���������� ����� ������ ����������� ����� = " << f << endl;
				}
			}
		}
		else if (N == 9)
		{
			/*10.	���� ����������� �����  n (n<9999). ����� ������������� ����� ����� (� �������������, ��� n>10).*/
			int n;
			cout << "������� �����" << endl;
			cin >> n;
			int u = (n / 10) % 10;
			cout << "������������� �����" << u << endl;
		}
		else if (N == 10)
		{
			//11.	���� ����� �� 1 �� 1000 � ����� m.������� ��� ������� �� ������� ������ ����� �� ����� m.
			int m;
			cout << "������� �����" << endl;
			cin >> m;
			int ost;
			for (int i = 200; i <= 1000; i += 200)
			{
				ost = i % m;
				cout << "������� �� ������� ������ ����� " << i << " = " << ost << endl;
			}
		}
		cout << "������ ���������� ��������� �������" << endl;
		cin >> f;
	} while (f = 'y');

}