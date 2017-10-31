/* 두개의 정수값 A와 B를 읽어 B가 A의 약수인가를 조사 */
#include <studio.h>

int main(void)
{
  int na, nb;
  puts("두 개의 정수를 입력해주세요");
  printf("정수 A :"); scanf("%d", &na);
  printf("정수 B :"); scanf("%d", &nb);

  if (na % nb)
    puts("B는 A의 약수가 아닙니다.");
  else
    puts("B는 A의 약수입니다.");
  return(0);
}
