//#include <iostream>
//
//int main(void)
//{
//	char a[100];
//	int res = 0, cnt = 0, i;
//
//	// 문자열 읽음
//	scanf("%s", &a);
//
//	// 문자열의 끝까지 (null 문자) 반복
//	for (i = 0; a[i] != '\0'; i++) {
//		if (a[i] >= 48 && a[i] <= 57) { // 숫자만
//			// ex) 028 이라면
//			// res = 0 * 10 + (48(ASCII) - 48);
//			// res = 0 * 10 + (50 - 48);
//			// res = 2 * 10 + (56 - 48);
//			res = res * 10 + (a[i] - 48);
//		}
//	}
//
//	std::cout << res << std::endl;
//	for (i = 1; i <= res; i++) {
//		if (res % i == 0)cnt++;
//	}
//
//	std::cout << cnt << std::endl;
//
//
//	return 0;
//}