#include<stdio.h>

void insertion(int arr[], int Size){
   for(int i=1; i< Size;i++) {
    int temp = arr[i];
    int j =i-1;
    while(arr[j]>temp && j>=0){
         arr[j+1]= arr[j];
        j--; 
    }
      arr[j+1] = temp;

   }
}
int main()
{
    int n;
    printf("Enter Array size: ");
    scanf("%d", &n);
    printf("Enter Array Elements: ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   insertion(arr,n);

printf("Print Sorted Array Elements: ");
  for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}