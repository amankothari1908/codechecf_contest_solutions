#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test;
    cin>>Test;
    while(Test--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0,flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                count++;
                if(count>=k){
                    flag=1;
                    break;
                }
            }
            else{
                count=0;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}