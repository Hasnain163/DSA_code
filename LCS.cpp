// Longest common  substring BruteForce Approach 

#include <bits/stdc++.h>
using namespace std;

int main(){
 string s1 = "abcef";
    string s2 = "aabdcef";

    int m = s1.length();
    int n = s2.length();

  int res =0;

    for(int i=0; i<m ; i++){
        for(int j =0 ; j< n ; j++){
            int curnt =0;
            while(i+curnt< m && j+curnt <n && s1[i+curnt] == s2[j+curnt] ){
                curnt++;
            }
            res=max(res,curnt);
        }
    }

    cout << res << endl;

    return 0 ;

}


