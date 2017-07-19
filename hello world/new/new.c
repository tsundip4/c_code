#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>

int main() {
   int arr[30], element, num, i, location;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   printf("\nEnter the element to be inserted :");
   scanf("%d", &element);

   printf("\nEnter the location");
   scanf("%d", &location);

   //Create space at the specified location
   for (i = num; i >= location; i--) {
      arr[i] = arr[i - 1];
   }

   num++;
   arr[location - 1] = element;

   //Print out the result of insertion
   for (i = 0; i < num; i++)
      printf("n %d", arr[i]);

   return (0);
}
Output of the Program :


Enter no of elements : 5
1 2 3 4 5
Enter the element to be inserted : 6
Enter the location : 2
1 6 2 3 4 5
1
2
3
4
5
Enter no of elements : 5
1 2 3 4 5
Enter the element to be inserted : 6
Enter the location : 2
1 6 2 3 4 5
