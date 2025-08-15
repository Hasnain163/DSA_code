#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int insertion(vector<int> arr){
    int j,store;
   for(int i=1 ;i<arr.size(); i++ ){
      j = i-1;
     while(j!= -1 && arr[j]>arr[j+1]){
       store = arr[j+1];
       arr[j+1] = arr[j] ;
       arr[j] =store;
       j=j-1;   
     }
   }

   cout <<"Insertion sort: ";
   for(int i:arr){
    cout << i << " ";
   }

   return 0;
}

int main(){
    vector<int> arr = {};
    int n;
    cout << "Initial array Size : " ;
    cin >> n ;
    for(int i=1;i<=n;i++){
        int value;
        cin >> value ;
        arr.push_back(value);
    }
   
    insertion(arr);

    // add something as my requirement 
   
    int run;
    cout << "\nEnter 1 if you want to add any Element else 0: ";
    cin >> run; 
    while(run){
        int temp;
        cout <<"\nEnter a Element: ";
        cin >> temp;
        arr.push_back(temp);
        insertion(arr);
        cout << "\nEnter 1 if you want to add any Element else 0: ";
        cin >> run;
    }
   
}
