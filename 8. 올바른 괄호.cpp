//#include <stdio.h>
//#include <iostream>
//
//// cnt를 이용하여 여는괄호는 ++ 닫는괄호는 -- 하여 하는 방법 (스택 사용 X)
//// 마지막에 cnt가 0이 되었다고 하더라도 가면서 닫는 괄호가 더 많아지면 안된다.
//// 닫는 괄호가 많아졌다면 복구 불가능하기 때문에 break.
//int main(void)
//{
//	char a[100];
//	int i, cnt = 0;
//	scanf("%s", &a);
//
//	for (i = 0; a[i] != '\0'; i++) {
//		if (a[i] == '(') cnt++;
//		else if (a[i] == ')') cnt--;
//		if (cnt < 0) break;
//	}
//
//	if (cnt == 0) printf("YES\n");
//	else printf("NO");
//
//	return 0;
//}