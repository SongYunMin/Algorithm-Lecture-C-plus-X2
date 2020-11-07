#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char arr[100];
	int i = 0;

	printf("수식 입력 : ");
	fgets(arr, 100, stdin);

	printf("수식 출력 : %s\n", arr);

	for (i = 0; i < arr[i] != '\0'; i++) {
		if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) {
			printf("식별자 : %c", arr[i]);
			while (1) {
				i++;
				if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
					printf("%c", arr[i]);
				else
					break;
			}
			printf("\n");
			printf("토큰 No : 2\n\n");
		}

		// 상수를 구별하는 소스로 토큰 값을 받아들여 0~9까지의 범위에 대한 검사를 실행
		if (arr[i] >= '0' && arr[i] <= '9') {
			printf("식별자 : %c", arr[i]);
			while (1) {
				i++;
				if (arr[i] < '0' || arr[i] >'9')
					break;
				printf("%c", arr[i]);
			}
			printf("\n");
			printf("토큰 No : 4\n\n");
		}

		// 연산자에 대한 코드
		switch (arr[i]) {
		case '+': {
			printf("연산자 : +\n");
			printf("토큰 No : 6\n\n");
			break;
		}
		case '-': {
			printf("연산자 : -\n");
			printf("토큰 No : 7\n\n");
			break;
		}
		case '*': {
			printf("연산자 : *\n");
			printf("토큰 No : 8\n\n");
			break;
		}
		case '=': {
			printf("연산자 : =\n");
			printf("토큰 No : 9\n\n");
			break;
		}
		}
	}

	return 0;
}