#include<stdio.h>

int main()
{

       int num1 = 0x44434241;
	int num2 = 0x68676665;

	FILE *fp = fopen("sample1.txt","wb");
	fwrite(&num1,4,1,fp);
        fwrite(&num2,4,1,fp);
	fclose(fp);

	return 0;
}
