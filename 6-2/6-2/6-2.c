#include <stdio.h>
int main()
{
	char arr[3][100];
	int i, j;
	int A = 0, a = 0, s = 0, n = 0, o = 0;
	printf("请输入一段字符\n");
	for (i = 0; i < 3; i++)gets(arr[i]);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (arr[i][j] == '\0')break;
			else if (arr[i][j] >= 'A'&&arr[i][j] <= 'Z')A++;
			else if (arr[i][j] >= 'a'&&arr[i][j] <= 'z')a++;
			else if (arr[i][j] == ' ')s++;
			else if (arr[i][j] >= '0'&&arr[i][j] <= '9')n++;
			else o++;
		}
	}
	printf("大写字母有	%d	个\n", A);
	printf("小写字母有	%d	个\n", a);
	printf("空格有		%d	个\n", s);
	printf("数字有		%d	个\n", n);
	printf("其他字符有	%d	个\n", o);
	return 0;
}