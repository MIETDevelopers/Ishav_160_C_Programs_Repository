//A C program to Program for reading and writing the student marks data to files.				© Ishav Verma 21/March/2021
#include <stdio.h>
#include <stdlib.h>
struct s {
	char text[1000];
	};
 int main(){
	struct s a[1000],b[1000];
	FILE *fptr;
	int i;
	fptr=fopen("E:\\Softwares\\C_Programs\\Ishav_160_C_Programs_Repository\\030_ReadWriteFile.txt","wb");
	for (i=0;i<1;++i) {
		fflush(stdin);
		printf("Enter Text: ");
		gets(a[i].text);
	}
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("E:\\Softwares\\C_Programs\\Ishav_160_C_Programs_Repository\\030_ReadWriteFile.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");
	for (i=0;i<1;++i) {
		printf("%s\n",b[i].text);
	}
	fclose(fptr);
}