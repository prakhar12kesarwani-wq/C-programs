int removeElement(int* nums, int numsSize, int val)
{   
    int j=0;
    for( int i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            nums[j]=nums[i];
            j++;
        }
    }
    return j;
}


/*
  (#27 array) leetcode problem- Remove Element
  leetcode practice link- https://leetcode.com/problems/remove-element/?envType=problem-list-v2&envId=array
*/
