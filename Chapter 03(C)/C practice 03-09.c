/* 네 개의 정수의 최대값을 구하여 표시 */
#include<studio.h>

int main(void)
{
  int na,nb,nc,nd,max
  puts("정수 A를 입력하세요 :"); scanf("%d",&na);
  puts("정수 B를 입력하세요 :"); scanf("%d",&nb);
  puts("정수 C를 입력하세요 :"); scanf("%d",&nc);
  puts("정수 D를 입력하세요 :"); scanf("%d",&nd);

  max = na
  if (max < nb) max = nb;
  if (max < nc) max = nc;
  if (max < nd) max = nd;

  printf("최대값은 %d입니다.",max);

  return(0);
}
