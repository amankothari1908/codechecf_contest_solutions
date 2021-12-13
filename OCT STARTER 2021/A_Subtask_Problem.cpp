#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
       int n , m , k ;
       cin>>n>>m>>k;
       int A[n];
       for(int i = 0 ;i<n ;  i++){
           cin>>A[i];
       }
       int one = 0 ,maxi = 0; 
       for(int i = 0 ; i<n ; i++){
           if(A[i] == 1){
               one++;
           }
           else{
               break;
           }
       } 
       maxi = one ;
    //    cout<<"maxi"<<maxi<<" "<<endl;
       if(maxi == n ){
           cout<<100<<endl;
       }
       else if(maxi >= m){
           cout<<k<<endl;
       }
       else{
           cout<<0<<endl;
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