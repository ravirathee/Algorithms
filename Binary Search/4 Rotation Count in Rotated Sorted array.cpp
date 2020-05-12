///*
// Idea is to find minElement in a Rotated Sorted Array but with duplicates
//
// dont forget to check if mid == 0
// this test case might trouble you.
// */
//
///*
// https://practice.geeksforgeeks.org/problems/rotation/0
//
// study here
// https://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/?ref=rp
//
// implemented this code on my own
// */
//
//#include<bits/stdc++.h>
//using namespace std;
//
////
//int minElement(long long a[],int l,int r){
//    int mid,pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//
//        if(l==r) return l;  //only one element
//
//        if(mid == 0){
//            if( a[mid+1] < a[mid] ) return mid+1;
//            else return 0;
//        }
//        else if(a[mid-1] > a[mid]){
//            return mid;
//        }
//        else if( a[mid] == a[r] && a[mid] == a[l] ){
//            l+=1;
//            r-=1;
//        }
//        else if( a[mid]==a[r] ){
//            r = mid -1;
//        }
//        else if( a[mid]==a[l] ){
//            l = mid +1 ;
//        }
//        else if( a[mid]>a[r]) l = mid;
//        else if( a[mid]<a[r]) r = mid;
//    }
//    return pos;
//}
//
//
//void test_case(){
//    int n; cin>>n;
//    long long a[n]; for(int i=0; i<n ; i++) cin>>a[i];
//    cout<<minElement(a,0,n-1)<<"\n";
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
