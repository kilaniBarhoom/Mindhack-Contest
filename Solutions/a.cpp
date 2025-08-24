#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vll;
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
    int n;
    cin >> n;

   
    vll v(n), a(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        a[i] = v[i];
    }


    sort(all(v));

    for(int i = 0; i < n; i++) {
        if(a[i] == v[n - 1]) {
            cout << a[i] - v[n - 2] << " ";
        } else {
            cout << a[i] - v[n - 1] << " ";
        }
    }

    cout << "\n";
}



 int main()
    {
    ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    int t=1;
    cin >> t;
    while(t--)
    solve();
    }
