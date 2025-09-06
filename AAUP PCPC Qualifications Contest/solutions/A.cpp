// A - Mirror

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
        string s;
        cin>>s;
    
        int sum1=s[0] + s[1] + s[2];
        int sum2=s[3] + s[4] + s [5];
    
        if(sum1 == sum2) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}
