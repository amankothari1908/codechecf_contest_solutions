#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    string s;
    cin>>s;
    int l = s.length();
    int n = 0 , p =  0 ;
    int res = 0 ;
    for(int i = 0 ; i<l ; i++){
        if(i == l-1 && s[i] == 'N'){
            s[i] = 'P';
            res += 1;
        }
        if(i-1>=0 && s[i-1] == 'N' && s[i] == 'N'){
            s[i] = 'P';
            res += 1 ;
        }
    }    

    int reqn = (l/3);
    for(auto i : s){
        if(i == 'N'){
            n++;
        }
    }
    int flips = abs(reqn - n);

    res += flips;

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