// ���������� ��������� � ������� �������������� ������������
// ��������� ������ ��� ������� ������������ � ����� ��������� �������� � ������� ������������
//

#define _CRT_SECURE_NO_WARNINGS // ��������� ��� ����, ����� ���������� �� ������� ������ � ��������������

#include <stdio.h> // ����������� ���������� ��� ������� printf() � scanf()
#include <conio.h> // ����������� ���������� ��� ������� _getch()
#include <math.h> // ����������� �������������� ���������� ��� ������� sqrt() (������ ����������)
#include <locale.h> // ����������� ���������� ��� ��������� ���������

int main() // ��� ������� main() ����� ��������� ��� ������ (�������������)
{
	float a, b, c, P, S;
	setlocale(LC_ALL, ".1251"); // ����������� ������� ��������

	printf("������� ��� ������: "); // ����� ������
	scanf("%f%f", &a, &b); // ���� ������

	c = sqrt(a * a + b * b);
	P = (a + b + c);
	S = (a * b) / 2;

	printf("\nP = %5.2f  S = %6.3f  C = %5.2f", P, S, c);

	_getch();
	return 0;
}