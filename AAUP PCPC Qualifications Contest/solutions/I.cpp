// I - Card Game

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
   while(t--) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int mx1 = 0, mx2 = 0;
        for(int i = 0; i < k1; i++) {
            int x;
            cin >> x;
            mx1 = max(mx1, x);
        }

        for(int i = 0; i < k2; i++) {
            int x;
            cin >> x;
            mx2 = max(mx2, x);
        }
        if(mx1 > mx2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
       
    return 0;
}