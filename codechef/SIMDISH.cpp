/** https://www.codechef.com/APRIL17/problems/SIMDISH **/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
#define N 4


int main()
{
    int t;
    string ingredient;
    vector <string> first_ingredient;

    cin >> t;
    while(t--)
    {
        for(int i = 0 ; i < N ; i++)
        {
            cin >> ingredient;
            first_ingredient.push_back(ingredient);
        }
        int similar_count = 0;
        for(int i = 0 ; i < N ; i++)
        {
            cin >> ingredient;
            vector<string>::iterator it = find(first_ingredient.begin(), first_ingredient.end(), ingredient);
            if(it != first_ingredient.end())
                similar_count++;
        }
        if(similar_count >= N/2)
        {
            cout << "similar" << endl;
        }
        else
        {
            cout << "dissimilar" << endl;
        }
        /**for(vector<string>:: iterator it = first_ingredient.begin(); it != first_ingredient.end() ; it++ )
            cout << *it << " ";
        cout << endl;*/
	first_ingredient.clear();
    }
    return 0;
}
