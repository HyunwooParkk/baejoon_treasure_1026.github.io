#include<stdio.h>
#include<stdlib.h>

void selectionSortA(int value[], int count);
void selectionSortB(int value[], int count);

int main() {


	int num = 0;

	int sum = 0;
	int i = 0, j =0;
	int *a = NULL;
	int *b = NULL;

	

	scanf("%d", &num);

	if (num > 0 && num <= 50) {   // n�� 50���� �۰ų� ���� �ڿ���

		a = (int *)malloc(sizeof(int) * num);
		b = (int *)malloc(sizeof(int) * num);

		for (i = 0; i < num; i++) {
			scanf("%d", &a[i]);

			if (a[i] > 100 || a[i] < 0) { // 100���� �۰ų� ���� ���� �ƴ� ����
				exit(1);
			}
		}

		for (i = 0; i < num; i++) {
			scanf("%d", &b[i]);

			if (b[i] > 100 || b[i] < 0) {
				exit(1);
			}
		}

		selectionSortA(a, num);  // �������� ����
		selectionSortB(b, num); // �������� ����

		for (j = 0; j < num; j++) {
			sum += a[j] * b[j];  // ���� ���� ���ϸ� �������� ���ϴ� �ּҰ��� ����.
		}

		printf("%d\n", sum);  
	}
	else {
		exit(1);
	}

	return 0;
}

void selectionSortA(int value[], int count) { // ��������

	int i = 0, j = 0;
	int min = 0, temp = 0;

	for (i = 0; i < count - 1; i++) {
		min = i;
		for (j = i + 1; j < count; j++) {
			if (value[j] < value[min]) {
				min = j;
			}
		}

		temp = value[i];
		value[i] = value[min];
		value[min] = temp;

	}

}
void selectionSortB(int value[], int count) { // ��������

	int i = 0, j = 0;
	int max = 0, temp = 0;

	for (i = 0; i < count - 1; i++) {
		max = i;
		for (j = i + 1; j < count; j++) {
			if (value[j] > value[max]) {
				max = j;
			}
		}

		temp = value[i];
		value[i] = value[max];
		value[max] = temp;

	}

}
