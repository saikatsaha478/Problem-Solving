#include <iostream>
using namespace std;
int main()
{
    string input;
    cout << "Please enter a string" << endl;
    cin>>input;
    int m;
    for (int i = 0; i<m; i++)
    {
        cin>>input;
        if (input.length()>10){
                cout<<input[0]<<input.length()-2<<input[input.length()-1]<<endl;
            }
        else{
            cout<<"string is :" << input<<endl;
        }
    }
    return 0;
}
