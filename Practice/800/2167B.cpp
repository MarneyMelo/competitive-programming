//#define LOCAL
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define endl '\n'

void solve() {
    int a;
    cin>>a;
    string t, s;
    cin>>t>>s;
    sort(t.begin(), t.end());
    sort(s.begin(), s.end());
    if(t == s){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }

}

int main() {

    fast_io;

    #ifdef LOCAL
        FILE* arquivo = fopen("input.txt", "r");
        
        if (arquivo) {
            fclose(arquivo);
            freopen("input.txt", "r", stdin);
        }

        // output em arquivo
        freopen("output.txt", "w", stdout);
    #endif


    int t;
    if(cin >> t){
        while(t--) {
            solve();
        }

        //solve();
    }
    return 0;
}