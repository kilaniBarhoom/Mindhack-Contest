// G - Lines Party

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
    
    string s;
    cin >>  s;
 
    stack<char> st;

    for(int i = 0; i < s.length();  i++){
        if(st.empty())
            st.push(s[i]);

        else {
            if(s[i] == st.top())
                 st.pop();
        }

    }
    
    cout << (st.empty() ? "YES" :  "NO");
       
    return 0;
}