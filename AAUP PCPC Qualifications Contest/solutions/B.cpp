// B - Worms

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
    
        int n;
        cin >> n;
    
        vi v(n);
    
        for(auto &e: v) cin >> e;
    
        for(int i = 1; i < n; ++i) {
            v[i] += v[i - 1];
        }

        int m;
        cin >> m;
        for(int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            cout << lower_bound(all(v), x) - v.begin() + 1 << "\n";
        }
        
    return 0;
}
