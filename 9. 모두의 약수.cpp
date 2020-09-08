#include <stdio.h>
#include <iostream>

// 1초안에 수행되어야 함

int main(void)
{
	int N;
	int count = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j < N; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		printf("%d ", count);
		count = 0;
	}

	
	return 0;
}