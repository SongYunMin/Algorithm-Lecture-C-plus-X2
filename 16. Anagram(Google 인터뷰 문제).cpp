//#include <stdio.h>
//#include <algorithm>
//
//// ���� : ASCII �̿��Ͽ� �ذ���. �빮�ڿ� �ҹ����� ASCII ��ȣ�� ���� �迭�� �����ϰ�
//// ī������, �� ���� �迭�� ��� �� �빮�� ���ڷ� �ٲٷ��� -65 �ҹ��ڴ� -70
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