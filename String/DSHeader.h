#define MAXLENGTH 255
typedef unsigned char SString[MAXLENGTH + 1];
void getNext(SString T, char next[]);
char Index(SString S, SString T, char pos);
char KMPIndex(SString S, SString T, char pos, char next[]);