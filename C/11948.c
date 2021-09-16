// 정보
/*
제출 번호: 33430896
아이디: adviate
문제: 11948
결과: 맞았습니다!!
메모리: 1112KB
시간: 0ms
언어: C99
코드 길이: 401B 
제출한 시간: 2021.09.16 19:21:19
*/

// 문제 조건
/*
* JOI는 물리, 화학, 생물, 지구과학, 역사, 지리 총 6 과목의 시험을 봤다. 각 시험의 만점은 100점이다.

* JOI는 물리, 화학, 생물, 지구과학 4과목 중에서 3 과목을 선택하고 역사, 지리 2 과목 중에서 한 과목을 선택한다.
  시험 점수의 합이 가장 높게 나오도록 과목을 선택할 때, JOI가 선택한 과목의 시험 점수의 합을 구하시오.

*  입력은 6행으로 되어있으며, 각 행에 1개의 정수가 주어진다.
1행에는 JOI의 물리 시험의 점수 A가 주어진다.
2행에는 JOI의 화학 시험의 점수 B가 주어진다.
3행에는 JOI의 생물 시험의 점수 C가 주어진다.
4행에는 JOI의 지구과학의 시험 점수 D가 주어진다.
5행에는 JOI의 역사 시험의 점수 E가 주어진다.
6행에는 JOI의 지리 시험의 점수 F가 주어진다.

입력한 정수 A, B, C, D, E, F는 모두 0이상 100이하이다.

* JOI가 선택한 과목의 총 점수를 1행에 출력하시오.
*/

// 풀이 과정
/*
* 

*/

#include <stdio.h>

int main() {
	int ary1[4], ary2[2], min1 = 999, min2 = 999, sum = 0;

	for (int i = 0; i < 4; i++) {
		scanf("%d",&ary1[i]);

		if (min1 > ary1[i]) {
			min1 = ary1[i];
		}
		sum += ary1[i];
	}

	for (int i = 0; i < 2; i++) {
		scanf("%d", &ary2[i]);
		if (min2 > ary2[i]) {
			min2 = ary2[i];
		}
		sum += ary2[i];
	}

	sum -= (min1 + min2);



	printf("%d \n",sum);

	return 0;
}
