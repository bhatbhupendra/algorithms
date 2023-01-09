#include<stdio.h>
#include<stdlib.h>
void selectionShort(int *array, int size){
	int i,j;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main(){
    int size,i;
    printf("Enter no Elements\n");
    scanf("%d",&size);
    
    //initilizing 1d array of int type
    int* data;
    data = (int*)malloc(size*sizeof(int));

    printf("The Input arrey of size %d :_\n",size);
    for(i=0; i< size; i++){
        scanf("%d",&data[i]);
    }

    selectionShort(data,size);

    printf("The shorted arrey is :_\n");
    for(i =0; i< size; i++){
        printf("%d\t",data[i]);
    }
    return 1;
}
