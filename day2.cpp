#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    string line;
    getline(cin, line);

    stringstream ss(line);
    int x;
    while (ss >> x)
    {
        arr.push_back(x);
    }
    if (arr.empty())
    {
        cout << "NULL NULL";
    }
    else
    {
        int max = INT32_MIN;
        int min = INT32_MAX;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] <= min)
            {
                min = arr[i];
            }
            if (arr[i] >= max)
            {
                max = arr[i];
            }
        }
        cout << max << " " << min;
    }
    return 0;
}