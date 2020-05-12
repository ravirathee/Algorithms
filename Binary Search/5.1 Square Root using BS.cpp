//#include<bits/stdc++.h>
//using namespace std;
//
//int bin_sqrt(int n){
//    
//    if(n== 0 || n == 1) return n;
//    
//    int l = 1, r = n,mid,ans = -1;
//    while(l <= r){
//        mid = (l+r)/2;
//        if( (mid*mid) == n) return mid;
//        else if( mid*mid < n ){
//            ans = mid;
//            l = mid + 1;
//        }else{
//            r = mid - 1;
//        }
//    }
//    
//    return ans;
//}
//
//void test_case(){
//    int n; cin>>n;
//    cout<<endl<<bin_sqrt(n)<<"\n";
//    
//
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
