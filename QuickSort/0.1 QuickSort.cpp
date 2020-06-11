#include<bits/stdc++.h>
using namespace std;

//taking first element as pivot
//returns position of that pivot after placing it at its correct position
int partition_first(int a[], int l, int r){
    int pivot = a[l];
    int i = l;
    for(int j = i + 1 ; j<=r ; j++){
        if( a[j] < pivot ){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[l],a[i]);
    return i;
}

//taking last element as pivot
//returns position of that pivot after placing it at its correct position
int partition_last(int a[], int l, int r){
    int pivot = a[r];
    int i = l-1;
    for(int j = i + 1 ; j<=r-1 ; j++){
        if( a[j] < pivot ){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[r],a[i+1]);
    return i+1;
}

//taking random element as pivot
//returns position of that pivot after placing it at its correct position
int partition_random(int a[], int l, int r){
    int pivot = random();
    int i = l-1;
    for(int j = i + 1 ; j<=r-1 ; j++){
        if( a[j] < pivot ){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[r],a[i+1]);
    return i+1;
}



void quickSort(int a[], int l, int r){
    if(l<r){
        //int pivot_pos = partition_first(a,l,r);
        int pivot_pos = partition_last(a, l, r);
        quickSort(a, l, pivot_pos-1);
        quickSort(a, pivot_pos+1, r);
    }
}

void test_case(){
    int n; cin>>n;
    int a[n]; for(int i=0; i<n ; i++) cin>>a[i];
    
    quickSort(a,0,n-1);
    for(int i=0; i<n ; i++) cout<<a[i]<<" ";
}

int main() {
    int t; cin>>t;
    while(t--){
        test_case();
    }
    //code
    return 0;
}

