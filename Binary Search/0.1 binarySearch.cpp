//#include<bits/stdc++.h>
//using namespace std;
//
////iterative
//int binarySearch1(int a[],int l,int r,int x){
//    int mid,pos=-1;
//    while(r>=l){
//        mid = (l+r)/2;
//        if( a[mid]==x ) return mid;
//        else if( a[mid]<x ) l=mid+1;
//        else r=mid-1;
//    }
//    return pos;
//}
//
////recursive
//int binarySearch2(int a[],int l,int r,int x){
//    
//    if(r>=l){
//        int mid = (l+r)/2;
//        if( a[mid]==x ) return mid;
//        else if( a[mid]<x ) return binarySearch2(a,mid+1,r,x);
//        else return binarySearch2(a,l,mid-1,x);
//    }
//    return -1;
//}
//
//void test_case(){
//    int n; cin>>n;
//    int a[n]; for(int i=0 ; i<n; i++) cin>>a[i];
//    int x; cin>>x;
//    
//    int pos = binarySearch1(a,0,n-1,x);
//    
//    if(pos == -1) cout<<"Element not found";
//    else cout<<"Element found at pos : "<<pos;
//}
//
//int main() {
//    int t=1; //cin>>t;
//    while(t--){
//        test_case();
//    }
//    //code
//    return 0;
//}
