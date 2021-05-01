#include<stdio.h>
int main()
{
    int n,k,i,c=0;
    scanf("%d %d" ,&n,&k);
    int p[n];
    for(i=0; i<n; i++){
    scanf("%d", &p[i]);
    }
    k = k-1;
    for(i=0; i<n; i++){
    if(p[i]>=p[k]&& p[k]==0)
    {
        c++;
    }
    }
    printf("%d\n",c);
}

