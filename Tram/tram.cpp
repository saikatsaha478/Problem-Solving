#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a,b;
    int crnt=0;
    int mincapacity=0;
    for(int i=0; i<n; i++)
    {
        cin >>a>>b;
        crnt= b+(crnt-a);
        if(crnt>mincapacity)
            mincapacity = crnt;
    }
    cout<< mincapacity;
}

