/******************************************************************************

Pointer and understanding the pointer

*******************************************************************************/

#include <stdio.h>

int abs (int num)
{
  return num > 0 ? num : -num;
}

int* sortedSquares (int *nums, int numsSize, int *returnSize)
{

  int i;

  int *rp=nums;
  int *bp = rp;
  for(i=0;i<numsSize;i++){
      
      *rp= abs(*rp);
      printf ("rp:%d ", *rp);
      rp++;
      
  }
  
  rp=bp;
    
  return rp;

}

int main ()
{

  int nums[5] = { -1, -2, -4, -6, -8 };
  
  int numsSize=sizeof(nums)/sizeof(nums[0]);
  int returnSize[numsSize];


  int *result= sortedSquares (nums, numsSize, returnSize);
  int i;
  
  for(i=0;i<numsSize;i++){
      printf("\nR: %d ", *(result+i));
  }
  
  return *result;
}
