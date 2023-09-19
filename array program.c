#include<stdio.h>
 void main()
 {
     int arr[10]={1,2,3,4,5,4,3,2,2,3};
     int flag=0;
     for(int i=0;i<10;i++)
     {
         flag=0;
         for(int j=i+1;j<10;j++)
         {
             if(arr[i]==arr[j])
             {
                 flag=1;
             }
         }
         if(flag==0)
         {
             printf("\n %d",arr[i]);
         }
     }
 }
 