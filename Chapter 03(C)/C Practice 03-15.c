/*정수 두개를 읽어 이들의 차가 10 이하면 이하다 이상이면 이상이다라고
  표현하라 단 AND 연산자 활용*/
#include<studio.h>
int main(void)
{
  int na,nb,result;

  puts("정수 두개를 입력하시오");
  printf("정수 A:\n"); scanf("%d",&na);
  printf("정수 B:\n"); scanf("%d",&nb);

  result = na-nb;

  if (result > 10 || result < -10) {/*논리 연산자 AND 사용*/
    printf("두 정수의 차가 10보다 큽니다.\n");
  } else
    printf("두 정수의 차가 10보다 작습니다.\n");
  return(0);
}
