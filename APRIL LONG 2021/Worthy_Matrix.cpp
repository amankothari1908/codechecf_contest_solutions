#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test;
    cin>>Test;
    while(Test--){
        int n,m,k;
        cin>>n>>m>>k;
        int A[n+1][m+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0){
                    A[i][j]=0;
                }
                else{
                    cin>>A[i][j];
                }
            }
        }

        for(int i=1;i<n;i++){
            int prev=A[0][]
        }



    }
    return 0;
}