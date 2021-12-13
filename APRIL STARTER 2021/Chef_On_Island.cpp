#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
        int x,y,xr,yr,D;
        cin>>x>>y>>xr>>yr>>D;
        float f1 = x/xr;
        float f2 = y/yr;
        int res = min(f1,f2);
        if(res>=D){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
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