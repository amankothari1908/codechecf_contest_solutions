#include<bits/stdc++.h>
#define ll long long int
using namespace std;

float rd(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test;
    cin>>Test;
    while(Test--){
        float k1,k2,k3,v;
        float check=9.58;
        cin>>k1>>k2>>k3>>v;
        float temp = k1*k2*k3*v ;
        // temp=rd(temp);
        // cout<<temp<<endl;
        float res = (100/temp);
        res=rd(res);
        // cout<<res<<endl;
        if(res < check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}