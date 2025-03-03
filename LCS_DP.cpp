#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "abcef";
    string s2 = "aabdcef";

    int m = s1.length();
    int n = s2.length();
   
   int res;

  vector<int> prev(n+1,0);
  

  for(int i =1; i<=m ;i++){

       res = 0 ;
     vector<int> curr(n+1,0);

    for(int j=1; j<=n ; j++){

        if(s1[i-1]== s2[j-1]){
            curr[j] = prev[j-1]+1;
             res = max(res,curr[j]);
        }
        else{
            curr[j]=0;
        }

    }
    prev =curr;

  }

  cout << res << endl ;


}