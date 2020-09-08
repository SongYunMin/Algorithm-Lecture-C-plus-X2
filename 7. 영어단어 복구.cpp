#include <stdio.h>

int main(void)
{
	char a[101], b[101];
	int i, p = 0;			// p : 옮겨담을 변수

	gets_s(a);

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {			// 공백이 아니면
			if (a[i] >= 65 && a[i] <= 90) {		// 대문자
				b[p++] = a[i] + 32;			// 대문자에 32 를 더하면 소문자
			}
			else b[p++] = a[i];				// 소문자는 그대로 넣음
		}
	}
	b[p] = '\0';
	printf("%s\n", b);

	return 0;
}