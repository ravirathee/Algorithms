//#include<bits/stdc++.h>
//using namespace std;
//
///*
//
//15
//1 2 3 5 5 5 8 8 8 10 10 10 12 14 15
//8
//
// */
//
//
//
///*
//Normal binary search will search for an element and converge on that element from both sides.
//*/
//int binary_search(int a[],int l,int r, int x,int n){
//    int mid, pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//        if(  x == a[mid]  ) {
//            return mid;
//        }else if( x > a[mid] ){
//            l = mid+1;
//        }else{
//            r = mid-1;
//        }
//    }
//    return pos;
//}
//
///*
//Lower Bound is a function which should return
//CASE 1 : position of element, if only 1 element present in the array
//CASE 2 : position of starting element, if multiple elements present in the array
//CASE 3 : position of element just greater than that element, if element not present in array
//
//For example:-
//
//CASE 1 input
//15
//1 2 3 5 5 5 7 7 8 10 10 10 12 14 15
//8
//CASE 1 output = 8
//
//CASE 2 input
//15
//1 2 3 5 5 5 8 8 8 10 10 10 12 14 15
//8
//CASE 2 output = 6
//
//CASE 3 input
//15
//1 2 3 5 5 5 7 7 7 10 10 10 12 14 15
//8
//CASE 3 output = 9
//
//*/
//int lower_bound(int a[],int l,int r, int x,int n){
//    int mid, pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//        if(  x == a[mid]  ) {
//            pos = mid;
//            r = mid - 1;
//        }else if( x > a[mid] ){
//            l = mid+1;
//        }else{
//            pos = mid;
//            r = mid-1;
//        }
//    }
//    return pos;
//}
//
//
//
//
///*
//Upper Bound is a function which should return
//CASE 1 : position of next element, if only 1 element present in the array
//CASE 2 : position of next element to ending element, if multiple elements present in the array
//CASE 3 : position of element just greater than that element, if element not present in array
//
//For example:-
//
//CASE 1 input
//15
//1 2 3 5 5 5 7 7 8 10 10 10 12 14 15
//8
//CASE 1 output = 9
//
//CASE 2 input
//15
//1 2 3 5 5 5 8 8 8 10 10 10 12 14 15
//8
//CASE 2 output = 9
//
//CASE 3 input
//15
//1 2 3 5 5 5 7 7 7 10 10 10 12 14 15
//8
//CASE 3 output = 9
//
//*/
//int upper_bound(int a[],int l,int r, int x,int n){
//    int mid, pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//        if(  x == a[mid]  ) {
//            l = mid + 1;
//        }else if( x > a[mid] ){
//            l = mid+1;
//        }else{
//            pos = mid;
//            r = mid-1;
//        }
//    }
//    return pos;
//}
//
//void test_case(){
//    int n; cin>>n;
//    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
//    int x; cin>>x;
//    int pos = upper_bound(a,0,n-1,x,n);
//    cout<<pos<<"\n";
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
//
//
