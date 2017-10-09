#include<studio.h>
int main(void)
{
  int a, b;
  printf("두개의 정수를 입력해");
  printf("변수 1:\n"); scanf("%d",&a);
  printf("변수 2:\n"); scanf("%d",&b);
  printf("변수 1값은 변수 2값에 %d%%임",100*a/b); /*변수가 정수이기 때문에 소수점을 버림. 따라서 a/b를 나눠 소수점이 되면 0이 되기에 몇을 곱하든 값이 0이나옴*/
  return(0);
}
