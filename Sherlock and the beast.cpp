#include<bits/stdc++.h>
int main()
{
    long int i,j,k,l,m,n,o,p,q,r;
    scanf("%ld",&j);
    for(k=1;k<=j;k++)
    {
        scanf("%ld",&i);
        if((i<3)||(i==4)||(i==7))
            printf("-1\n");
        else
        {
            m=1;
            n=i/3;
            while(m)
            {
                o=n*3;
                if(((i-o) % 5) == 0)
                {
                    p=i-o;
                    m=0;
                }
                else
                    n--;
            }
            for(q=1;q<=o;q++)
                printf("5");
            for(r=1;r<=p;r++)
                printf("3");
            printf("\n");
        }
    }
    return 0;
}

