/* 읽어 들인 세 정수값의 최소값을 구하여 표시 */
#include <stdio.h>

int main(void)
{
  int na, nb, nc, min;

  puts("정수 A를 입력:"); scanf("%d",&na);
  puts("정수 B를 입력:"); scanf("%d",&nb);
  puts("정수 C를 입력:"); scanf("%d",&nc);

  min = na;
  if (min > nb) min = nb;
  if (min > nc) min = nc;

  printf("최소값은 %d입니다.",&min);
  return(0);
}
