#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n , m;
    cin>>n>>m;
    string s ;
    cin>>s;
   ll Q[m];
    for(int i = 0 ; i < m ; i++){
        cin>>Q[i];
    }   

    if(n == 1){
        while(m--){
            cout<<0<<endl;
        }
        return ;
    } 
    
   ll count = 0 ;
    for(int i = 1 ; i <s.length(); i++){
        if(s[i] == s[i-1]){
            count += 2;
        }
        else{
            count++ ;
        }
    }

    for(int j = 0 ; j < m ; j++ ){
       ll k= Q[j];
        k--;
        if( k== 0 ){
            if(s[k] == '0'){
                s[k] = '1';
                if(s[k] == s[k+1]){
                    count++;
                }
                else{
                    count--;
                }
            }
            else{
                s[k] = '0';
                if(s[k] == s[k+1]){
                    count++;
                }
                else{
                    count--;
                }
            }
            cout<<count<<endl;
        }

        else if( k == n-1){
            if(s[k] == '0'){
                s[k] = '1';
                if(s[k] == s[k-1]){
                    count++;
                }
                else{
                    count--;
                }
            }
            else{
                s[k] = '0';
                if(s[k] == s[k-1]){
                    count++;
                }
                else{
                    count--;
                }
            }
            cout<<count<<endl;
        }
        else{
            if(s[k] == '0'){
                s[k] = '1';
                if((s[k] == s[k-1]) && (s[k] == s[k+1])){
                    count += 2;
                }
                else  if((s[k] != s[k-1]) && (s[k] != s[k+1])){
                    count -= 2 ;
                }
            }
            else{
                s[k] = '0';
                if((s[k] == s[k-1]) && (s[k] == s[k+1])){
                    count += 2;
                }
                else  if((s[k] != s[k-1]) && (s[k] != s[k+1])){
                    count -= 2 ;
                }
            }
            cout<<count<<endl;  
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   ll Test = 1 ;
    cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}