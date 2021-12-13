#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){

    ll g , p  ; 
    cin >> g >> p ;

    ll arr[10] ;
    ll temp = 0  ; 
    for(ll i= 0 ; i < 10 ; i++ ){
        cin >> arr[i];
    } 
    for(ll i = 9 ; g <= i  ; i-- ){
        temp += arr[i]; 
    }
    // cout << (temp + 1 )/ p << " " << (temp + arr[g-1])/p << endl ; 
    // cout << ceil((temp + 1 )/p) << " " << ceil((temp + arr[g-1])/ p)   << endl ;  
    if(  (temp + 1 ) % p == 0 ){
       cout << (temp + 1 ) / p << " " ; 
    }else{
       cout << (temp + 1 )/ p + 1  << " " ;  
    } 

    if((temp + arr[g-1]) % p == 0 ){
      cout << (temp + arr[g-1])  / p ; 
    }else{
      cout << ((temp + arr[g-1]) / p )+ 1 ; 
    }
    cout << endl ; 
}

int  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1 ;
    cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}