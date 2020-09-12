//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <vector>
//
//int main(void)
//{
//	int n, i, j,a[200],b[200];
//
//	scanf("%d", &n);
//	//std::vector<int> a(n);
//	//std::vector<int> b(n);
//
//	for (i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//		b[i] = 1;
//	}
//
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++) {
//			if (a[j] > a[i]) b[i]++;
//		}
//	}
//
//	for (i = 1; i <= n; i++) {
//		std::cout << b[i] << " ";
//	}
//
//
//	return 0;
//}