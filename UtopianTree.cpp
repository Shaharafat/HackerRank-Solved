#include<bits/stdc++.h>
int main()
{
    int T,N,I,J,k,H;
    scanf("%d",&T);
    for(I=1;I<=T;I++)
    {
        J=1;H=1;
        scanf("%d",&N);
        if(N == 0)
            printf("1\n");
        else
        {
        while(J<=N)
            {
                if((J%2) != 0)
                    H=H*2;
                else
                    H=H+1;
                J++;
            }
            printf("%d\n",H);
        }
    }
    return 0;
}
