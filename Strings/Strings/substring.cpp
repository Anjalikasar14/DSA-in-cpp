#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i=0;i<s.length();i++)
    {
        for(int j=i;j<s.length();j++)
        {
            cout << s.substr(i,j-i+1) << endl;
        }
    }
}