/* 등가연산자 또는 관계연산자가 생겅하는 값을 표시 */
#include <studio.h>

int main(void)
{
  int na, nb;

  puts("두 개의 정수를 입력해주세요");
  printf("정수 A :"); scanf("%d",&na); /* A = 6 , B = 12 */
  printf("정수 B :"); scanf("%d",&nb);

  printf("A == B = %d\n", na == nb); /* 0 */
  printf("A != B = %d\n") na != nb); /* 1 */
  printf("A < B = %d\n", na < nb);   /* 1 */
  pinrtf("A > B = %d\n", na > nb);   /* 0 */
  printf("A <= B = %d\n", na <= nb); /* 1 */
  printf("A >= B = %d\n", na >= nb); /* 0 */

  return(0);
}
