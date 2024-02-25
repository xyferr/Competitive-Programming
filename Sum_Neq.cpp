#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

void prv(vector<ll> &vec);

void checkIndices(const vector<int> &arr)
{
    int n = arr.size();
    unordered_set<int> sums;

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int currentSum = arr[i] + arr[j];
            if (sums.find(currentSum) != sums.end())
            {
                cout << "NO" << endl;
                return;
            }
        }
        // Add the sums of pairs involving the current element to the set
        for (int k = 0; k < i; ++k)
        {
            sums.insert(arr[i] + arr[k]);
        }
    }
    cout << "YES" << endl;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    checkIndices(v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

void prv(vector<ll> &vec)
{
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
}
