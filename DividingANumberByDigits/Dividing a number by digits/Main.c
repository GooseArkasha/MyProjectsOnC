#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int number, copy;
	system("chcp 1251");


	do {
		printf("Введите положительное пятизначное число.\n");
		printf("number = ");
		scanf("%d", &number);

		if (number < 10000 || number > 99999) {
			printf("Число введено не корректно. Повторите попытку ввода.\n\n");
		}
		else {
			break;
		}
	} while (1);

	/*	В переменной number на данном этапе хранится корректное значение*/

	copy = number;

	for (int i = 0; i < 5; i++) {
		printf("%d-я цифра числа %d равна %d\n", i + 1, number, (number / (int)pow(10, 4 - i)) % 10);
	}
	
	return 0;
}

/*
	Составить программу, которая будет считывать введённое пятизначное число.
	После чего, каждую цифру этого числа необходимо вывести в новой строке
*/