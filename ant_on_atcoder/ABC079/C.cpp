#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // int A, B, C, D;
    // A = s[0] - '0';
    // B = s[1] - '0';
    // C = s[2] - '0';
    // D = s[3] - '0';
    int sum = 0;
    int bit;
    for (bit = 0; bit < (1 << 3); bit++)
    {
        sum = s[0] - '0';
        for (int i = 0; i < 3; i++)
        {
            if (bit & (1 << i))
            {
                sum -= (s[i + 1] - '0');
            }else
            {
                sum += (s[i + 1] - '0');
            }
        }
        if (sum == 7)
            break;
    }

    cout << s[0];
    for (int i = 0; i < 3; i++)
    {
        if (bit & (1 << i))
        {
            cout << '-' << s[i+1];
        }else
        {
            cout << '+' << s[i+1];
        }
        
    }

    cout << "=7" << endl;
}