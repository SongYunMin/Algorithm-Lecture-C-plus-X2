//#include <iostream>
//#include <vector>
//
////int main(void)
////{
////	int i, min = 9999, max = 0, n;
////	int buf;
////	std::vector<int> arr(100);
////	
////	std::cin >> n;
////
////	for (int i = 0; i < n; i++) {
////		std::cin >> arr[i];
////		if (min > arr[i]) min = arr[i];
////		if (max < arr[i]) max = arr[i];
////	}
////
////	std::cout << max - min << std::endl;
////
////	return 0;
////}
//
//// ´ä¾È
//
//using namespace std;
//int main() {
//	//freopen("input.txt", "rt", stdin);
//	int n, i, a, max = -2147000000, min = 2147000000;
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		cin >> a;
//		if (a > max) max = a;
//		if (a < min) min = a;
//	}
//	cout << max - min;
//	return 0;
//}