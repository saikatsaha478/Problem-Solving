#include<iostream>
using namespace std;
int main()
{
    int m,a,b,count=0;
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        if(b-a>=2)
        {
            count++;
        }
    }
    cout<<count;
}
