/* 읽어들인 월의 계졀을 출력 */
#include<studio.h>

int main(void)
{
  int month;

  printf("몇 월 입니까?:\n") scanf("%d",&month);

  if (month>=3 && month <=5)/*3이상 5이하 3<=month<=5와 같다...*/
    puts("봄 입니다.");
  else if (month>=6 && month<=8)
    puts("여름 입니다.");
  else if (month>=9 && month<=11)
    puts("가을 입니다.");
  else if (month>=12 && month<=2)
    puts("겨울 입니다.");
  else
    puts("그런 월은 없습니다.");
    
  return(0)
}
