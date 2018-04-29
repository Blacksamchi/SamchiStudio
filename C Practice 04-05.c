/*두 정수값 사이의 모든 정수를 더한 값을 표시하는 프로그램 */
#include<studio.h>

int main(void)
{
  int na, nb, num, upper, lower;
  int sum = 0;
  printf("정수 1를 입력해주세요 : \n"); scanf("%d",&na);
  printf("정수 2를 입력해주세요 : \n"); scanf("%d",&nb);
  if (na>nb) {
    upper=na;
    lower=nb;
  } else (na<nb) {
    upper=nb;
    lower=na;
  }

  num = lower;

  do {
    sum = sum + num;
    num = num + 1;
  } while (num <= upper)

  printf("읽은 정수값 %d와 %d의 사이 정수를 더한 값은 %d입니다.",lower,upper,sum);

  return(0);
}
