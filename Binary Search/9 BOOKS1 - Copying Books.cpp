////https://www.spoj.com/problems/BOOKS1/
//#include<bits/stdc++.h>
//using namespace std;
//
//void output(long a[],long m,long k,long chunk){
//    bool b[m];
//    for(long i = 0; i<m ; i++) b[i] = false;
//    long sum = 0,slash_count = 0;
//    
//    for(long i=m-1 ; i>=0 ; i--){
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
//            for(long j = 1 ; j<= i; j++){
//                b[j] = true;
//            }
//            break;
//        }
//    
//    }
//
//    for(long i=0 ; i<m ; i++){
//        if(b[i]==1)
//            cout<<"/ ";
//        
//        cout<<a[i]<<" ";
//    }
//
//    cout<<"\n";
//}
//    
//bool func(long a[],long m, long k,long x){
//    long sum = 0;
//    long person = 1;
//    for(long i=0 ; i<m ; i++){
//        if(sum + a[i] <= x){
//            sum = sum + a[i];
//        }else{
//            person++;
//            sum = a[i];
//        }
//    }
//    return person <= k;
//}
//
//long binarySearch(long a[],long m,long k,long l,long r){
//    
//    while (l < r)
//    {
//        long mid = l + (r - l) / 2;
//
//        if ( func(a,m,k,mid) )
//            r = mid;
//        else
//            l = mid + 1;
//    }
//
//    return l;
//}
//
//
//void test_case(){
//    long m,k; cin>>m>>k;
//    long total = 0;
//    long max=0;
//    long a[m];
//    for(long i=0 ; i<m ; i++){
//        cin>>a[i];
//        total+=a[i];
//        if(a[i]>max) max = a[i];
//    }
//
//    //do not sort already sorted
//    //sort(a,a+m);
//
//    long l = max,r = total;
//
//    long chunk = binarySearch(a,m,k,l,r);
//    //cout<<chunk<<"\n";
//    output(a,m,k,chunk);
//
//}
//
//int main() {
//    long t; cin>>t;
//    while(t--){
//        test_case();
//    }
//    //code
//    return 0;
//}
