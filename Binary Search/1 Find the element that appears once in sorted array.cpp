////https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array/0
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int binSearch(int a[], int l, int r){
//    int pos = -1, mid;
//    while(l<=r){
//        mid = (l+r)/2;
//        if(l == r) return a[l];
//        if( a[mid+1] != a[mid] && a[mid-1] != a[mid] )  return a[mid];
//        if( a[mid+1] == a[mid] ) mid = mid + 1;    //make mid the position of 2nd ele always
//        if( mid % 2 == 0 ) r = mid - 2;
//        else               l = mid + 1;
//    }
//    return pos;
//}
//
//void test_case(){
//    int n; cin>>n;
//    int a[n]; for(int i = 0; i<n ; i++) cin>>a[i];
//
//    cout<<binSearch(a,0,n-1)<<"\n";
//}
//
//int main() {
//    int t; cin>>t;
//    while(t--){
//        test_case();
//    }
//    //code
//    return 0;
//}
//
