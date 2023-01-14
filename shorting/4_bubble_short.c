//also called exchange short
/* Bubble sort code */
#include<stdio.h>
#include<conio.h>

int main(){
  	int i, j,temp;

  	int data[] = {9, 5, 1, 4, 3};
	int n = sizeof(data) / sizeof(data[0]); //calculate the size
	
	for (i = 0 ; i < n - 1; i++){
	   for (j = 0 ; j < n - 1 - i; j++){ // with i=0 it is true upto j<4
	    	if (data[j] > data[j+1]){ // For decreasing order use '<' instead of '>'
		        temp = data[j];
		        data[j] = data[j+1];
		        data[j+1] = temp;
	      	}
	    }
	}
	
	printf("Sorted list in ascending order:\n");
	
	for (i = 0; i < n; i++)
	    printf("%d\n", data[i]);
	
	return 0;
}
