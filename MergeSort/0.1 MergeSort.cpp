#include<bits/stdc++.h>
using namespace std;

void mergeAlgorithm(int a[], int l, int mid , int r){
    int size = r - l + 1;
    int b[size];
    
    int p = l, q = mid + 1,k=0;
    
    while(p<= mid && q <= r){
        if(a[p]<=a[q]){
            b[k] = a[p];
            p++;
            k++;
        }
        else{
            b[k] = a[q];
            q++;
            k++;
        }
    }
    
    while(p<=mid){
        b[k] = a[p];
        p++;
        k++;
    }
    
    while(q<=r){
        b[k] = a[q];
        q++;
        k++;
    }
    
    p = l;
    k = 0;
    while(k<size){
        a[p] = b[k];
        p++;
        k++;
    }
}

void mergeSort(int a[], int l, int r){
    if(l==r) return;
    else{
        int mid = (l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        mergeAlgorithm(a,l,mid,r);
    }
}

void test_case(){
    int n; cin>>n;
    int a[n]; for(int i=0 ; i<n ; i++) cin>>a[i];
    
    mergeSort(a,0,n-1);
    for(int i=0 ; i<n ; i++) cout<<a[i]<<" ";
}

int main() {
    int t; cin>>t;
    while(t--){
        test_case();
    }
    //code
    return 0;
}

