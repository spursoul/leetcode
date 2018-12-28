bool isMonotonic(int* A, int ASize) {
    int i = 0; 
    int j = 1;
    int flag =0;
    while(A[i]==A[j])
    {
        i++;
        j++;
    }
    if(A[i]>A[j])
    {
        while(j<=ASize-1){
            if(A[i]>=A[j])
            {
                i++;
                j++;
            }
            else 
            {   flag=1;
                break;
            } 
        }    
    }
    if(flag==0 && A[i]<A[j])
        while(j<=ASize-1)
        {
            if(A[i]<=A[j])
            {
                i++;
                j++;
            }
            else 
                break;
        }   
    if(j==ASize)
        return true;
    
    return false;

}
