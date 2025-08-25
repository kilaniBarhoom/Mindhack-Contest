#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
#define sortv(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<int>())
#define LST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define all(v) v.begin(),v.end()
#define f1(i,n) for(int i=0;i<n;i++)
#define fin(ele,v) for(auto &ele:v)
#define fout(ele,v) for(auto ele:v)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define sz(X) (ll)((X).size())

ll mod = 1000000007;


void solve() {
    int n; cin >> n;

        vi v(n);
        for(auto &e : v) cin >> e;

        for (int i = 1; i < n; ++i) {
            v[i] = v[i] + v[i - 1];
        }

//        for(auto e: v) cout << e << " ";


        int q; cin >> q;
        while(q--){
            int l,u; cin >> l >> u;
            l--;
            int ans = l + 1, r = n - 1;
            int limit = u * (u + 1) / 2;
            int diff = 0;

            if(l) diff = v[l - 1];
            while(l <= r){
                int mid = l + (r - l) / 2;

                int midv = v[mid] - diff;

                if(midv > u) r = mid - 1;

                else{
                    l = mid  + 1;
                    ans = l;
                }
            }
            if(ans < n){
                int precur = u - (v[ans - 1] - diff), curr = (v[ans] - diff) - (u + 1);
                int sum = limit - precur * (precur + 1) / 2;
                curr = limit - curr * (curr + 1) / 2;
                if(sum < curr) {
                    ans++;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
}



 int main() {
    ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    int t=1;
    cin >> t;
    while(t--)
        solve();
}
