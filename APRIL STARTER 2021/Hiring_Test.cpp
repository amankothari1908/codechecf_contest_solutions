#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    char A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    int f=0,p=0,u=0;
    for(int i=0;i<n;i++){
        f=0,p=0;
        for(int j=0;j<m;j++){
            if(A[i][j]=='F'){
                f++;
            }
            else if(A[i][j]=='P'){
                p++;
            }
        }
        if( f >= x || (f>=(x-1)) && (p>=y)){
            cout<<1;
        }
        else{
            cout<<0;
        }
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