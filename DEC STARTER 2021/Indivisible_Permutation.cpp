#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n ; 
    cin>>n;
    int a[n+1];
    a[1] = 2 ;
    for(int i = 2; i<n ; i++){
        a[i] = i+1;
    }
    a[n] = 1;
    for(int i = 1 ;i<n+1 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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