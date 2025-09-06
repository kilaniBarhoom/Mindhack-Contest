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
   string s;
   cin >> s;

   int a[2] = {0};

   for(auto c: s) {
    if(c == 'A') a[0]++;
    else a[1]++;
   }

   if(a[1] > a[0]) cout << "B\n";
   else cout << "A\n";
}


 int main() {
    ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    int t=1;
    cin >> t;
    while(t--)
       solve();
}
