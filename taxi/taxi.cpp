#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int B[a];
    int count=0;
    for(int i=0; i<a; i++)
    {
        cin>>B[i];
        if(B[i]=B[i+1])
        {
            count++;
        }
    }
    /*for(int j=0; j<a; j++)
    {
        for(int m=j+1; m<a; m++)
        {
            if(B[j]==B[m])
            {
                //count++;
            }
        }

    }*/
    cout << count;
}
