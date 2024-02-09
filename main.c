#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include "image.h"
#include "vars.h"
// Before running main.c, make sure that the array in the image.h file is updated with the image data and the width and height of the image

int main()
{
	int height_s = sizeof(image);
	int width_s = sizeof(image[0]);
	printf("IMPORTANT: update the image array with the image data in the vars.h file\nthis should include the full array and the width and height of the image\n\n");
	printf("Enter the name of the image: \n");

	scanf_s("%50s", &img, 50);
	if (img == NULL)
	{
		fprintf(stderr, "Invalid input");
	}
	else if (sizeof(img) > 50)
	{
		fprintf(stderr, "The image name is too long");
	}
	else
	{
		fprintf(stdout, "The image name is now: %s\n\n", img);
	}

	fprintf(stdout, "select an image type to convert by entering one of the following numbers: 1 = pbm, 2 = pgm, 3 = ppm\n");
	int tmp;
	scanf_s("%d", &tmp);
		if (tmp == 1)
		{
			pbm();
		}
		else if (tmp == 2)
		{
			pgm();
		}
		else if (tmp == 3)
		{
			ppm();
		}
		else
		{
			fprintf(stderr, "Invalid input");
		}
	return 0;
}
