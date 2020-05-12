////https://www.geeksforgeeks.org/count-elements-less-equal-given-value-sorted-rotated-array/?ref=rp
//#include<bits/stdc++.h>
//using namespace std;
//
//int modifiedBinarySearch(int a[],int l,int r,int x){
//    int mid,pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//        if( a[mid] == x ){
//            pos = mid;
//            l = mid + 1;
//        }else if( x > a[mid] ){
//            pos = mid;
//            l = mid + 1;
//        }else{
//            r = mid - 1;
//        }
//    }
//    return pos;
//}
//
//int minElement(int a[],int l,int r){
//    int mid,pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//
//        if(mid == 0){
//            if( a[mid+1] < a[mid] ) return mid+1;
//            else return 0;
//        }
//        else if( a[mid] < a[mid-1] ) return mid;
//        else if( a[mid] < a[r] ){
//            r = mid-1;
//        }else{
//            l = mid+1;
//        }
//    }
//    return pos;
//}
//
//void test_case(){
//    int n; cin>>n;
//    int a[n]; for(int i=0 ; i<n ; i++) cin>>a[i];
//    int x; cin>>x;
//
//    int min_index = minElement(a,0,n-1);
//
//    int count = 0;
//    if( x >= a[min_index] && x <= a[n-1] ){
//        int index1 = modifiedBinarySearch(a,min_index,n-1,x);
//        count += index1 - min_index + 1;
//    }else if( x >= 0 && x <= a[ min_index - 1] ){
//        int index2 = modifiedBinarySearch(a,0,min_index-1,x);
//        count += (index2 - 0 + 1) + ( (n - 1) - min_index + 1 );
//    }
//
//    cout<<count<<"\n";
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
///*
//INPUT :
//1
//10
//70 80 90 100 10 20 30 40 50 60
//75
//OUTPUT
//7
//*/
