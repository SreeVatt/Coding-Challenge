#include<stdio.h>

int countpage(int n,int p)
{
    int fromfront=p/2;
    int fromback=(n/2)-fromfront;
    return((fromfront<fromback)?fromfront:fromback);
}

int main()
{
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
    printf("%d\n",countpage(n,p));
    return 0;
}