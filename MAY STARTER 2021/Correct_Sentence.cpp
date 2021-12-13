#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n1 , n2 ;
    cin>>n1>>n2;
    int arr1[n1];
    int arr2[n2];
    for(int i=0 ; i<n1 ; i++){
        cin>>arr1[i];
    }
    for(int j=0 ; j<n2 ; j++){
        cin>>arr2[j];
    }
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    int count = 0 , i=0 , j =0 ;
    while (i < n1 && j < n2) {
        
        if (arr1[i] < arr2[j]) {
            count++;
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            count++;
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    if(i < n1){
        count += (n1-1-i);
    }
    if(j < n2){
        count += (n2-1-j);
    }
    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1 ;
    // cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}