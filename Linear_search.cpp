#include<bits/stdc++.h>
using namespace std;

int search(vector<int> value,int n){
 for(int i;i<=value.size();i++){
   if(value[i] == n){
    return i;
   }
 }

 return -1;
}
int main(){
    int n;
    vector<int> arr = {23,25,26,5,33,2,1,5};
    cout << "Enter a Number: ";
    cin >> n;
   int res = search(arr,n);
   if(res>=0){
    cout<<"Find the Number is "<< res <<" possition";
   }
   else{
    cout << "Not found" ;
   }
}