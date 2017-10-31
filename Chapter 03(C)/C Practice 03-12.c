/* 읽어 들인 세개의 정수값의 최고값을 표시 */
#include<studio.h>
int main(void)
{
  int na,nb,nc,min;
  puts("정수 A를 입력 :"); scanf("%d",&na);
  puts("정수 B를 입력 :"); scanf("%d",&nb);
  puts("정수 C를 입력 :"); scanf("%d",&nc);

  min = (na<nb) ? ((na<nc) ? na:nc) : ((nb<nc) ? nb : nc);

  printf("정수 A,B,C중 최소값은 %d입니다.",min);
  return(0);
}
