#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include "image.h"
#include "vars.h"

int main()
{
	printf("Enter the name of the image: \n");
	scanf_s("%s", &img);
	fprintf(stdout, "select an image type to convert");
	return 0;
}