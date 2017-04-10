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

	if (num > 0 && num <= 50) {   // n은 50보다 작거나 같은 자연수

		a = (int *)malloc(sizeof(int) * num);
		b = (int *)malloc(sizeof(int) * num);

		for (i = 0; i < num; i++) {
			scanf("%d", &a[i]);

			if (a[i] > 100 || a[i] < 0) { // 100보다 작거나 같은 음이 아닌 정수
				exit(1);
			}
		}

		for (i = 0; i < num; i++) {
			scanf("%d", &b[i]);

			if (b[i] > 100 || b[i] < 0) {
				exit(1);
			}
		}

		selectionSortA(a, num);  // 오름차순 정렬
		selectionSortB(b, num); // 내림차순 정렬

		for (j = 0; j < num; j++) {
			sum += a[j] * b[j];  // 둘의 값을 곱하면 문제에서 원하는 최소값이 나옴.
		}

		printf("%d\n", sum);  
	}
	else {
		exit(1);
	}

	return 0;
}

void selectionSortA(int value[], int count) { // 오름차순

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
void selectionSortB(int value[], int count) { // 내림차순

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
