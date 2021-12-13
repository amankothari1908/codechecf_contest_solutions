#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int sn(int n){
    return((n)*(n+1))/2 ;
}

int sz(int n){
    int sum = 0 ;
    for(int i =1 ;i<=n;i++){
        sum += sn(i);
    }
    return sum ;
}
void solve(){
    int x1, y1 ,x2,y2 ;
    cin>>x1>>y1>>x2>>y2 ;

    int asum1 = 0 ;
    asum1 = asum1 + sz(x1);
    int sum = 0 ;
    sum = sum + sn(x1) ;
    int  j = 1 ;
    while(j!=(y1)){
        sum = sum + (x1) ;
        asum1 += sum ;
        x1++;
        j++;
    }

    int asum2 = 0 ;
    asum2 = asum2 +sz(x2);
    int sum2 = 0 ;
    sum2 = sum2 + sn(x2) ;
    int  j1 = 1 ;
    while(j1!=(y2)){
        sum2 = sum2 + (x2) ;
        asum2 += sum2 ;
        x2++;
        j1++;
    }

    cout<<asum1<<" "<<asum2 <<endl;
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