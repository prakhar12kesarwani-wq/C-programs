int removeDuplicates(int* nums, int numsSize) 
{
    int j=0;
  for(int i=1;i<numsSize;i++)
  {
   if(nums[i]!=nums[j])
    {
        j++;
        nums[j]=nums[i];
    }
  }
  return j+1;  
}

/*
  (#26 array) leetcode problem- Remove duplicate elements from sorted array.
  leetcode practice link- https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/
  
