#include <stdio.h>

int main()
{
    int price = 0; //变量price类型int，初始值为0

    printf("请输入金额");
    scanf("%d",&price);

    int change = 100 - price;
    printf("找您%d元\n", change);

    return 0;
}