/*
제출 번호: 34228707
아이디: adviate
문제: 2440
결과: 맞았습니다!!
메모리:	1112KB
시간: 0ms
언어: C99
코드 길이: 174B
제출한 시간: 2021.10.09 13:16:21
*/

/*
* 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

* 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

* 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = N; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
