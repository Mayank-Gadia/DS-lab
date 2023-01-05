#include<stdio.h>
#include<stdlib.h>

int binarysearch(int array[],int x,int low, int high)
{
 if(high>=low)
 {
  int mid=low+(high-low)/2;
  
  if(array[mid]==x)
  {
   return mid;
  }
   if(array[mid]>x)
   {
    return binarysearch(array,x,low,mid-1);
   }
    else
    {
     return binarysearch(array,x,mid+1,high);
    }
  return-1;
 }
}

int main(void)
{
 int array[]={3,4,5,6,7,8,9};
 int n= sizeof(array)/sizeof(array[0]);
 int x=4;
 int result=binarysearch(array,x,0,n-1);
 if(result==-1)
 {
 printf("element not found");
 } 
 else
 {
 printf("element is found at index %d",result);
 }
 }
