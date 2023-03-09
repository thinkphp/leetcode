#include <stdio.h>

int search(int* nums, int target, int lo, int hi) {

           if(lo > hi) {
               return lo;
           } else {
              int m = (lo + hi)>>1;
              if (nums[ m ] == target) {
                  return m;
              } else if(target < nums[m]) {
                  return search(nums, target, lo, m-1);
              } else {
                 return search(nums, target, m+1, hi);
              }


           }
}

int searchInsert(int* nums, int numsSize, int target){

       if(target < nums[0]) {
           return 0;
       }
       if(target > nums[numsSize-1]) {
           return numsSize;
       }
       return search(nums, target, 0, numsSize-1);
}

  int main(int argc, char const *argv[]) {

      int nums[] = {1,15,25,26};
      int target = 16;

      int numsSize = sizeof(nums)/sizeof(nums[0]);

      printf("%d\n", searchInsert(nums, numsSize, target));
  }
