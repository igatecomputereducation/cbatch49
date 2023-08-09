#include<stdio.h>
int main()
{
	char x[50],ch;
	int i,vc=0,cc=0,dc=0,spc=0,sym=0,wc=0;
	
	printf("Enter a line of text\n");
	gets(x);
	
	if(x[0]=='\0')
		wc=0;
	else
		wc=1;
		
	for(i=0;x[i]!='\0';i++)
	{
		ch=x[i];
		
		if(ch>='A' && ch<='Z')
			ch=ch+32;
			
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			vc++;
		else if(ch>='b' && ch<='z')
			cc++;
		else if(ch>='0' && ch<='9')
			dc++;
		else if(ch==' ')
		{
			spc++;
			if(x[i+1]!=' ')
				wc++;
		}
		else
			sym++;
	}	
	
	if(vc>0)
		printf("Vowels %i\n",vc);
	if(cc>0)
		printf("Consonents %i\n",cc);
	if(dc>0)
		printf("Digits %i\n",dc);
	if(spc>0)
		printf("Spaces %i\n",spc);
	if(sym>0)
		printf("Symbols %i\n",sym);
	if(wc>0)
		printf("words %i",wc);

	return 0;
}
