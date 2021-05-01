#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s,b;
    cin>>s>>b;
    string c;
    reverse(s.begin(),s.end());
    if(s==b)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
