

#include <stdio.h>
#include "image.h"

enum /*untagged*/ { WIDTH = 1, HEIGHT = 1 };

int image_pgm[HEIGHT][WIDTH];
int image_ppm[HEIGHT][WIDTH];
int image_pbm[HEIGHT][WIDTH];


void pgm()
{
    // add a script for calculating width and height of array
    int i, j, temp = 0;

    FILE* pgm_img;
    pgm_img = fopen("image.pgm", "wb");

    fprintf(pgm_img, "P2\n");

    fprintf(pgm_img, "%d %d\n", WIDTH, HEIGHT);

    fprintf(pgm_img, "255\n");
    int cnt = 0;
    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            temp = image_pgm[i][j];
            fprintf(pgm_img, "%d ", temp);
        }
        fprintf(pgm_img, "\n");
    }
    fclose(pgm_img);
}
