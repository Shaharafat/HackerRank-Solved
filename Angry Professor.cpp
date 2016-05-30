#include<bits/stdc++.h>
int main()
{
    int i,j,k,l,n,m,count;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        count = 0;
        scanf("%d %d",&n,&k);
        int arry[n];
        for(l=0;l<n;l++)
        {
            scanf("%d",&arry[l]);
        }
        for(l=0 ; l<n ; l++)
        {
            if(arry[l] <= 0)
                count++;
        }
        if(count >= k)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
