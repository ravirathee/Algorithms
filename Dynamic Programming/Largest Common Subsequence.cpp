//https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0

#include<bits/stdc++.h>     
using namespace std;

//lcs without DP
int lcs(int x, int y, string s1, string s2){
    
    if(x==0 || y==0) return 0;
    else{
        if(s1[x-1] == s2[y-1]) return 1 + lcs(x-1,y-1,s1,s2);
        else return max(lcs(x-1,y,s1,s2) , lcs(x,y-1,s1,s2));
    }
}

//LCS with DP
int lcs(int x, int y, string s1, string s2, int arr[101][101]){
    int result;
    if(x==0 || y==0) return 0;
    if(arr[x][y] != -1) return arr[x][y];
    if(s1[x] == s2[y])
        result =  1 + lcs(x-1,y-1,s1,s2,arr);
    else
        result =  max   (lcs(x-1,y,s1,s2,arr) , lcs(x,y-1,s1,s2,arr));
    
    arr[x][y] = result;
    return result;
}

void test_case(){
    int x,y; cin>>x>>y;
    string s1,s2; cin>>s1>>s2;
    int arr[101][101];
    
    for(int i=0; i<=x ; i++)
        for(int j=0; j<=y; j++)
            arr[i][j] = -1;
    
    cout<<lcs(x,y,s1,s2,arr)<<endl;
}

int main() {
    int t; cin>>t;
    while(t--){
        test_case();
    }
    //code
    return 0;
}


