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
  	
  	//Alternative way of insertion short
  	
	  	for (step = 1; step < size; step++) {
		    int key = data[step];
		    int j = step;
		
		    while (key < data[j-1] && j >= 0) {
		      data[j] = data[j-1];
		      --j;
		    }
		    data[j] = key;
	  	}
  	
  	//printing the data array
  	int i;
  	for (i = 0; i < size; i++) {
    	printf("%d ", data[i]);
  	}
}
