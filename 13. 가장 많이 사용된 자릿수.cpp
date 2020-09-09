//#include <stdio.h>
//
//int ch[10];
//int main(void)
//{
//	int i, digit, max = -247000000, res = 0;
//	char a[101];
//
//	scanf("%s", &a);
//
//	for (i = 0; a[i] != '\0'; i++) {
//		digit = a[i] - 48;				// 48을 빼주어야 진짜 숫자가 됨
//		ch[digit]++;					// 숫자를 카운트 함
//	}
//
//	// ch[i]의 값이 같은데 큰값이 출력되게 하려면 > 가 아니라 등호를 >= 로 넣어줌
//	for (i = 0; i <= 9; i++) {
//		if (ch[i] >= max) {
//			max = ch[i];
//			res = i;					// 실제 값인 'i' 를 넣어줘야 함
//		}
//	}
//	
//	printf("%d\n", res);
//
//	return 0;
//}