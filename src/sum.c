#include "sum.h"
#include "stdio.h"
#include <stdint.h>

void pixel_sum(uint8_t first[PIXEL_LENGTH], uint8_t second[PIXEL_LENGTH]) {
    int i;
    for (i = 0; i < PIXEL_LENGTH; i++) {
        int tmp = first[i] + second[i];
        first[i] = tmp <= COLOR_MAX ? tmp : COLOR_MAX; //ternary operator for saturated sum
    }
}

void log_pixel(uint8_t pixel[PIXEL_LENGTH]) {
    printf("Got dis pixel:\n");
    for (int i = 0; i < PIXEL_LENGTH; i++) {
        printf("%d\n", pixel[i]);
    }
} // function for logging pixels to console