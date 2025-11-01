#include<stdio.h>
int main()
{
    int a,b=1,i,j;
    scanf("%d",&a);
    if(a==0){printf("%d\n",a); return 0;};
    if(a==1){printf("%d\n",a); return 0;};
    for(i=2;i<=a-1;i++)
    {
        for(j=2;j<=a/2;j++)
        {
            if(i%j==0 && a%j==0){break;};
            if(j==a/2){b=b+1;};
        }
    }
    printf("%d\n",b);
    return 0;
}
