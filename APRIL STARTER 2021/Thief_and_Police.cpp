#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    int a,b;
    cin>>a>>b;

    if(n==m){
        int T = 0 ;
        T = (n-x) +(m-y);
        int P = 0 ;
        if(a<b){
            P=(n-b) + (m-a-(n-b));
        }
        else{
            P = (n-a) + (m-b-(n-a)); 
        } 
        if(T<P){
            cout<<"YES"<<endl;
        }
        else if(T==P){
            if( (a<b && x<y )|| (b>a && y>x)){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if( n<m ){
        int T=0;
        T = (n-x) +(m-y);
        int P=0;
        if((n-a)<(n-b)){
            P = (n-a) + (m-b-(n-a));
        }
        else{
            P = (n-b) + (m-a-(n-b));
        }
        if(T<P){
            cout<<"YES"<<endl;
        }
        else if(T==P){
            if( (a<b && x<y )|| (b>a && y>x)){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        int T=0;
        T = (n-x) +(m-y);
        int P=0;
        if((m-a)<(m-b)){
             P = (m-a) + (n-b-(m-a));
        }
        else{
             P = (m-b) + (n-a-(m-b));
        }
        if(T<P){
            cout<<"YES"<<endl;
        }
        else if(T==P){
            if( (a<b && x<y )|| (b>a && y>x)){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
        
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