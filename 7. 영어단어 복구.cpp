#include <stdio.h>

int main(void)
{
	char a[101], b[101];
	int i, p = 0;			// p : �Űܴ��� ����

	gets_s(a);

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {			// ������ �ƴϸ�
			if (a[i] >= 65 && a[i] <= 90) {		// �빮��
				b[p++] = a[i] + 32;			// �빮�ڿ� 32 �� ���ϸ� �ҹ���
			}
			else b[p++] = a[i];				// �ҹ��ڴ� �״�� ����
		}
	}
	b[p] = '\0';
	printf("%s\n", b);

	return 0;
}