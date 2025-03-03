#include<iostream>
using namespace std; 
int count =0 ;
int bit_Count(int num){
if(num ==0 )
return 0;
else{
    int bit = num%2;
    num = num/2 ;
    (bit == 1 )? count++ :count;
    bit_Count(num);
    return count;
}
}
int main(){
    int num;
    cout << " Enter Number : ";
    cin >> num;
    cout << "Output: ";
  cout <<  bit_Count(num);


}