// A C Program to read and print elements in two dimensional array. © Ishav Verma 19/March/2021
#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[10][10];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<10; i++) {
      for(j=0;j<10;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
         printf("\n");
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<10; i++) {
      for(j=0;j<10;j++) {
         printf("%d \n", disp[i][j]);
         if(j==10){
            printf("\n");
         }
      }
   }
   return 0;
} 