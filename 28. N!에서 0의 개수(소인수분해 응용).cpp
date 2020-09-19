#include <stdio.h>

/*
전략 :
10을 곱했을 시 뒤에 0이 계속 붙기 때문에 
소인수 분해를 해서 2와 5의 쌍의 개수를 판단해서(10의 약수)
쌍의 개수 만큼 0을 세면 된다.
*/
int main(void)
{
	int n, i, j, tmp, cnt1 = 0, cnt2 = 0;
	scanf("%d", &n);

	for (i = 2; i <= n ;  i++) {
		tmp = i;
		j = 2;
		while (1) {
			if (tmp % j == 0) {
				if (j == 2) cnt1++;			// 2와
				else if (j == 5) cnt2++;	// 5를 구함
				tmp = tmp / j;
			}
			else j++;
			if (tmp == 1)break;
		}
	}

	if (cnt1 < cnt2)printf("%d\n", cnt1);
	else printf("%d\n", cnt2);

	return 0;
}