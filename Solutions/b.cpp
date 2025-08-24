
#include <bits/stdc++.h>

#define go ios::sync_with_stdio(0);cin.tie(0)
#define srv(v) sort(v.begin(), v.end())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vi vector<int>
#define vll vector<ll>
#define vl vector<l>

typedef long l;
typedef long long  ll;
typedef long long int lli;
typedef unsigned long long ull;

constexpr auto PI = 3.14159265358979323846;

using namespace std;


bool isPrime(ll n) {
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll smallestDiv(ll n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

lli binaryToDecimal(string binary) {
    lli decimal = 0;
    int power = 0;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

bool binarySearch(vector<ll>& a, ll target) {
    ll left = 0, right = a.size() - 1;
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (a[mid] == target) {
            return true;
        } else if (a[mid] > target) {
            right = mid - 1;
        } else left = mid + 1;
    }
    return false;
}

int main() {
    go;
    int t; cin >> t;
    while(t--){
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
}