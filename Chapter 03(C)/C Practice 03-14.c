/* 세개의 정수를 읽어 들여 이들이 전부 같다면 세개 모두 같다고 둘이면 둘이라고 말하는
   프로그램을 만들라 */
#include<studio.h>
int main(void)
{
  int na,nb,nc;
  puts("세 개의 정수를 입력해주세요");
  printf("정수 A :\n"); scanf("%d",&na);
  printf("정수 B :\n"); scanf("%d",&nb);
  printf("정수 C :\n"); scanf("%d",&nc);

  if (na==nb && nb==nc) {/*논리 and 연산자 : a와 b가 모두 0이 아니면 1*/
    puts("세 개의 값이 같습니다.");
  } else if(na==nb || nb==nc || nc==na) {/*논리 OR 연산자 : a와 b중 한쪽만이라도 0이 아니면 1, 아니면 0*/
    puts("두 개의 값이 같습니다.");
  } else
    puts("세 개의 값이 모두 다릅니다.");
  return(0);
}
