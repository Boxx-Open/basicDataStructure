#include "DSHeader.h"

void getNext(SString T, char next[])
{
	int i = 1;
	int j = 0;
	next[1] = 0;
	while(i < T[0])
	{
		if(j == 0 || T[i] == T[j])
		{
			i++;
			j++;
			next[i] = j;
		}
		else
			j = next[j];
	}
}

char KMPIndex(SString S, SString T, char pos, char next[])
{
	char i = pos;
	char j = 1;
	while(i <= S[0] && j <= T[0])
	{
		if(j == 0 || S[i] == T[j])
		{
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if(j > T[0])
		return i - T[0];
	else
		return 0;
}

char Index(SString S, SString T, char pos)
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
