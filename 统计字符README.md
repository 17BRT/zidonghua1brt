#include<stdio.h>
#include<stdlib.h>
 
int main(){
 
	int n,i=0,alpha=0,Alpha=0,digit=0,space=0,other=0;
 
	char *str;
 
   //输入N，确定字符串长度是多少；然后申请相应长度的地址空间并赋值给str。
	scanf("%d",&n);
	//   消去scanf函数 遗留下来的换行符 对统计的干扰
	getchar();
 
	if((str = (char *)malloc(n * sizeof(char))) == NULL){
	
		printf("Not able to allocate memory");
		exit(1);
	}
 
   //输入字符串。这里要注意，字符输入函数的选取，scanf因为不能接受空格，会导致最终统计结果的不准确，故在此选用gets()/getchar();
	
	//也可以使用这个方式输入字符串
		while(i<=n){
	
		*(str+i) = getchar();
 
		i++;
	}
	
	//  也可以根据输入的字符个数循环遍历字符串
 
	  	for(i=0;i<n;i++){
	
				if(*(str+i) >= 'A' && *(str+i) <= 'Z' ) {  //大小字母
					 Alpha ++;
				}else if(  *(str+i) >= 'a' && *(str+i) <= 'z'  ){  //小写字母
					 alpha ++;
				}else if( *(str+i) >= '0' && *(str+i) <= '9' ){   // 数字
					  digit ++;
				}else if( *(str+i) == ' ' ){   //空格
					  space ++;
				}else{  //其他字符
					other ++;
				}
	   }
	
	
 
	printf("alpha = %d \n  Alpha = %d\n  digit = %d \n  space=%d\n other=%d \n ",alpha,Alpha,digit,space,other);
 
	return 0;
 
}
