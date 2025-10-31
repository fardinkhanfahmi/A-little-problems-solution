#include <stdio.h>
#include <string.h>
int main()
{
    char a[38];
    int b=0,i,j,f,g;
    scanf("%[^\n]s",a);
    while(a[b]!='\0')
    {
        b=b+1;
    };
    char c[b+2];
    for(i=0,j=0;i<=b-1;i++,j++)
    {
        c[j]=a[i];
        if(i==0 && ((int) a[i]>=97 && (int) a[i]<=97+25) )
        {
            if(a[i]=='i'){goto i;};
            if(a[i]=='s'){goto s;};
            if(a[i]=='o'){goto o;};
            int g= (int) a[i] -32;
            a[i]= (char) g;
            c[j]=a[i];
        };
        s:
        if(a[i]=='s')
        {
            c[j]='$';
        };
        i:
        if(a[i]=='i')
        {
            c[j]='!';
        };
        o:
        if(a[i]=='o')
        {
            c[j]='(';
            goto m;
            n:
        };
    }
    c[b]='.';
    c[b+1]='\0';
    printf("%s",c);
    return 0;
    m:
    b=b+1;
    c[b+2];
    j=j+1;
    c[j]=')';
    goto n;
    return 0;
}
