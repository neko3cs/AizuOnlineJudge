#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int calcMaxProfit(const vector<int> &);

int main(int argc, char *argv[])
{
    int n, tmp, max;
    vector<int> vec;
    cin >> n;
    while (n-- > 0)
    {
        cin >> tmp;
        vec.push_back(tmp);
    }
    cout << calcMaxProfit(vec) << endl;
    return 0;
}

int calcMaxProfit(const vector<int> &vec)
{
    int tmp, max = (vec[1] - vec[0]);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 1; j < i; j++)
        {
            tmp = (vec[j] - vec[i]);
            max = max > tmp ? max : tmp;
        }
    }
    return max;
}