#include <stdio.h>
#include <vector>

// ���� �ð� 1��
int main(void)
{
	int n, k, i, j, max = 0, sum = 0;
	scanf("%d %d", &n, &k);
	// nũ�� ��ŭ vector ����
	std::vector<int> a(n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < k; i++) {
		sum += a[i];
	}

	// Dynamic�ϰ� �ڷ� �δ�!!
	for (i = k; i < n; i++) {
		sum = sum + (a[i] - a[i - k]);
		if (sum > max) max = sum;;
	}

	printf("%d\n", max);
	
	

	return 0;
}