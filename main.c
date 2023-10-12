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
    int div1, div2; //div1 - ����, div2 - �и�
    
    div1 = factorial(n); //n!
    div2 = factorial(n-r) * factorial(r);
    
    // �и�, ���� ������ ���� 
    return (div1/div2);
} 

int main(int argc, char *argr[])
{
    int n, r; 
    int result;
    
    //1. �Է°� ���� 
      // �޽��� ��� 
    printf("input n : ");
      // n �Է� 
    scanf("%d", &n);
      // �޽��� ���
    printf("input r : ");
      // r �Է�
    scanf("%d", &r);
    
    //2. �и�/���� ���
    result = combination(n, r);
    
    //3. ���� �� ��� 
      // ��� ��� 
    printf("result is %i\n", result);

system("PAUSE");
}
