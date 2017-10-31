/*03-18문제를 switch문으로 바꾸어 써라*/
#include<studio.h>

int main(void)
{
  int month;

  printf("몇 월입니까?:\n"); scanf("%d",&month);

  switch (month) {
    case 3 :
    case 4 :
    case 5 : puts("봄 입니다."); break;
    case 6 :
    case 7 :
    case 8 : puts("여름 입니다."); break;
    case 9 :
    case 10 :
    case 11 : puts("가을 입니다.") break;
    case 12 :
    case 1 :
    case 2 : puts("겨울 입니다.") break;
    default : puts("그런 월은 없습니다."); break;
  }
  
  return(0);
}
