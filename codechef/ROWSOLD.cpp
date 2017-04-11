/**
https://www.codechef.com/APRIL17/problems/ROWSOLD
**/
///incomplete code --> wrong answer for this code...
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    string str;
    cin >> t;
    while(t--)
    {
        cin >> str;
        int i = 0, res = 0;
        while(str[i])
        {
            int j = i;/// first occurrence of 1 if any
            while(str[i] && str[i] == '1')
            {
                i++;
            }
            int k = i;
            while(str[i] && str[i] == '0')
            {
                i++;
            }
            int ones = k - j;
            int zeros = i - k;
            cout << "zeros = " << zeros << ", ones = " << ones << endl;
            if(ones > 0 && zeros > 0)
            {
                res += ones * ( 1 + zeros);
                int n = zeros + ones;
                for(int x = 0 ; x < n ; x++)
                {
                    if(x < zeros)
                        str[x+j] = '0';
                    else
                        str[x+j] = '1';
                }
            }
            cout << "j = " << j << ", k = " << k << ", i = " << i << endl;

            //i++;
            cout << res << endl;
            cout << str << endl;
        }
    }

    return 0;
}
