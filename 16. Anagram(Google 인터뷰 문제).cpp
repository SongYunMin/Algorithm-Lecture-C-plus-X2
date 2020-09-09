//#include <stdio.h>
//#include <algorithm>
//
//// 전략 : ASCII 이용하여 해결함. 대문자와 소문자의 ASCII 번호를 각각 배열에 저장하고
//// 카운팅함, 두 개의 배열을 사용 함 대문자 숫자로 바꾸려면 -65 소문자는 -70
//int a[60], b[60];
//int main(void)
//{
//	char str[100];
//	int i;
//	scanf("%s", &str);
//	for (i = 0; str[i] != '\0'; i++) {
//		if (str[i] >= 65 && str[i] <= 90) {
//			a[str[i] - 64]++;
//		}
//		else a[str[i] - 70]++;
//	}
//
//	scanf("%s", &str);
//	for (i = 0; str[i] != '\0'; i++) {
//		if (str[i] >= 65 && str[i] <= 90) {
//			b[str[i] - 64]++;
//		}
//		else b[str[i] - 70]++;
//	}
//
//	for (i = 1; i <= 52; i++) {
//		if (a[i] != b[i]) {
//			printf("NO\n");
//			exit(0);
//		}
//	}
//	printf("YES");
//
//
//	return 0;
//}