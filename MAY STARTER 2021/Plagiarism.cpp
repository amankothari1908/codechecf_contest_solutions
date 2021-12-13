#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n , m , k ;
    cin>>n>>m>>k;
    int A[k];
    for(int i = 0 ; i< k ;i++){
        cin>>A[i];
    }
    unordered_map<int,int> mp ;
    for(int i = 0 ; i < k ; i++){
        mp[A[i]]++;
    }
    vector<int> V ;
    int count = 0 ;
    for(auto x : mp ){
        if(x.second > 1  && x.first <=n ){
            count++;
            V.push_back(x.first);
        }
    }
    sort(V.begin(),V.end());
    cout<<count<<" ";
    for(auto y : V){
        cout<<y<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1 ;
    // cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}