#include <stdio.h> 
int* twoSum(int* nums, int numsSize, int target) {

    int *num = (int *)malloc(sizeof(int)*2);
    //malloc分配和可以当做数组使用      动态数组 
    for(int a =0;a<numsSize;a++)
    {
        for(int b = a+1 ;b<numsSize;b++)
        {
            if(nums[a]+nums[b]==target)
            {
                num[0]=a;
                num[1]=b;
                
                break;
            }
        }
    }
    
    return num;
	}

