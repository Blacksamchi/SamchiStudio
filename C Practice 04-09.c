/* 이전 문제의 프로그램을 기초로 하여, 0이 아닌 1까지 카운트다운하는 프로그램을 작성하라.*/

#include<studio.h>
int main(void)
{
    int no;

    printf("양의 정수를 입력해주세요 :");
    scanf("%d",&no);
    if (no >= 0)
    {
        while (no > 0)
          printf("%d",no--);
        putchar('/n');
    }
    return(0);
}
