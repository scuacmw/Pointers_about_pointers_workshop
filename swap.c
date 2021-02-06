//Practice problems from the Pointers about Pointers Workshop
/*Problem 1: Write a C program to swap two arrays using pointers. */
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


void swapTwoArrays(int *arr1, int *arr2, int n) {
        int i, temp;
        for (i = 0; i < n; i++) {
                temp = *(arr1 + i);
                *(arr1 + i) = *(arr2 + i);
                *(arr2 + i) = temp;
        }
        printf("After Swapping \n");
        /* print the elements in the first array */
        printf("Elements in arr1:\n");
        for (i = 0; i < n; i++) {
                printf("%d ", *(arr1 + i));
        }
        printf("\n");

        /* print the elements in the second array */
        printf("Elements in arr2:\n");
        for (i = 0; i < n; i++) {
                printf("%d ", *(arr2 + i));
        }
        printf("\n");
        return;
  }


int main() {
        int *arr1, *arr2, i, j, n;
        n=5;
        /* get the order of the arrays from the user */
        printf("Number of elements in the arrays: %d \n",n);
        
        /* dynamically allocate memory to store elements */
        arr1 = (int *) malloc(sizeof(int) * n);
        arr2 = (int *) malloc(sizeof(int) * n);

        //creating arr1={1,2,3,4,5}
        for (i = 0; i < n; i++) {
                arr1[i]=i+1;
        }

        //creating arr2={2,4,6,8,10}
        printf("Enter data for second array:\n");
        for (i = 0; i < n; i++) {
                arr2[i]=2*(i+1);
        }
        
        printf("Before Swapping \n");
        /* print the elements in the first array */
        printf("Elements in arr1:\n");
        for (i = 0; i < n; i++) {
                printf("%d ", *(arr1 + i));
        }
        printf("\n");

        /* print the elements in the second array */
        printf("Elements in arr2:\n");
        for (i = 0; i < n; i++) {
                printf("%d ", *(arr2 + i));
        }
        printf("\n");

        /* swap the elements in the given arrays */
        swapTwoArrays(arr1, arr2, n);
        return 0;
  }
