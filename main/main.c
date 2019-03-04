#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include "sum.h"

int main()
{
#ifdef MAIN_EXECUTABLE_TEST
    printf("Test mode\n");
    time_t start = clock();
#else // MAIN_EXECUTABLE_TEST
    printf("War mode\n");
#endif

    srand(time(NULL));
    uint8_t pixel1[PIXEL_LENGTH] = {0,rand(),rand(),rand()};
    uint8_t pixel2[PIXEL_LENGTH] = {0,rand(),rand(),rand()};
    printf("Initial pixels:\n");
    log_pixel(pixel1, PIXEL_LENGTH);
    log_pixel(pixel2, PIXEL_LENGTH);
    pixel_sum(pixel1, pixel2, PIXEL_LENGTH);
    printf("Result:\n");
    log_pixel(pixel1, PIXEL_LENGTH);

#ifdef MAIN_EXECUTABLE_TEST
    time_t end = clock();
    printf("elapsed %d\n", end - start);
#endif
    return 0;

}
