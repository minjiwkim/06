#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int i;
    int res = 1;
    for (i=0; i<n; i++)
    {
        res=res*(i+1);
    }
    return res;
}

int combination (int n, int r)
{
    int div1, div2; //div1 - 분자, div2 - 분모
    
    div1 = factorial(n); //n!
    div2 = factorial(n-r) * factorial(r);
    
    // 분모, 분자 나누기 연산 
    return (div1/div2);
} 

int main(int argc, char *argr[])
{
    int n, r; 
    int result;
    
    //1. 입력값 받음 
      // 메시지 출력 
    printf("input n : ");
      // n 입력 
    scanf("%d", &n);
      // 메시지 출력
    printf("input r : ");
      // r 입력
    scanf("%d", &r);
    
    //2. 분모/분자 계산
    result = combination(n, r);
    
    //3. 최종 값 출력 
      // 결과 출력 
    printf("result is %i\n", result);

system("PAUSE");
}
