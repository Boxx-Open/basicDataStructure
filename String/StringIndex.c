#include <stdio.h>
#include "DSHeader.h"

void main()
{
	SString S = "0ksdhfkhksdhfkjdvbhjsdajf";
	SString T = "0hks";
	S[0] = 24;
	T[0] = 3;
	char pos = 1;
	char next[4];
	char indexNormal = Index(S, T, pos);
	getNext(T, next);
	char indexKMP = KMPIndex(S, T, pos, next);
	printf("%d %d", indexNormal, indexKMP);
}