#include "DSHeader.h"

void getNext(SString T, char next[])
{
	int i = 1;
	int j = 0;
	next[0] = 0;
	while(i < T[0])
	{
		if(j == 0 || T[i] == T[j])
		{
			i++;
			j++;
			next[i - 1] = j;
		}
		else
			j = next[j - 1];
	}
}

int Index(SString S, SString T, char pos)
{
	int i = pos;
	int j = 1;
	while(i <= S[0] && j <= T[0]) 
	{
		if(S[i] == T[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}
	if(j > T[0])
		return i - T[0];
	else
		return 0;
}