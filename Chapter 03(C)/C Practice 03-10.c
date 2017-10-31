/* 읽어들인 두 정수의 차를 구하여 표시 */
#include<stdio.h>
int main(void)
{
  int na, nb;
  printf("정수 A를 입력해주세요. :\n"); scanf("%d",&na);
  puts("정수 B를 입력해주세요. :"); scanf("%d",&nb);

  printf("정수 A와 B의 차는 %d입니다.",(na>nb) ? na -nb : nb -na);
  return(0);
}
