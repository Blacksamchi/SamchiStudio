/*정수를 읽어들여 그 값에 대한 평가를 표시*/
#include<studio.h>

int main(void)
{
  int na;
  printf("당신의 시험 점수를 입력하시게\n"); scanf("%d",&na);
  if (na>=0 && na<60)
    printf("꽈락입니다. F입니다. 망했습니다.");
    else if (na>=60 && na<70)
      printf("이걸 점수라고 가져오는건가?");
    else if (na>=70 && na<80)
      puts("흠...");
    else if (na>=80 && na<90)
      puts("누구나 이정도는 하는거 아님?");
    else if (na>=90 && na<=100)
      puts("조금은 했나보네 칭찬해줄께.");
    else
      puts("시험이 똥망했어도 말은 똑바로 해야지 ㅇㅇ;");

  return(0);
}
