#include <stdio.h>
#include <iostream>
#include <vector>

int main(void)
{
	int n, i, j, cnt;
	scanf("%d", &n);
	std::vector<int> a(n+1);
	std::vector<int> result(n);

	for (i = 1; i < n; i++) {
		scanf("%d", &a[i]);
	}

	printf("1 ");
	for (i = 2; i <= n; i++) {
		cnt = 0;
		for (j = i-1; j >= 1; j--) {
			if (a[i] <= a[j]) {
				cnt++;
			}
		}
		// �迭�Ἥ ����� �ʿ� ����
		printf("%d ", cnt + 1);
	}

	return 0;
}