////https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages/0
//#include<bits/stdc++.h>
//using namespace std;
//int val = false;
//void output(long long a[],long long m,long long k,long long chunk){
//    bool b[m];
//    for(long long i = 0; i<m ; i++) b[i] = false;
//    long long sum = 0,slash_count = 0;
//
//    for(long long i=m-1 ; i>=0 ; i--){
//
//        if( sum + a[i] <= chunk ){
//            sum+=a[i];
//        }else{
//            b[i+1] = true;
//            slash_count++;
//            sum = a[i];
//        }
//
//        if( k - slash_count == i + 1 ){
//            for(long long j = 1 ; j<= i; j++){
//                b[j] = true;
//            }
//            break;
//        }
//    }
//
//    for(long long i=0 ; i<m ; i++){
//        if(b[i]==1)
//            cout<<"/ ";
//
//        cout<<a[i]<<" ";
//    }
//
//    cout<<"\n";
//}
//
//bool func(long long a[],long long m, long long k,long long x){
//    long long sum = 0;
//    long long person = 1;
//    for(long long i=0 ; i<m ; i++){
//        if(sum + a[i] <= x){
//            sum = sum + a[i];
//        }else{
//            person++;
//            sum = a[i];
//        }
//    }
//    if((person <= k) == true){
//        return true;
//    }
//    else{
//        return false;
//    }
//
//}
//
//long long binarySearch(long long a[],long long m,long long k,long long l,long long r){
//    long long pos = -1;
//    if(m < k)
//    {
//        return -1;
//    }
//    while (l <= r){
//        long long mid = (l + r) / 2;
//        if ( func(a,m,k,mid) == true ){
//            pos = mid;
//            r = mid - 1;
//        }
//        else{
//            l = mid + 1;
//        }
//    }
//    return pos;
//}
//
//
//void test_case(){
//    long long m,k;
//    //cin>>m>>k;
//    cin>>m;
//    long long int total = 0;
//    long long max=0;
//    long long a[m];
//    for(long long i=0 ; i<m ; i++){
//        cin>>a[i];
//        total+=a[i];
//        if(a[i]>max) max = a[i];
//    }
//
//    cin>>k;
//
//    //do not sort because the search space is already sorted
//    //search space =>  max_value to sum_of_all_elemets
//    //sort(a,a+m);
//
//    long long l = max,r = total;
//    long long chunk = binarySearch(a,m,k,l,r);
//    cout<<chunk<<"\n";
//    //output(a,m,k,chunk);
//
//}
//
//int main() {
//    long long t; cin>>t;
//    while(t--){
//        test_case();
//    }
//    //code
//    return 0;
//}
