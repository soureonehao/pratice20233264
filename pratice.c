#include<stdio.h>
void main() {
	char arr[26][5] =
	  { ".-","-...","-.-.","-..",".","..-.","--.",
		"....","..",".---","-.-",".-..","--","-.",
		"---",".--.","--.-",".-.","...","-","..-",
		"...-",".--","-..-","-.--","--.." }, arr2[80];		//定义并初始化字符串变量，输入摩斯密码对应表
	int i, j;	//定义累加器
	printf("请输入您名字的拼音：");
	gets(arr2);		//输入拼音
	printf("您的名字拼音的摩斯密文为：");
	for (i = 0; i < 80; i++) {
		if (arr2[i] > 64 && arr2[i] < 91) {	//判断当输入是大写时
			for (j = 0; j < 5; j++) {
				printf("%c", arr[arr2[i] - 65][j]);	//这里arr数组下标指的是但大写字母时 ascll码值就成1~26与arr数组下标相对应从而输出对应摩斯密码
				if (j == 4)
					printf(" ");
			}
		}
		else if (arr2[i] > 96 && arr2[i] < 123) {
			for (j = 0; j < 5; j++) {
				printf("%c", arr[arr2[i] - 97][j]);
				if (j == 4)
					printf(" ");
			}
		}
		else if (arr2[i] == 32) {		//这里当输入一个空格时，输出一个空格
			
					printf("  ");
			}
	}
}