#include <stdio.h>
int main()
{
	char arr[100];
	int i;
	int A = 0, a = 0, s = 0, n = 0, o = 0;
	printf("请输入一段字符\n");
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
	printf("大写字母有	%d	个\n", A);
	printf("小写字母有	%d	个\n", a);
	printf("空格有		%d	个\n", s);
	printf("数字有		%d	个\n", n);
	printf("其他字符有	%d	个\n", o);
	return 0;
}