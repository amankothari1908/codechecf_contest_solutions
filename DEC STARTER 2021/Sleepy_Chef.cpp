#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n , k ;
    cin>>n>>k;
    string s ;
    cin>>s;
    int res = 0 ;
    int count = 0 ;
    for(int i = 0 ; i<n ; i++){
        while(s[i] == '0'){
            count++;
            i++;
            // cout<<i<<" "<<count<<endl;
            // cout<<res<<endl;
        }
        if(count % k == 0 || count >= k ){
            res = res + (count/k);
        }
        count = 0 ;
    }
    cout<<res<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1 ;
    cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}