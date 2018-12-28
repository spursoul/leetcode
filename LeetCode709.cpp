#include <stdio.h>
char* toLowerCase(char* str) {
    /*int i ;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]<'A' || str[i]>'z')
            continue;
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
    return str;*/
    int i = 0;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        i++;
    }
    
    return str;
}
int main (void)
{
	int cnt = 0 ;
	char str[4]={'a','b','c','d'};
	toLowerCase(str);
	while(str[cnt]!='\0'){
		printf("%c",str[cnt]);/*数组的最后一个数为字符'\0'  可由此判断数组是否到最后一个元素*/
		cnt++;
	}
	
	return 0;
 } 
