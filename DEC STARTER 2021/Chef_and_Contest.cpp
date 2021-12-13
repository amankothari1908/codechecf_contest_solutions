#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int x , y , p , q ;
    cin>>x>>y>>p>>q;
    int res1 = x + (10*p);
    int res2= y + (10*q);
    if(res1 > res2){
        cout<<"Chefina"<<endl;
    }
    else if(res2 > res1){
        cout<<"Chef"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
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