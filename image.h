#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#pragma once
#include <stdio.h>
#include <string.h>
#include "vars.h"

void pgm()
{
    
    // add a script for calculating width and height of array
    int i, j, temp = 0;

    FILE* pgm_img;
    pgm_img = fopen(strcat(img, ".pgm"), "wb");

    fprintf(pgm_img, "P2\n");

    fprintf(pgm_img, "%d %d\n", WIDTH, HEIGHT);

    fprintf(pgm_img, "255\n");
    int cnt = 0;
    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            temp = image[i][j];
            fprintf(pgm_img, "%d ", temp);
        }
        fprintf(pgm_img, "\n");
    }
    fclose(pgm_img);
}


void pbm()
{
    // add a script for calculating width and height of array
    int i, j, temp = 0;

    FILE* pbm_img;
    pbm_img = fopen(strcat(img, ".pbm"), "wb");

    fprintf(pbm_img, "P1\n");

    fprintf(pbm_img, "%d %d\n", WIDTH, HEIGHT);

    fprintf(pbm_img, "1\n");
    int cnt = 0;
    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            temp = image[i][j];
            fprintf(pbm_img, "%d ", temp);
        }
        fprintf(pbm_img, "\n");
    }
    fclose(pbm_img);
}


void ppm()
{
    // add a script for calculating width and height of array
    int i, j, temp = 0;

    FILE* ppm_img;
    ppm_img = fopen(strcat(img, ".ppm"), "wb");

    fprintf(ppm_img, "P3\n");

    fprintf(ppm_img, "%d %d\n", WIDTH, HEIGHT);

    fprintf(ppm_img, "255\n");
    int cnt = 0;
    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            temp = image[i][j];
            fprintf(ppm_img, "%d ", temp);
        }
        fprintf(ppm_img, "\n");
    }
    fclose(ppm_img);
}
