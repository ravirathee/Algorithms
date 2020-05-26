//https://practice.geeksforgeeks.org/problems/finding-number/0

//https://www.geeksforgeeks.org/find-the-maximum-element-in-an-array-which-is-first-increasing-and-then-decreasing/


#include<bits/stdc++.h>
using namespace std;

//assuming distinct elements
//we have bitonic sequence, hence only one peak possible
int findPeakElementPos(int a[],int n){
    int l = 0, r = n-1, mid;
    while(l<=r){
        mid = (l+r)/2;
        if(l == r) return mid;
        if( a[mid-1] < a[mid] && a[mid+1] < a[mid]) return mid;
        else if( a[mid+1] > a[mid] ) l = mid + 1;
        else                         r = mid - 1;
    }
    return -1;
}

int findAnElement(int a[], int n, int l, int r, int x, bool inc){
    int mid;
    while(l<=r){
        mid = (l + r)/2;
        if(a[mid]==x) return mid;
        if (!inc){
            if(a[mid]>x) r = mid - 1;
            else         l = mid + 1;
        }else{
            if(a[mid]>x) l = mid + 1;
            else         r = mid - 1;
        }
    }
    return -1;
}

void test_case(){
    int n; cin>>n;
    int a[n]; for(int i=0 ; i<n ; i++) cin>>a[i];
    int x; cin>>x;
    
    int peakPos = findPeakElementPos(a, n);
    int x_pos = findAnElement(a,n,0,peakPos,x,0);
    
    if(x_pos != -1){
        cout<<x_pos<<"\n";
    }else{
        x_pos = findAnElement(a,n,peakPos,n-1,x,1);
        cout<<x_pos<<"\n";
    }
    
   
}

int main() {
    int t=1; //cin>>t;
    while(t--){
        test_case();
    }
    //code
    return 0;
}

