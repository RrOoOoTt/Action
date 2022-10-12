#include<stdio.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	int a=0,b=0;
	fp=fopen("add.in","r");
	fscanf(fp,"%d%d",&a,&b);
	int sum=0;
	sum=a+b;
//	printf("%d %d\n",*(argv[0]),*(argv[1]));
//	sum=*(argv[2])+*(argv[1])-96;
	printf("%d\n",sum);
	fclose(fp);
	return 0;
}
