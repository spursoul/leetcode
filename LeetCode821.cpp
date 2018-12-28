/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char* S, char C, int* returnSize) {
    int got,j,i = 0;
    *returnSize = strlen(S);
        
    int *returnArray;
    returnArray=(int*)malloc(sizeof(int)*(*returnSize));
    for( j = 0;j<(*returnSize);j++ )
    {
        if(S[j]==C)
            returnArray[j]=0;
        else
        {
            int t = j;
            int distance=0;
            int leftdis=0;
            while(S[t]!=C)
            {
                if((++t)>=(*returnSize))
                    break;
                distance++;
            }
            
            if(t>0)
            {
                int l = j;
                got = 0;
                while(S[l]!=C)
                {
                    if(l==0)
                        break;
                    l--;
                    leftdis++;
                }
                if(S[l]==C)
                    got=1;
            }
            if( (got==1 && leftdis<distance)  || t==(*returnSize))
                distance=leftdis;
            
            returnArray[j]=distance;
            
        }
    }
    
    return returnArray;
}
