#include <stdio.h>
int main()
{
	char arr[100];
	int i;
	int A = 0, a = 0, s = 0, n = 0, o = 0;
	printf("������һ���ַ�\n");
	gets(arr);
	for (i = 0; i < 100; i++)
	{
		if (arr[i] == '\0')break;
		else if (arr[i] >= 'A'&&arr[i] <= 'Z')A++;
		else if (arr[i] >= 'a'&&arr[i] <= 'z')a++;
		else if (arr[i] == ' ')s++;
		else if (arr[i] >= '0'&&arr[i] <= '9')n++;
		else o++;
	}
	printf("��д��ĸ��	%d	��\n", A);
	printf("Сд��ĸ��	%d	��\n", a);
	printf("�ո���		%d	��\n", s);
	printf("������		%d	��\n", n);
	printf("�����ַ���	%d	��\n", o);
	return 0;
}