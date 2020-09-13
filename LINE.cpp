//#include <stdio.h>
//#include <vector>
//#include <iostream>
//
//int solution(std::vector<std::vector<int>> boxes)
//{
//	int answer = 0, i, j;
//	std::vector<int> buf((int)boxes.size());
//
//	for (i = 0; i < (int)boxes.size(); i++) {
//		for (j = 0; j < (int)boxes[i].size(); j++) {
//			if(boxes[i][j] <= boxes.size())
//			buf[boxes[i][j] - 1]++;
//		}
//	}
//
//	for (i = 0; i < buf.size(); i++) {
//		if (buf[i] != 2) {
//			answer++;
//		}
//	}
//
//	for (i = 0; i < buf.size(); i++) {
//		std::cout << buf[i];
//	}
//
//	return answer;
//}
//
//
//int main(void)
//{
//	std::vector<std::vector<int>> boxes =
//	{
//		{1,2},
//		{2,1},
//		{3,3},
//		{4,5},
//		{5,6},
//		{7,8}
//	};
//
//
//
//	//for (int i = 0; i < (int)boxes.size(); i++) {
//	//	for (int j = 0; j < (int)boxes[i].size(); j++) {
//	//		std::cout << boxes[i][j] << " ";
//	//	}
//	//	std::cout << std::endl;
//	//}
//
//
//	solution(boxes);
//
//
//	return 0;
//}