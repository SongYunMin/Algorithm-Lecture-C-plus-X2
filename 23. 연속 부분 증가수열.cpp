//#include <stdio.h>
//#include <vector>
//
//int main(void)
//{
//	int n, i, cnt = 0, buf = 0;
//	scanf("%d", &n);
//	std::vector<int> v(n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &v[i]);
//	}
//
//	for (i = 0; i < n - 1; i++) {
//		if (v[i] <= v[i + 1]) {
//			buf++;
//			if (buf > cnt) {
//				cnt = buf;
//			}
//		}
//		else buf = 0;
//	}
//	printf("%d\n", cnt+1);
//
//
//	return 0;
//}