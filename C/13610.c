/*
제출 번호: 33891192
아이디: adviate
문제: 13610
결과: 맞았습니다!!
메모리: 1112KB
시간: 0ms
언어: C99
코드 길이: 225B
제출한 시간: 2021.09.30 11:40:37
*/

/*
*  이 문제에서 가장 빠른 운전자와 가장 느린 운전자가 랩을 완료하는 데 걸리는 시간을 감안할 때
	마지막으로 배치된 랩이 어느 랩에서 뒤처지게 될 것인지, 즉 선두가 추월할 것인지 결정해야 합니다.
	처음에는 1번 랩(레이스의 첫 번째 랩)이 시작될 때 서킷의 출발선에 나란히 있다는 점을 고려해야 합니다. 그리고 새로운 랩은 항상 리더가 출발선을 넘은 후에 시작됩니다.

* 단일 입력 라인에는 두 개의 정수 X 및 Y(1 ≤ X < Y ≤ 10000)가 포함되며, 
	랩을 완료하는 데 각각 가장 빠른 운전자와 가장 느린 운전자가 걸리는 시간(초)입니다. 

* 프로그램은 단일 정수를 포함하는 단일 행을 생성해야 합니다. 가장 느린 운전자가 지연되는 랩입니다. 
*/

#include <stdio.h>

int main() {
	int first, last, cnt = 1;
	scanf("%d %d", &first, &last);

	while (1) {
		if ((last * cnt) - (first * cnt) >= first) {
			cnt++;
			break;
		}
		cnt++;
	}

	printf("%d \n",cnt);

	return 0;
}
