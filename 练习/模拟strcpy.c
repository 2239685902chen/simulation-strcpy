#include <stdio.h>
void copy(char* q, char* w)
{
	int e = 0;
	while (w[e] != '\0')//��Դͷ\0ǰ�����ݸ��Ƶ�Ŀ�ĵ�
	{
		q[e] = w[e];
		e++;
	}
	q[e] = w[e];//��Դͷ��\0���Ƶ�Ŀ�ĵ�
}
int main()
{
	char q []= "#################";
	char w []= "chen";
	copy(q, w);
	printf("%s\n", q);
	return 0;
}