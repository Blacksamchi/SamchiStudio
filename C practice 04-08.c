/* 읽어 들인 정수를 0까지 카운트다운 음수를 읽었을시 아무것도 출력하지 않음 */
#include<studio.h>

int main(void)
{
  int no;
   printf("정수를 입력해주세요");
   scanf("%d", &no);

   if (no >= 0) /* 양수,음수 판단 */
   {
     while (no>=0)
     {
       printf("%d",no);
       no--; /* no값을 1씩 감소(디크리먼트) */
     }
     putchar('n'); /* 개행 */
   }
   return(0);
}
