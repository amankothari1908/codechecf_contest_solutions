#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool mycmp(const pair<ll,ll> &a, const pair<ll,ll> &b){
    if(a.first == b.first){
        return (a.second < b.second);
    }
    return (a.first < b.first);
}

void solve(){
    ll n,k,f;
    cin>>n>>k>>f;

    vector<pair<ll,ll>> V ;
    ll maxi = INT_MIN ;
    ll mini = INT_MAX ;
    while(n--){
        ll a , b ;
        cin>>a>>b ;
        maxi = max (maxi,a);
        maxi = max (maxi,b);
        mini = min (mini,a);
        mini = min (mini,b);
        V.push_back(make_pair(a,b));
    }
    sort(V.begin(),V.end(),mycmp);
    ll count  = 0 ;
    ll m = V.size();
    for(auto i = 1 ; i< m ; i++){
        if(V[i-1].second < V[i].first){
            count += (V[i].first) - (V[i-1].second) ;
        }
    }

    if(f > maxi){
        count += (f - maxi) ;
    }
    if(mini> 0 ){
        count += mini ;
    }

    // cout<<count<<" "<<endl;
    if(count >= k){
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