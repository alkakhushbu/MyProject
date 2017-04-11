/**
https://www.codechef.com/APRIL17/problems/DISHLIFE
**/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int t;
    int n, k;///no. of islands and no of ingredients to be searched
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector <bool> sr(k+1);
        int found = 0;///, ingredient;
        int p;///no of ingredients in i-th island
        bool flag = false;
        string print = "sad";
        while(n--)///no of islands
        {
            cin >> p;
            vector <int> ingr(p);
            for(int i = 0 ; i < p ; i++)
            {
                cin >> ingr[i];
                if(ingr[i] <= k && sr[ingr[i]] == false)
                {
                    sr[ingr[i]] = true;
                    found++;
                }
            }
            if(found == k && flag == false)
            {
                if(n == 0)
                {
                    print = "all";
                }
                else
                {
                    print = "some";
                }
                flag = true;
            }
        }
        cout << print << endl;
    }
    return 0;
}
