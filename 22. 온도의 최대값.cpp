#include <stdio.h>
#include <vector>

// 제한 시간 1초
int main(void)
{
	int n, k, i, j, max = 0, sum = 0;
	scanf("%d %d", &n, &k);
	// n크기 만큼 vector 생성
	std::vector<int> a(n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < k; i++) {
		sum += a[i];
	}

	// Dynamic하게 뒤로 민다!!
	for (i = k; i < n; i++) {
		sum = sum + (a[i] - a[i - k]);
		if (sum > max) max = sum;;
	}

	printf("%d\n", max);
	
	

	return 0;
}