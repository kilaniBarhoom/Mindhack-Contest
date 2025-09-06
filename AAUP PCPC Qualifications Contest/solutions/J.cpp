// J - Quests

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
        int n, k; 
        cin >> n >> k;
 
        vector<int> a(n), b(n);
 
        for(auto &e : a) cin >> e;
    
        for(auto &e : b) cin >> e;
    
        int tst = a[0], sum = 0, mx = b[0];
        k--;
        sum = tst + mx * k;
        for(int i = 1; i < n && k; i++){
            tst += a[i];
            k--;
            mx = max(mx,b[i]);
            sum = max(tst + mx * k, sum);
        }
        sum = max(tst + mx * k, sum);
    
        cout << sum << endl;
    }
       
    return 0;
}