/*��169 ������
  �ҵ������г��ִ����������鳤��һ�����
  Ħ��ͶƱ������������ ֻ��һ�����ĳ��ȿ��Գ������鳤�ȵ�һ�� ���ÿһ��ͶƱ �ҳ�һ�Բ�ͬ��Ԫ�� ɾ�� ��������޷�ͶƱ �������Ϊ�� ��û���κ������ֵĴ����������鳤��һ�� ����ʣ�µ�����Ϊ���� 
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
