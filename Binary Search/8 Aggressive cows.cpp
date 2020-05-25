////https://www.spoj.com/problems/AGGRCOW/
//#include<bits/stdc++.h>
//using namespace std;
//
//bool func1(int a[],int n,int c,int x){
//    int cows = c;
//    int find = a[0];
//    for(int i=0 ; i<n ; i++ ) {
//        if(a[i] >= find){
//            cows--;
//            find=a[i]+x;
//        }
//        if(cows == 0) return true;
//    }
//    return false;
//}
//
//int binSearch(int a[], int l, int r, int n, int c){
//    int mid,pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//        if( func1(a,n,c,mid) == true ){
//            pos = mid;
//            l = mid + 1;
//        }else{
//            r = mid - 1;
//        }
//    }
//    return pos;
//}
//
//void test_case(){
//    int n,c;
//    cin>>n>>c;
//    int a[n]; for(int i=0 ; i<n; i++) cin>>a[i];
//
//    sort(a,a+n);
//
//    //search space
//    int l = 0, r = a[n-1] - a[0];
//    cout<<binSearch(a,l,r,n,c)<<"\n";
//
//
//
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
// INPUT
// 1
// 5 3
// 1 2 8 4 9
// OUTPUT
// 3
//
// */
