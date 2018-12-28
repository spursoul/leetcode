/*·169 求众数
  找到数组中出现次数大于数组长度一半的数
  摩尔投票法：在数组中 只有一个数的长度可以超过数组长度的一半 因此每一轮投票 找出一对不同的元素 删掉 至到最后无法投票 如果数组为空 则没有任何数出现的次数超过数组长度一半 否则剩下的数即为众数 
*/
int majorityElement(int* nums, int numsSize) {
    
    int count = 0;
    int majority=-1;
    for(int i = 0 ;i<=numsSize-1 ;i++)
    {
        if (count == 0)
        {
            majority = nums[i];
            count ++;
        }
        else{
            if(majority==nums[i])
                count ++;
            else 
                count --;
        }
    }
    
    return majority;
