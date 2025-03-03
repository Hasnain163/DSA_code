#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> weight ={15,5,5,10,5,10,10};
vector<int> profit ={800 ,200 ,500 ,300 ,600,700 ,400};

int n = weight.size();

int maxWeight= 50 ;

vector<vector<int>> dp(n+1,vector<int>(maxWeight+1,0));

for(int i=0 ;i <=n ;i++){

    for(int w=0;w<=maxWeight ;w++){

        if(i==0 || w==0){
            dp[i][w] =0;
        }
        else if(weight[i-1]<= w){
            dp[i][w]= max(dp[i-1][w],profit[i-1]+dp[i-1][w-weight[i-1]]); // Diagonal arrow erpart

        }
        else{
            dp[i][w] = dp[i-1][w];  //kaj kore upward arrow part
        }
    }
}

cout<< dp[n][maxWeight] << endl ; 

}