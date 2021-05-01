#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int sum = 0, sum1 = 0, sum2 = 0;
    int A[100][100];
    for (int i = 0; i<a; i++){
        for (int j = 0; j <3; j++ ){
            cin>> A[i][j];
        }
        sum = sum + A [i][0];
        sum1 = sum1 + A[i][1];
        sum2 = sum2 + A[i][2];
    }
    if (sum == 0 && sum1 == 0 && sum2 == 0)
        cout << "YES";
    else
        cout << "NO";
}
