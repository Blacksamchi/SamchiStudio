/* 읽어들인 두개의 정수값을 비교하여 대소관계를 표시 */
#include <stdiio.h>

int main(void)
{
  int na, nb;

  printf("비교할 정수 A B중 A를 입력하십시오 :\n"); scanf("%d",&na);
  printf("비교할 정수 A B중 B를 입력하십시오 :\n"); scanf("%d",&nb);
  if (na == nb)
      putf("두 수가 같습니다만..? 비교할 생각은 있는거냐?");
  else if (na < nb)
      putf("%d가 %d보다 작습니다."&na,&nb);
  else
      putf("%d가 %d보다 큽니다.",&na,&nb);
return(0);
}
