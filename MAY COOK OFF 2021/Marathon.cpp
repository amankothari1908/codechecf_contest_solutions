#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int D , d , a , b , c ;
    cin>>D>>d>>a>>b>>c;
    int dis = D*d ;
    if(dis >= 42){
        cout<<c<<endl;
    }
    else if(dis>=21 && dis < 42){
        cout<<b<<endl;
    }
    else if(dis>=10 && dis< 21){
        cout<<a<<endl;
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