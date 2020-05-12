///*
// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0
//
// study here
// https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
// */
//#include<bits/stdc++.h>
//using namespace std;
//
//int searchRArray(int a[], int l,int r,int x){
//    int mid,pos = -1;
//    while(l<=r){
//        mid = (l+r)/2;
//        if( a[mid] == x) return mid;
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
//        else if( a[mid] < a[r] ){
//
//            if( x>a[mid] && x<=a[r] ){
//                l = mid + 1;
//            }else{
//                r = mid - 1;
//            }
//
//        }else{
//
//            if( x<a[mid] && x>=a[l] ){
//               r = mid - 1;
//            }else{
//               l = mid + 1;
//            }
//
//        }
//    }
//    return pos;
//
//}
//
//
//
//void test_case(){
//    int n; cin>>n;
//    int a[n]; for(int i=0; i<n;i++) cin>>a[i];
//    int k; cin>>k;
//
//    cout<< searchRArray(a, 0, n-1, k) <<"\n";
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
// INPUT :
// 1
// 8
// 3 3 3 3 3 1 2 3
// 2
//
// OUTPUT :
// 6
// */
