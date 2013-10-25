#include <stdio.h>
#include "DSHeader.h"

void main()
{
	SString S = "0abaabcac";
	S[0] = 8;
	SString T = "0ac";
	T[0] = 2;
	char pos = 1;
	char i = 1;
	char finalPos = Index(S, T, pos);
	printf("%d\n", finalPos);
	char next[8];
	getNext(S, next);
	for(i = 0; i < 8; i++)
	{
		printf("%d\n", next[i]);
	}
}