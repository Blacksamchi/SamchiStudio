/*03-03 문제를 if 문이 아닌 switch문으로 변형*/
#include<studio.h>
int main(void)
{
  int na;

  printf("정수를 입력 :"); scanf("%d",&na);

  switch (na % 2) {/*값을 2로 나누어 나머지가 0인지 1인지로 case 분기*/
    case 0 : puts("이 수는 짝수입니다."); break;
    case 1 : puts("이 수는 홀수입니다."); break;
  }
  return 0;
}
/*어느 한 식을 평가한 것에 대해 switch 문을 사용하면 간단하게 구현가능*/
