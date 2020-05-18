#include<bits/stdc++.h>
using namespace std;

int minElement(int a[],int l,int r,int n){
    int mid, pos = -1;
    while(l<r){
        mid = l + ( r - l )/2;
        if( a[mid] > a[mid+1] ){
            return mid+1;
        }else if( a[mid] > a[n-1] ){
            l = mid ;
        }else{
            r = mid ;
        }
    }
    return pos;
}

void test_case(){
    int n; cin>>n;
    int a[n]; for(int i=0 ; i<n ; i++) cin>>a[i];
   // int x; cin>>x;
    
    int l = 0, r = n-1;
    //cout<<binarySearch(a,l,r,n,x)<<"\n";
    //cout<<lowerBound(a,l,r,n,x);
    //cout<<upperBound(a,l,r,n,x);
    //cout<<"\n";
    cout<<minElement(a,l,r,n)<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--){
        test_case();
    }
    return 0;
}

