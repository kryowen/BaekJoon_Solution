/*
제출 번호: 33979297
아이디: adviate
문제: 18414
결과: 맞았습니다!!
메모리: 1112KB
시간: 0ms
언어: C99
코드 길이: 259B
제출한 시간: 2021.10.02 17:48:08
*/

/*
* 整数 X, L, R が与えられる. L 以上 R 以下の整数のうち，X との差の絶対値が最も小さいものを出力せよ．
	そのような整数はちょうど 1 つだけ存在することが証明できる．

* 入力は以下の形式で標準入力から与えられる．
	X L R

* L 以上 R 以下の整数のうち，X との差の絶対値が最も小さいものを出力せよ．
	1 ≦ X ≦ 100 000．
	1 ≦ L ≦ R ≦ 100 000．
*/

#include <stdio.h>

int main() {
	int X, L, R;
	scanf("%d %d %d", &X, &L, &R);

	for (int i = L; i <= R; i++) {
		if (X == i) {
			printf("%d \n",i);
			return 0;
		}
	}
	
	if (X <= L) {
		printf("%d \n", L);
	}
	else {
		printf("%d \n", R);
	}
	
	return 0;
}
