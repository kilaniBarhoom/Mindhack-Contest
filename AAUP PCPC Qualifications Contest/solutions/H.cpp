// H - Classroom Question

#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
#define all(v) v.begin(),v.end()
#define f1(i,n) for(int i=0;i<n;i++)
#define fin(ele,v) for(auto &ele:v)
#define fout(ele,v) for(auto ele:v)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define sz(X) (ll)((X).size())


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        map<long long, bool> mp;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            mp[x] = true;
        }

        for (int i = 0; i < m; i++) {
            long long x;
            cin >> x;
            if (mp[x]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
                mp[x] = true;
            }
        }
    }

    return 0;
}
