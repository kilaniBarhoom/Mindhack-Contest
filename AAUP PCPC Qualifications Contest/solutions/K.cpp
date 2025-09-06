// K - Jamie and Alarm Snooze

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
    
    int h, m, x, y = 0;
    cin >> x >> h >> m;

	while(h % 10 != 7 && m % 10 != 7) {
        m -= x;
        
        if (m < 0) {
            h--;
            m += 60;
        }

        if (h < 0) {
            h += 24;
        }

        y++;
    }
	
    cout << y;
       
    return 0;
}