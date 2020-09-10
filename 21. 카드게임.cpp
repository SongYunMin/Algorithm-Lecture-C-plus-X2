#include <stdio.h>

int main(void)
{
	int status;
	int aScore = 0, bScore = 0, i;
	int aArr[10], bArr[10];

	for (i = 0; i < 10; i++) {
		scanf("%d", &aArr[i]);
	}
	for (i = 0; i < 10; i++) {
		scanf("%d", &bArr[i]);
	}

	for (i = 0; i < 10; i++) {
		if (aArr[i] > bArr[i]) {
			aScore += 3;
			status = 1;
		}
		else if (aArr[i] < bArr[i]) {
			bScore += 3;
			status = 2;
		}
		else {
			aScore++;
			bScore++;
		}
	}

	if (status == 1) {
		printf("%d %d\n", aScore, bScore);
		printf("A\n");
	}
	else if(status == 2){
		printf("%d %d\n", aScore, bScore);
		printf("B\n");
	}
	else {
		printf("%d %d\n", aScore, bScore);
		printf("D\n");
	}
	
	


	return 0;
}