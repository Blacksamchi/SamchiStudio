/* 읽어 들인 두 개의 정수값의 대소관계를 표시 */
#include<studio.h>

int main(void)
{
  int na,nb;
  printf("정수 A를 입력 :\n"); scanf("%d",&na);
  printf("정수 B를 입력 :\n"); scanf("%d",&nb);

  if (na==nb) {
  printf("정수 A와 B가 %d으로 같습니다."na);
} else if (na>nb) {
  printf("큰쪽의 값은 %d입니다.\n",na);
  printf("작은 쪽의 값은 %d입니다.\n",nb);
} else {
  printf("큰쪽의 값은 %d입니다.\n",nb);
  printf("작은 쪽의 값은 %d입니다.\n"na);
}
  return(0);
}
