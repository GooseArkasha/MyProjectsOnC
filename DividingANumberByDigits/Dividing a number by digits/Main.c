#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int number, copy;
	system("chcp 1251");


	do {
		printf("������� ������������� ����������� �����.\n");
		printf("number = ");
		scanf("%d", &number);

		if (number < 10000 || number > 99999) {
			printf("����� ������� �� ���������. ��������� ������� �����.\n\n");
		}
		else {
			break;
		}
	} while (1);

	/*	� ���������� number �� ������ ����� �������� ���������� ��������*/

	copy = number;

	for (int i = 0; i < 5; i++) {
		printf("%d-� ����� ����� %d ����� %d\n", i + 1, number, (number / (int)pow(10, 4 - i)) % 10);
	}
	
	return 0;
}

/*
	��������� ���������, ������� ����� ��������� �������� ����������� �����.
	����� ����, ������ ����� ����� ����� ���������� ������� � ����� ������
*/