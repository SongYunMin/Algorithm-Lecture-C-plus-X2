//#include <stdio.h>
//
//int main(void)
//{
//	// 자릿수 : c 자릿수의 갯수 : d
//	int n, sum = 0, c = 1, d = 9, res = 0;
//	scanf("%d", &n);
//	// 0 * 9 는 통과니까 한자릿수는 무조건 통과
//	while (sum + d < n) {
//		res = res + (c * d);
//		sum = sum + d;			// sum은 처음에 9가 됨
//		c++;					// 두자릿수가 됨
//		d = d * 10;				// 두자릿수의 갯수
//	}
//
//	res = res + ((n - sum) * c);
//	printf("%d", res);
//
//
//	return 0;
//}