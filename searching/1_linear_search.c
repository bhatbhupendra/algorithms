#include<stdio.h>
#include<conio.h>

int linearSearch(int arr[], int n, int x){
    int i;
    for (i = 0; i < n; i++){
        if (arr[i] == x){//element found
            return i;
        }
    }
    return -1;
}
 
int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;//element to be searched
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    int resultIndex = linearSearch(arr, n, x);
    if(resultIndex == -1){
        printf("Element Dosen't exists\n");
    }else{
        printf("Element Found at index %d\n", resultIndex);
    }
    return 0;
}
