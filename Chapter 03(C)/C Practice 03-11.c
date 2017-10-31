/* 읽어들인 두개의 정수의 차를 구하여 표시(if문) */
#include<studio.h>
int main(void)
{
  int na,nb,result;
  puts("정수 A를 입력 :"); scanf("%d",&na);
  puts("정수 B를 입력 :"); scanf("%d",&nb);
  if(na>nb)
    result = na-nb;
  else
    result = nb-na;
  printf("정수 A와 B의 차는 %d 입니다.",result);
  return(0);
}
