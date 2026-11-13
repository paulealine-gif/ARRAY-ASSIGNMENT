#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10];
	int arr2[10];
    int i;
    int sum = 0;
    int largest;
	int secondlargest;
    int pos1 = 0;
	int pos2 = 0;
    float average;

    // Enter 10 numbers
    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\nOriginal array:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Display the array in reverse
    printf("\n\nReverse array:\n");

    for(i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // Calculate the sum
    for(i = 0; i < 10; i++) {
        sum = sum + arr[i];
    }

    printf("\n\nSum = %d", sum);

    // Calculate the average
    average = sum / 10.0;

    printf("\nAverage = %.2f", average);

   //finding the largest element and position
	largest=arr[0];
	pos1=0;
	for(i=1;i<10;i++){
		if(arr[i]>largest){
			largest=arr[i];
			pos1=i;
		}
	}
	printf("\n\nThe largest value is %d",largest);
	printf("\n The position is  %d ",pos1);
	
	for(i=0;i<10;i++){
		if(arr[i]<largest){
			if(pos2 == -1 || arr[i]>secondlargest)
			secondlargest=arr[i];
			pos2=i;
		}
	  }
	
	if(pos2!=-1){
		printf("\n\nThe secondlargest value is %d",secondlargest);
	printf("\n The position is %d\n\n",pos2);
}
    

    // Display the other values and their positions
    printf("\n\nOther values and position:\n");

    for(i = 0; i < 10; i++) {
        if(i != pos1 && i != pos2) {
            printf("Value = %d, position = %d\n", arr[i], i);
        }
    }

    // Copy the first array into the second array
    for(i = 0; i < 10; i++) {
        arr2[i] = arr[i];
    }

    // Display the second array
    printf("\n\nElements of the second array:\n");

    for(i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }

	
	return 0;
}
