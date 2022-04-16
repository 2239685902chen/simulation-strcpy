#include <stdio.h>
void copy(char* q, char* w)
{
	int e = 0;
	while (w[e] != '\0')//把源头\0前的内容复制到目的地
	{
		q[e] = w[e];
		e++;
	}
	q[e] = w[e];//把源头的\0复制到目的地
}
int main()
{
	char q []= "#################";
	char w []= "chen";
	copy(q, w);
	printf("%s\n", q);
	return 0;
}