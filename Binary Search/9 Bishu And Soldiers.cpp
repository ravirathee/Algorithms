//#include<bits/stdc++.h>
//using namespace std;
//
//int bin_search(int a[], int l , int r, int x){
//    int pos = -1, mid;
//    while(l<=r){
//        mid = (l+r)/2;
//        if(a[mid]==x){
//            pos = mid;
//            l = mid + 1;
//        }else if( x > a[mid]){
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
//    int n; cin>>n;
//    int a[n]; for(int i=0 ; i<n; i++) cin>>a[i];
//    int q ; cin>>q;
//    int b[q]; for(int i = 0; i<q ; i++) cin>>b[i];
//
//    sort(a,a+n);
//
//    int sum[n];
//    int temp = 0;
//    for(int i=0 ; i<n ; i++){
//        temp += a[i];
//        sum[i] = temp;
//    }
//
//    for(int i=0 ; i<q ; i++){
//        int temp = bin_search(a,0,n-1,b[i]);
//        cout<<temp+1<<" "<<sum[temp]<<"\n";
//    }
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
