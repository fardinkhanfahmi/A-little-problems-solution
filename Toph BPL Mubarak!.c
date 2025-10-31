#include<stdio.h>
#include<string.h>
int main()
{
    int x,y;
    scanf("%d",&y);
    getchar();
    for(x=1;x<=y;x++)
    {
        int b=0,i,c=0,d;
    char a[106];
    scanf("%[^\n]s",&a);
    getchar();
    while(a[b]!='\0')
    {
        b=b+1;
    };
    a[b+1];
    for(i=0;i<=b;i++)
    {
        if(a[i]=='W'||a[i]=='D'||a[i]=='N')
        {
            a[i]='0';
        };
        if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='O')
        {a[i]='1';};
    }
    for(i=0;i<=b-1;i++)
    {
        c=c+a[i]-'0';
    }
       d=c%6;
       c=c/6;
       if(c==1){printf("%d OVER",c);if(d==1){printf(" %d BALL",d);};if(d>1){printf(" %d BALLS",d);};};
       if(c>1){printf("%d OVERS",c);if(d==1){printf(" %d BALL",d);};if(d>1){printf(" %d BALLS",d);};};
       if(c==0){if(d==1){printf("%d BALL",d);};if(d>1){printf("%d BALLS",d);};if(d==0){printf("%d BALL",d);};};
       printf("\n");
    }
    return 0;
}
