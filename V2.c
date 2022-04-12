
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="2*2/4*1/1*2*3/2";
	int ran=str[0]-'0';
	for(int i=1;i<strlen(str);i++)
	{
		if(str[i]=='*')
		{
			int right=str[i+1]-'0';
			ran*=right;
			i++;
		}
		else if(str[i]=='/')
		{
			int right=str[i+1]-'0';
			ran/=right;
			i++;
		}
	}
	printf("ran=%d\n",ran);
	return 0;
}
