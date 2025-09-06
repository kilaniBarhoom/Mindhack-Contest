// E - Taxes

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

bool is_prime(long long n){
    for(long long i=2; i * i <= n; i++){
        if(n % i == 0)
            return 0;
    }
    return true;
} 

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n; 

    if(is_prime(n))
        cout << "1\n";
    else if(n % 2 == 0)
        cout << "2\n";
    else {
        if(is_prime(n - 2))
            cout << "2\n";
        else 
            cout << "3\n";
    }
       
    return 0;
}