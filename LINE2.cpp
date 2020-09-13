//#include <iostream>
//#include <stdio.h>
//#include <vector>
//
//// 공의 번호를 나타낸 ball, 공을빼는 명령이 담긴 order
//std::vector<int> solution(std::vector<int> ball, std::vector<int> order)
//{
//	std::vector<int> waitQueue;
//	std::vector<int> answer;
//	int i, j, LorR = -1;
//	for (i = 0; i <= order.size()-1; i++) {
//		for (j = 0; j <= ball.size()-1; j++) {
//			if (order[i] == ball[j]) {		// 명령어와 대응되는 원소 탐색
//				if (j == ball.size()-1 || j == 0) {		// 큐의 처음과 마지막이 라면?
//					answer.push_back(ball[j]);
//					ball.erase(ball.begin() + j);
//					if (!waitQueue.empty()) {			// 대기큐가 비어있지 않다면
//						if (waitQueue[0] == ball.size() - 1 || waitQueue[0] == ball[0]) {		// 대기큐의 원소가 ball의 마지막이라면
//							
//							answer.push_back(waitQueue[0]);
//							//ball.erase(ball.begin() + waitQueue[0]);
//							waitQueue.pop_back();
//						}
//					}
//				}
//				else {									// 처음과 마지막이 아니라면?
//					if (ball.size() / 2 < ball[j]) {
//						waitQueue.push_back(ball[j]);
//					}
//					else {
//						waitQueue.insert(waitQueue.begin(), ball[i]);
//					}
//					break;
//				}
//				break;
//			}
//		}
//	}
//
//	for (i = 0; i < answer.size(); i++) {
//		std::cout << answer[i] << std::endl;
//	}
//	
//	return answer;
//}
//
//int main(void)
//{
//
//	std::vector<int> ball = { 1,2,3,4,5,6 };
//	std::vector<int> order = { 6,2,5,1,4,3 };
//	//std::vector<int> ball = { 11,2,9,13,24 };
//	//std::vector<int> order = { 9,2,13,24,11 };
//	std::vector<int> test = { 3,5,1 };
//
//	//std::cout << test.front() << std::endl;
//	solution(ball, order);
//
//
//	return 0;
//}