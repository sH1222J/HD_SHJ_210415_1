/*
https://devkoboso.com/entry/Flow-control-Conditional-Statements
1. 사용자로부터 숫자를 입력받아 입력받은수가 짝수면 짝수를 출력, 
홀수면 홀수를 출력하는 프로그램만들기
*/
#include<stdio.h>
void main() {
	int a;
	printf("1보다 큰수를 입력해보세요.\n");
	scanf_s("%d", &a);
	if (a % 2 == 0) // 조건만족시 짝수
	{
		printf("짝수.\n"); // 2로나눈 나머지가 0일 경우 짝
	}
	else // 조건불만족시 홀수
	{
		printf("홀수.\n"); // 2로나눈 나머지가 1일 경우 홀
	}
	fgetc(stdin);
}