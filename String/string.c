#include<stdio.h>
#include<string.h>
int main()
{
    char n[101],result;
    int i,k;
    scanf("%s",&n);
    k = strlen(n);
    for(i=0; i<k; i++)
    {
        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||
           n[i]=='y'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U'||n[i]=='Y')
           {
               1;
           }
           else
           {
               result = tolower(n[i]);
               printf(".%c", result);
           }
    }
    printf("\n");
}
