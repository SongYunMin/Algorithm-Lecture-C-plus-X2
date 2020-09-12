//#include <stdio.h>
//#include <vector>
//#include <math.h>
//int main(void)
//{
//	int n, i, now, pre, pos;
//	scanf("%d", &n);
//	std::vector<int> ch(n);
//
//	scanf("%d", &pre);
//	for (i = 1; i < n; i++) {
//		scanf("%d", &now);
//		pos = abs(pre - now);
//		if (pos > 0 && pos < n && ch[pos] == 0) ch[pos] = 1;
//		else {
//			printf("NO\n");
//			return 0;
//		}
//		pre = now;
//	}
//	printf("YES\n");
//	
//	return 0;
//}