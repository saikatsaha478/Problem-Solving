#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,count = 0;
    cin>> a;
    for(int i = 0; i<a; i++)
        {
            cin>>b>>c>>d;
            if (b+c+d>=2)
            {
                count++;
            }
        }
        cout<<count<<endl;

}
