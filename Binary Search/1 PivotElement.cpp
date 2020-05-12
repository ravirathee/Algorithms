///*
// https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array/0
//
// read theory and logic from here
// http://theoryofprogramming.com/2017/12/16/find-pivot-element-sorted-rotated-array/
// take hint how to implement here
// https://www.geeksforgeeks.org/find-minimum-element-in-a-sorted-and-rotated-array/
//
// implemented this code on my own
// */
//
//#include<bits/stdc++.h>
//using namespace std;
//
////
//int minElement(int a[],int l,int r){
//    int mid,pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//
//        if(l==r) return l;  //only one element
//
//        if(a[mid+1] < a[mid]) return mid+1;
//        else if( a[mid]>a[r]) l = mid;
//        else if( a[mid]<a[r]) r = mid;
//    }
//    return pos;
//}
//
////max Element in a rotated sorted array (also called pivot element)
//int maxElement(int a[],int l,int r){
//    int mid,pos = -1,len=r+1;
//    while(l<=r){
//        mid = (l+r)/2;
//
//        if(l==r) {
//            if(l==0) return len-1;  //if array already sorted we'll reach first element
//            else return l;  //only one element
//        }
//
//        if(a[mid+1] < a[mid]) return mid;
//        else if( a[mid]>a[r]) l = mid;
//        else if( a[mid]<a[r]) r = mid;
//    }
//    return pos;
//}
//
//void test_case(){
//    int n; cin>>n;
//    int a[n]; for(int i=0; i<n ; i++) cin>>a[i];
//    cout<<a[minElement(a,0,n-1)]<<"\n";
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
