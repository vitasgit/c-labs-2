
#include <stdio.h>

char *s="hello";
char *s1="hello";
char S[]="hello";



int main(int argc, char **argv)
{
	printf("%p %p %p\n",s,s1,S);
	S[0]='T';
	puts(S);
//	s[0]='T';
//	puts(s);
		
	return 0;
}

