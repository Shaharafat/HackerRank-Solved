#include<bits/stdc++.h>
int main()
{
    char str[100];
    int i,j,k,len,m,count;
    long long int integer,intgr;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        count = 0;
        scanf("%s",&str);
        integer = atoi(str);
        len = strlen(str);
        for(k=0;k<len;k++)
        {
            if(str[k] == 48)
                continue;
            else if(str[k] == 49)
                intgr=integer%1;
            else if(str[k] == 50)
                intgr=integer%2;
            else if(str[k] == 51)
                intgr=integer%3;
            else if(str[k] == 52)
                intgr=integer%4;
            else if(str[k] == 53)
                intgr=integer%5;
            else if(str[k] == 54)
                intgr=integer%6;
            else if(str[k] == 55)
                intgr=integer%7;
            else if(str[k] == 56)
                intgr=integer%8;
            else
                intgr=integer%9;
            if(intgr == 0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
