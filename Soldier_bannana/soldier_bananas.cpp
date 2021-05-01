#include<iostream>
using namspace std;
int main()
{
    int k,n,w;
    cin >> k>>n>>w;
    int sum=0;
    for(int i=0; i<=w; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}
