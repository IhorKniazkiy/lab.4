#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int x;
    while (1)
    {
    printf("Введіть значення a: ");
    scanf("%d", &a);
    printf("ВВедіть значення b ");
    scanf("%d", &b);
    if (a-b*b < 0 || a*b<0)
    {
    printf("Значення під коренем квадратним не може бути від'ємним\nВведіть інші значення.\n");
    } 
    else 
    {
    x=sqrt(a-b*b)+sqrt(a*b);
    break;
    }
    }
    printf("Значення х = %d\n", x);
    return 0;
}