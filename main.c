#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include "image.h"
#include "vars.h"

int main()
{
	printf("Enter the name of the image: \n");
	scanf_s("%50s", &img, 50);
	printf("Enter the image array in the form of an array of depth 2, e.g. {{1, 0, 0}}");
	int input_image;
	scanf_s("%d", &input_image);
	int* ptr_image = &image;
	*ptr_image = input_image;

	int height_s = sizeof(image);
	int width_s = sizeof(image[0]);

	fprintf(stdout, "select an image type to convert by entering one of the following numbers: 1 = pbm, 2 = pgm, 3 = ppm");
	int temp;
	scanf_s("%d", &temp);
		if (temp == 1)
		{
			pbm(width_s, height_s);
		}
		else if (temp == 2)
		{
			pgm(width_s, height_s);
		}
		else if (temp == 3)
		{
			ppm(width_s, height_s);
		}
		else
		{
			fprintf(stderr, "Invalid input");
		}
	return 0;
}