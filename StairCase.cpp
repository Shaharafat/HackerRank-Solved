#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        k=i;
        while(k)
        {
            if(k>j)
                printf(" ");
            else
                printf("#");
            k--;
        }
        printf("\n");
    }
    return 0;
}
