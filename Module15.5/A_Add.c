#include<stdio.h>
void sum(int a, int b)
{
    int summation = a + b;
    printf("%d",summation);
}
int main ()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    return 0;
}