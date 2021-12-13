#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int L;
    cin>>L;
    string S;
    cin>>S;
    int check = L/2;
    int count = 0;
    if(S[0] == '1'){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=1;i<L;i++){
        if(S[i]=='1'){
            count++;
        }
        if((count*100)/(i+1) >= 50){
            // cout<<count<<" "<<(count*100)/(i+1)<<endl;
            cout<<"YES"<<endl;
            return;
        }
    } 
    cout<<"NO"<<endl; 
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