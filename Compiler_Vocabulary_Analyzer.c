#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char arr[100];
	int i = 0;

	printf("���� �Է� : ");
	fgets(arr, 100, stdin);

	printf("���� ��� : %s\n", arr);

	for (i = 0; i < arr[i] != '\0'; i++) {
		if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) {
			printf("�ĺ��� : %c", arr[i]);
			while (1) {
				i++;
				if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
					printf("%c", arr[i]);
				else
					break;
			}
			printf("\n");
			printf("��ū No : 2\n\n");
		}

		// ����� �����ϴ� �ҽ��� ��ū ���� �޾Ƶ鿩 0~9������ ������ ���� �˻縦 ����
		if (arr[i] >= '0' && arr[i] <= '9') {
			printf("�ĺ��� : %c", arr[i]);
			while (1) {
				i++;
				if (arr[i] < '0' || arr[i] >'9')
					break;
				printf("%c", arr[i]);
			}
			printf("\n");
			printf("��ū No : 4\n\n");
		}

		// �����ڿ� ���� �ڵ�
		switch (arr[i]) {
		case '+': {
			printf("������ : +\n");
			printf("��ū No : 6\n\n");
			break;
		}
		case '-': {
			printf("������ : -\n");
			printf("��ū No : 7\n\n");
			break;
		}
		case '*': {
			printf("������ : *\n");
			printf("��ū No : 8\n\n");
			break;
		}
		case '=': {
			printf("������ : =\n");
			printf("��ū No : 9\n\n");
			break;
		}
		}
	}

	return 0;
}