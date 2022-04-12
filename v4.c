# zidonghua1brt
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="1-2.5*4+10.2/5.1";
	char str2[100];
	int str3=-1,i;
	for(i=0;i<=strlen(str1);i++)
	{
		if(str1[i]=='*')
		{
			int left=str2[str3]-'0';
			int right=str1[i+1]-'0';
			str2[str3]=left*right+'0';
			i++;
		}
		else if(str1[i]=='/')
		{
			int left=str2[str3]-'0';
			int right=str1[i+1]-'0';
			str2[str3]=left/right-'0';
			i++;
		}
		else str2[++str3]=str1[i];
	}
	int ran=str2[0]-'0';
	for(i=0;i<strlen(str2);i++)
	{
		if(str2[i]=='*')
			ran+=str2[++i]-'0';
		else if(str2[i]=='-')
			ran-=str2[++i]-'0';
	}
	printf("ran=%d\n",ran);
	return 0;
}
