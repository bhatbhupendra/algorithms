//insertion short

#include<stdio.h>

void main(){
	int data[] = {9, 5, 1, 4, 3};
  	int size = sizeof(data) / sizeof(data[0]); //calculate the size
  	
  	//insertion short algorithm
  	int step;
  	for (step = 1; step < size; step++) {
	    int key = data[step];
	    int j = step - 1;
	
	    while (key < data[j] && j >= 0) {
	      data[j + 1] = data[j];
	      --j;
	    }
	    data[j + 1] = key;
  	}
  	
  	//Alternative way of insertion short which does same as above
	int data2[] = {9, 5, 1, 4, 3};
  	int size2 = sizeof(data) / sizeof(data[0]); //calculate the size
  	
	for (step = 1; step < size2; step++) {
	    int key = data2[step];
	    int j = step;
	
	    while (key < data2[j-1] && j >= 0) {
	      data2[j] = data2[j-1];
	      --j;
	    }
	    data2[j] = key;
	}
  	
  	//printing the data array
  	int i;
  	for (i = 0; i < size; i++) {
    	printf("%d ", data[i]);
  	}
	printf("\n");

	//printing the data2 array
  	int i;
  	for (i = 0; i < size; i++) {
    	printf("%d ", data[i]);
  	}
}
