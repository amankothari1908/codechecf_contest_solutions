#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}


void solve(){
    ll n ;
    cin>>n;
    ll count = 1;
    if(n == 2 ){
        cout<<1<<endl;
        return ;
    }
    
    for( ll i = 3 ; i<=n ;i++){
        if(isPrime(i)){
            cout<<i<<" ";
            if(2*i > n ){
                count++;
            }
        }
    }
    // cout<<endl;
    cout<<count<<endl;
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