#include <stdio.h> 
#include  <stdlib.h>
int missingNumber(int* nums, int numsSize) {
	int *flag=(int*)calloc(numsSize,sizeof(int));  
    for(int i = 0; i<=numsSize-1;i++) 
    {
        if(nums[i]<numsSize)
             flag[nums[i]]=1;   
    }
    for(int k =0;k<=numsSize-1;k++)
    {   
        if(flag[k]!=1)        
            return k;
    }
    return numsSize;
}
int main(void)
{
	int nums[3];
	scanf("%d",&nums[0]);
	scanf("%d",&nums[1]);
	scanf("%d",&nums[2]);
	int numsSize =3;
	//printf("test");
	printf("%d",missingNumber(nums,numsSize));
	
	
	return 0;
}
