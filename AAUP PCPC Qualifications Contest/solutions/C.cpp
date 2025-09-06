// C - Are You Good At Math?

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

    while(t--){
        int n; cin >> n;
        int a[n][n];
 
        for(int i =0; i < n ; i++){
            for(int j = 0; j < n; j++){
                    int e; cin >> e;
                    a[i][j] = e;
            }
        }
 
        int suml = 0, sumr = 0;
        for(int i = 0, j = 0; i < n && j < n; i++, j++) suml += a[i][j];
 
        for(int j = n - 1, i = 0; j >= 0 && i < n; j--, i++) sumr += a[i][j];

        if(suml > sumr) cout << "Left" << endl;
        if(sumr == suml) cout << "Equal" << endl;
        if(sumr > suml) cout << "Right" << endl;
    }
       
    return 0;
}
