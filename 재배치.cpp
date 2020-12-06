//#include <iostream>
//
//void insertionSort(int* list, int n)
//{
//	int i, j, key;
//	for (i = 1; i < n; i++) {
//		key = list[i];
//		for (j = i - 1; j >= 0 && list[j] > key; j--) {
//			list[j + 1] = list[j];
//		}
//		list[j + 1] = key;
//	}
//
//}
//
//int main(void)
//{
//	int list[6] = { 3,5,8,1,2,7 };
//
//	std::cout << "정렬 되기 전 : " << std::endl;
//	for (int i = 0; i < 6; i++) {
//		std::cout << list[i];
//	}
//	std::cout << std::endl;
//
//	insertionSort(list, 6);
//
//	std::cout << "정렬 된 이후 : " << std::endl;
//	for (int i = 0; i < 6; i++) {
//		std::cout << list[i];
//	}
//	std::cout << std::endl;
//
//	return 0;
//}