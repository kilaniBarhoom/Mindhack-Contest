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
   int a, b, c, x, y;
   cin >> a >> b >> c >> x >> y;

   if(x <= a and y <= b) {
    yes
   } else {
    int leftfroma = (x - a) < 0? 0: x - a;
    int leftfromb = (y - b) < 0? 0: y - b;
    int left = leftfroma + leftfromb;
    if(c >= left) {
        yes
    } else {
        no
    }
   }

}



 int main()
    {
    ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    int t=1;
    cin >> t;
    while(t--)
    solve();
    }