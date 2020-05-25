////https://practice.geeksforgeeks.org/problems/the-painters-partition-problem/0/
//#include<bits/stdc++.h>
//using namespace std;
//bool func(int a[],int l,int r,int n, int k, int mid){
//    int person = 1;
//    int sum = 0;
//    for(int i=0 ; i<n ; i++){
//        if( sum + a[i] <= mid){
//            sum+=a[i];
//        }else{
//            person++;
//            sum = a[i];
//        }
//    }
//
//    if( person <= k ) return true;
//    else return false;
//}
//
//int binarySearch(int a[],int l,int r, int n, int k){
//    //if(n<k) return -1;
//    int mid,pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//        if( func(a,l,r,n,k,mid) == true ){
//            pos = mid;
//            r = mid - 1;
//        }else{
//            l = mid + 1;
//        }
//    }
//    return pos;
//}
//
//
//void test_case(){
//    int k,n; cin>>k>>n;
//    int a[n];
//
//    int max=0;
//    int sum = 0;
//    for(int i=0; i<n;i++){
//        cin>>a[i];
//        if(a[i]>max) max = a[i];
//        sum+=a[i];
//    }
//    cout<<binarySearch(a,max,sum,n,k)<<"\n";
//}
//
//
//int main(){
//    int t; cin>>t;
//    while(t--){
//        test_case();
//    }
//    return 0;
//}
//
//
