#include<stdio.h>
int main()
{
    int x,k,i,j,c=0;
    scanf("%d %d", &x,&k);
    int n[x];
    for (i=0; i<x; i++)
        scanf("%d", &n[i]);
    int sc = k-1;
    for(int j=0; j<x; j++){
        if(n[j]>= n[sc] &&(n[sc]!=0 || n[j]!=0)){
            c++;
        }
        else if(n[j]<n[sc])
            break;
    }
    printf("%d",c);

}
