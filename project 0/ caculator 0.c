#include <studio.h>
int main(void)
{
  double na, nb, nc;
  int cal, result, cont, add, sub, multi, divi;
    add=0, sub=1, multi=2, divi=3;
  printf("사칙연산도 못하는 당신을 위해 계산을 시작합니다 카큘카큘~\n
          자! 계산하고 싶은만큼 숫자를 넣어 보시지요!\n\n");


  printf("숫자 넣고 Enter! :\n") scanf("%lf"&na);
  printf("이걸 어찌 해드리오리까? (ex 0(+), 1(-), 3(x), 4(/) 중 1택)\n") scanf("%d",&cal);
    if (cal > 3){  /* 오류 방지 */
      do {
        puts("이상한 문자, 숫자 말고 0(+), 1(-), 3(x), 4(/) 중 1택 하세요!"); scanf("%d",&cal);
      } while(cal > 3)
    }
    else if (cal == 0){
      do { /* 정신이 아득해질 때까지 반복하는 문 */
        puts("다음 더할(+) 숫자 넣고 Enter! :"); scanf("%lf",&nb);
        nc = na + nb;
        na = nc; /* na에 계산값을 계속 모은다 */
        puts("더할 숫자가 더 있누? [yes...1 / no...0]"); scanf("%d",&cont);
      } while(cont == 0);

      puts("다음은 어찌 해드리오리까? (ex 0(+), 1(-), 3(x), 4(/) 중 1택)\n") scanf("%d",&cal);

      if(cal == 0){
        do {
          puts("다음 더할(+) 숫자 넣고 Enter 쳐 :") scanf("%lf",&nb);
          nc = na + nb;
          na = nc;
          puts("더할 숫자가 더 있누? [yes...1 / no...0]"); scanf("%d",&cont);
        } while(cont == 0);

      puts("다음은 어찌 해드리오리까? (ex 0(+), 1(-), 3(x), 4(/) 중 1택)") scanf("%d",&cal);
      else if(cal == 1);
        do {
          puts("")
        } while(cont == 0);

      }
      if(cal == )

      puts("최종 값은 %.1f이외다!",&aaaa);
    }
    else if (cal == 1){
      puts("이번엔 빼(-)려고? 숫자 넣고 Enter 쳐 :") scanf("%lf",&nb);
        sub = na - nb;
      puts("두 수를 뺀 값은 %.1f야",&sub);
    }
    else if (cal == 2){
      puts("오오 곱(x)한다 곱해 배가된다고! 숫자 넣고 Enter 치라구! :") scanf("%lf",&nb);
        multi = na * nb;
      puts(" 두 수를 곱한 값은 %.1f야",&multi);
    }
    else if (cal == 3){
      puts("모름지기 나눠야(/)덕이 높다 하였다 숫자 넣고 Enter를 치라 :") scanf("%lf",&nb);
        divi = na / nb;
      puts("두 수를 나눈 값은 %.1f요",&divi);
    }
    return(0);
}

int cal(void)
{

}
