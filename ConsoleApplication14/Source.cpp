#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int zadanie;
	do
	{
		cout << "������� ����� �������: ";
		cin >> zadanie;
		switch (zadanie)
		{
		case 1:
		{
			system("cls");
			cout << "������� 1." << endl;
			cout << "���� ����� ����� � �������� ������� ���������, �.�. ������������������ ����  0 � 1. ��������� ��������� �������� ����� ����� � ������������ ������� ���������." << endl;
			cout << "�������:" << endl;
			int x, a[] = { 0 }, b[] = { 0 }, k = 0, X = 0;
			cout << "����� � �������� ������� ���������: ";
			cin >> x;
			int Xcounter = X, xcounter = x;
			while (xcounter > 0)
			{
				Xcounter = xcounter % 1000;
				xcounter /= 1000;
				k++;
			}
			for (int i = 0; i < k; i++)
			{
				X = x % 1000;
				if (X == 0)
				{
					a[i] = 0;
					b[k - 1 - i] = a[i];
				}
				else if (X == 1)
				{
					a[i] = 1;
					b[k - 1 - i] = a[i];
				}
				else if (X == 10)
				{
					a[i] = 2;
					b[k - 1 - i] = a[i];
				}
				else if (X == 11)
				{
					a[i] = 3;
					b[k - 1 - i] = a[i];
				}
				else if (X == 100)
				{
					a[i] = 4;
					b[k - 1 - i] = a[i];
				}
				else if (X == 101)
				{
					a[i] = 5;
					b[k - 1 - i] = a[i];
				}
				else if (X == 110)
				{
					a[i] = 6;
					b[k - 1 - i] = a[i];
				}
				else if (X == 111)
				{
					a[i] = 7;
					b[k - 1 - i] = a[i];
				}
				else
					break;
				x /= 1000;
			}
			cout << "����� � ������������ ������� ���������: ";
			for (int i = 0; i < k; i++)
			{
				cout << b[i];
			}
			cout << endl;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "������� 2." << endl;
			cout << "������ ��� ������� �������������� �����, ��������� �� 7 �  9 ���������. ������������ ������ ������ �� ������������� �� �������� �������� ����� ��������." << endl;
			cout << "�������:" << endl;
			int a[7], b[9], ab[16], max = 0, tmp;
			cout << "������ ������: ";
			for (int i = 0; i < 7; i++)
			{
				a[i] = 1 + rand() % 50;
				cout << "[" << a[i] << "] ";
			}
			cout << endl << "������ ������: ";
			for (int i = 0; i < 9; i++)
			{
				b[i] = 1 + rand() % 50;
				cout << "[" << b[i] << "] ";
			}
			cout << endl << "������ ������: ";
			for (int i = 0; i < 7; i++)
			{
				ab[i] = a[i];
			}
			for (int i = 7; i < 16; i++)
			{
				ab[i] = b[i - 7];
			}
			for (int i = 0; i < 16; i++)
			{
				max = i;
				for (int j = i + 1; j < 16; j++)
				{
					if (ab[j] > ab[max])
					{
						max = j;
					}
				}
				tmp = ab[i];
				ab[i] = ab[max];
				ab[max] = tmp;
			}
			for (int i = 0; i < 16; i++)
			{
				cout << "[" << ab[i] << "] ";
			}
			cout << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "������� 3." << endl;
			cout << "������ ������, � ������� ������ ��� ���������� ��������. ���������� �� ��������������." << endl;
			cout << "�������:" << endl;
			int a[10], k = 0, i = 0, j = 0;
			cout << "������� ��������: " << endl;
			for (int i = 0; i < 10; i++)
			{
				cin >> a[i];
			}
			for (int i = 0; i < 10; i++)
			{
				cout << i + 1 << " - [" << a[i] << "]" << endl;
			}
			while (k != 1)
			{
				for (int j = 0; j < 10; j++)
				{
					if (a[i] == a[j] && i != j)
					{
						cout << "���������� �������� - " << i + 1 << " � " << j + 1 << endl;
						k++;
					}
				}
				i++;
			}
			break;
		}
		case 4:
		{
			system("cls");
			cout << "������� 4." << endl;
			cout << "����� ������������� ������. ����������, �������� �� �������� ��� ��������� �������������� ����������. ���� ��� � ������� ����������� ����������, ���� ���� � ����� ��� ��������." << endl;
			cout << "�������:" << endl;
			const int n = 5;
			int a[n], k = 0;
			cout << "������� ��������: " << endl;
			for (int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			for (int i = 1; i < n - 1; i++)
			{
				if (abs(a[i]) == sqrt(a[i - 1] * a[i + 1]))
					k++;
			}
			if (k == n - 2)
				cout << "�������� ����. ����������, ����������� ����� = " << a[1] / a[0] << endl;
			else
				cout << "�� �������� ����. ����������." << endl;
			break;
		}
		case 5:
		{
			system("cls");
			cout << "������� 5." << endl;
			cout << "������������� �� �������� ��������� ���������� ������� ������������� ���������� ������ 5x4." << endl;
			cout << "�������:" << endl;
			int a[5][4], max = 0, tmp;
			cout << "�������� ������:" << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				max = i;
				for (int j = i + 1; j < 5; j++)
				{
					if (a[j][3] > a[max][3])
					{
						max = j;
					}
				}
				tmp = a[i][3];
				a[i][3] = a[max][3];
				a[max][3] = tmp;
			}
			cout << "��������������� ������:" << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}
		case 6:
		{
			system("cls");
			cout << "������� 6." << endl;
			cout << "� ������� �(3-������,4-�������) �������� ������� ���������� �������� � ������ � ������� ������." << endl;
			cout << "�������:" << endl;
			int a[3][4], min1 = 0, min3 = 0, jmin1 = 0, jmin3 = 0, tmp = 0, i = 0, j = 0;
			cout << "�������� ������:" << endl;
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 4; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				min1 = a[0][0];
				min3 = a[2][0];
				for (int j = 0; j < 4; j++)
				{
					if (a[0][j] < min1)
					{
						min1 = a[0][j];
						jmin1 = j;
					}
					if (a[2][j] < min3)
					{
						min3 = a[2][j];
						jmin3 = j;
					}
				}
				tmp = a[0][jmin1];
				a[0][jmin1] = a[2][jmin3];
				a[2][jmin3] = tmp;
			}
			cout << "���������� ������:" << endl;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}
		case 7:
		{
			system("cls");
			cout << "������� 7." << endl;
			cout << "��� ���������� ������ 5x6. ���������� ������� �������������� ������� �������,  ���������� �������� � ������� ������ ������." << endl;
			cout << "�������:" << endl;
			int a[5][6], sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0;
			int max1 = 0, min1 = 1000, max2 = 0, min2 = 1000, max3 = 0, min3 = 1000, max4 = 0, min4 = 1000, max5 = 0, min5 = 1000;
			float sr1, sr2, sr3, sr4, sr5, sr6;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					if (a[0][j] > max1)
						max1 = a[0][j];
					if (a[1][j] > max2)
						max2 = a[1][j];
					if (a[2][j] > max3)
						max3 = a[2][j];
					if (a[3][j] > max4)
						max4 = a[3][j];
					if (a[4][j] > max5)
						max5 = a[4][j];
					if (a[0][j] < min1)
						min1 = a[0][j];
					if (a[1][j] < min2)
						min2 = a[1][j];
					if (a[2][j] < min3)
						min3 = a[2][j];
					if (a[3][j] < min4)
						min4 = a[3][j];
					if (a[4][j] < min5)
						min5 = a[4][j];
				}
				sum1 += a[i][0];
				sum2 += a[i][1];
				sum3 += a[i][2];
				sum4 += a[i][3];
				sum5 += a[i][4];
				sum6 += a[i][5];
			}
			cout.precision(3);
			sr1 = (float)sum1 / 5;
			sr2 = (float)sum2 / 5;
			sr3 = (float)sum3 / 5;
			sr4 = (float)sum4 / 5;
			sr5 = (float)sum5 / 5;
			sr6 = (float)sum6 / 5;
			cout << "������� �������� ��������: " << endl;
			cout << sr1 << " " << sr2 << " " << sr3 << " " << sr4 << " " << sr5 << " " << sr6 << endl;
			cout << "1 ������: " << "����. - " << max1 << " ���. - " << min1 << endl;
			cout << "2 ������: " << "����. - " << max2 << " ���. - " << min2 << endl;
			cout << "3 ������: " << "����. - " << max3 << " ���. - " << min3 << endl;
			cout << "4 ������: " << "����. - " << max4 << " ���. - " << min4 << endl;
			cout << "5 ������: " << "����. - " << max5 << " ���. - " << min5 << endl;
			break;
		}
		case 8:
		{
			system("cls");
			cout << "������� 8." << endl;
			cout << "��� ���������� ������ n x m ���������, ����� ���������� ������ � �������� ����� � �������." << endl;
			cout << "�������:" << endl;
			int a[5][5], chet = 0, nechet = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
					if (a[i][j] % 2 == 0)
						chet++;
					else if (a[i][j] % 2 != 0)
						nechet++;
				}
				cout << endl;
			}
			cout << "������ �������� - " << chet << endl;
			cout << "�������� �������� - " << nechet << endl;
			break;
		}
		case 9:
		{
			system("cls");
			cout << "������� 9." << endl;
			cout << "��� ���������� ������ n x m ���������. ����������, ������� ��� ����������� ����� 7 ����� ��������� �������." << endl;
			cout << "�������:" << endl;
			int a[5][5], k = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] = 1 + rand() % 20;
					cout << a[i][j] << " ";
					if (a[i][j] == 7)
						k++;
				}
				cout << endl;
			}
			cout << "����� 7 ����������� - " << k << " ���(a)" << endl;
			break;
		}
		case 10:
		{
			system("cls");
			cout << "������� 10." << endl;
			cout << "��� ������ �� n x m ���������. ����� ������� ������� �����������  �������� �������." << endl;
			cout << "�������:" << endl;
			int a[5][5], min = 1000, imin = 0, jmin = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (a[i][j] < min)
					{
						min = a[i][j];
						imin = i;
						jmin = j;
					}
				}
			}
			cout << "���������� ������� - " << min << ", � ��������� [" << imin + 1 << "] - ������, [" << jmin + 1 << "] - �������." << endl;
			break;
		}
		default:
			cout << "�������� ����� �������." << endl;
			break;
		}
	} while (zadanie > 0);
}