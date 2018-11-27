#include <stdio.h>

/*
    Bubble Sort in c
*/
/*
    Loop through elements.
    If upper neighbour is less than, then swap places.
    Continue to end of array
        If no swaps placed end the main while loop
        Otherwise start for loop again from beginning
*/
int main(){

    int array_of_stuff[]= {5,3,2,6,1,2,3,4,8,6,4,3,1,3,4,7,2,3,4,4,55,44,2323,1,23,4,0};
    int array_size, sizer, x, swaps_exist, swap_count;

    //tracker to check if swap has been made for sort
    swaps_exist = 1;

    //size if an int in the current os
    sizer = sizeof(int);

    //size of array to loop thru
    array_size = sizeof(array_of_stuff) / sizer;

    while(swaps_exist){

        //reset swap count for each sort iteration
        swap_count = 0;

        for(x=0;x< (array_size - 1);x++){
            //swap elements if the higher element has a lower value and add 1 to the swap counter
            if(array_of_stuff[x + 1] < array_of_stuff[x]){
                int temp_lower = array_of_stuff[x];
                array_of_stuff[x] = array_of_stuff[x + 1];
                array_of_stuff[x + 1] = temp_lower;
                swap_count++;
            }
            //printf("%d\n",array_of_stuff[x]);
        }

        if(swap_count == 0){
            swaps_exist = 0;
        }
    }

    //print the sorted values
    printf("**** BUBBLE SORT ****\n\n");

    for(x=0;x< array_size;x++){
       printf("\t%d\n",array_of_stuff[x]);
    }

    printf("\n**** BUBBLE SORT ****\n");


    return(0);
}
