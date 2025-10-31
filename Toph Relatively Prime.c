#include<stdio.h>
int main()
{
    int a,b=1,c,i,j,e=1,f=1;
    scanf("%d",&a);
    if(a==0){printf("%d\n",a); return 0;};
    if(a==1){printf("%d\n",e); return 0;};
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            if(i>f || e==1){e=i;f=f*e;goto m;};
            if(i%e==0){continue;};
            continue;
        };
        if(a%i!=0)
            {continue;};
            m:
        for(j=2;j<=a-1;j++)
        {
            if(f>=6 && (j==f || j%f==0)){continue;};
            if(j%e==0){b=b+1;};
        }
    }
    c=a-b;
    printf("%d\n",c);
    return 0;
}
