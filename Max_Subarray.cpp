#include<iostream>
#include<limits.h>
using namespace std;

int max(int left_max,int  right_max,int cross_max ){
    if(left_max>right_max){
        if(left_max>cross_max)
        return left_max;
        else
        return cross_max;
    }
    else{
        if(right_max> cross_max)
        return right_max;
        else
        return cross_max ;
    }
}

int max_subarray (int arr[], int left, int mid, int right){
    int sum =0 ;
    int left_subArrMax = INT_MIN;

    for(int i = mid; i>=left ; i--){
        sum += arr[i];
        if(sum > left_subArrMax ){
            left_subArrMax = sum ; 
        }

    }
 sum=0 ;
int right_subArrMax = INT_MIN ;

    for(int i = mid+1 ; i<= right ; i++){
      sum += arr[i];
      if(sum > right_subArrMax){
        right_subArrMax = sum ;

      }
    }

    return left_subArrMax+ right_subArrMax;

}
int divide(int arr[], int left, int right)
{
int mid = (left+right)/2;
if(left == right){
    return arr[left];
}
 int left_max = divide(arr,left,mid);
 int right_max = divide(arr, mid+1, right);
 int cross_max = max_subarray(arr,left , mid , right);

 int max_subArr = max(left_max, right_max,cross_max);
  
  return max_subArr ;

}
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    cout << "Enter array Elements : ";
    for(int i=0;i< n ; i++){
        cin >> arr[i] ;
    }

cout << "Output : ";
    cout << divide(arr, 0 , n-1);

}