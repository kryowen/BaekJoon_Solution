"""
제출 번호: 33931762
아이디: adviate
문제: 16204
결과: 맞았습니다!!
메모리: 29200KB 
시간: 72ms
언어: Python 3
코드 길이: 75B
제출한 시간: 2021.10.01 12:10:17
"""

"""
* 앞 면에 O와 X가 적혀있는 카드 N개가 있다.
    N개의 카드 중 M개의 카드의 앞면에는 O가 한 개 적혀있고, 나머지 N-M개의 카드의 앞면에는 X가 한 개 적혀있다.
    카드의 뒷 면은 두 종류의 카드 모두 같은 모양이라 구분할 수 없다.
    카드의 뒷 면에 O나 X를 하나씩 적으려고 한다.
    이 때, O는 K개, X는 N-K개 적으려고 한다.
    앞 면과 뒷 면에 같은 모양이 적혀있는 카드의 최대 개수를 구하는 프로그램을 작성하시오.
    
* 첫째 줄에 N, M, K가 주어진다. (1 ≤ N ≤ 1,000,000, 0 ≤ M, K ≤ N)


* 첫째 줄에 앞 면과 뒷 면에 같은 모양이 적혀있는 카드의 최대 개수를 출력한다.
"""
N, M, K = map(int, input().split())

# N = 7, M = 5, K = 2
# M : N-M = K : N-K
print(min((K+(N - M)), (M + (N - K))))
