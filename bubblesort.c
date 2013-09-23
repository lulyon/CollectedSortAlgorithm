/*************************************************************************
	> File Name: bubblesort.c
	> Author: luliang
	> Mail: lulyon@126.com 
	> Created Time: 2013年09月23日 星期一 10时10分26秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

static void swap(int *lhs, int *rhs)
{
	int temp = *lhs;
	*lhs = *rhs;
	*rhs = temp;
}

void bubblesort(int *array, int left, int right)
{
	if(array == NULL || left >= right) return;
	int i, j;
	for(i = right; i != left; --i) {
		for(j = left + 1; j != i; ++j) {
			if(array[j - 1] > array[j]) 
				swap(&array[j - 1], &array[j]);
		}
	}
}

int main()
{
	int a[] = {5, 4, 2, 3, 0, 6, 8, 7};
	int i;
	for(i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");

	bubblesort(a, 0, sizeof(a)/sizeof(a[0]) - 1);

	for(i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

