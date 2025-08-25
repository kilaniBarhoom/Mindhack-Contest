#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;
#define sortv(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define pb push_back
#define all(v) v.begin(), v.end()
#define f1(i, n) for (int i = 0; i < n; i++)
#define fin(ele, v) for (auto &ele : v)
#define fout(ele, v) for (auto ele : v)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define sz(X) (ll)((X).size())

ll mod = 1000000007;

void solve()
{
    int c = 0;
    string res;
    int arr[] = {2, 3, 4, 5, 7, 9, 11, 13, 17, 19, 23, 24, 25, 29, 31, 37, 41, 43, 47, 49};
    for (int i = 0; i < 20; i++)
    {
        cout << arr[i] << endl;
        cin >> res;
        if (res == "yes")
            c++;
        if (c > 2)
            break;
    }
    if (c < 2)
        cout << "prime" << endl;

    else
    {
        cout << "composite" << endl;
    }
    c = 0;
    fflush(stdout);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}
