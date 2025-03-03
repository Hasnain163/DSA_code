#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1 = "abcef";
    string s2 = "aabdcef";

    int m = s1.length();
    int n  =s2.length();

    int res =0 ;


    vector<vector<int>> lcs(m+1, vector<int>(n+1,0));

    for(int i =1 ; i<=m ; i++){
        for(int j=1 ;j<= n ; j++){
            if(s1[i-1]==s2[j-1]){
                lcs[i][j] = lcs[i-1][j-1]+1;
            }
            else{
                lcs[i][j]=0;
            }
       
       res = max(res,lcs[i][j]);

        }
    }

    cout<< res << endl;
    return 0;
}
