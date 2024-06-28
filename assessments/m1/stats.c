/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  print_statistics(test, SIZE);

}

    void print_statistics(unsigned char* data, unsigned int size) {
    printf("Statistics:\n");
    printf("Maximum: %u\n", find_maximum(data, size));
    printf("Minimum: %u\n", find_minimum(data, size));
    printf("Mean: %u\n", find_mean(data, size));
    printf("Median: %u\n", find_median(data, size));
    }

    void print_array(unsigned char* data, unsigned int size) {
    printf("Array: ");
    for(int i = 0; i < size; i++) {
    printf("%u ", data[i]);
    }
    printf("\n");
    }

    unsigned char find_median(unsigned char* data, unsigned int size) {
    sort_array(data, size);
    if (size % 2 == 0) return data[size/2];
    else return data[(size+1)/2]
    }

    unsigned char find_mean(unsigned char* data, unsigned int size) {
    unsigned int sum = 0;
        for(int i = 0; i < size; i++) {
            sum += data[i];
        }
        return (unsigned char) (sum/size);
    }

    unsigned char find_maximum(unsigned char* data, unsigned int size) {
    unsigned char max = data[0];
    for(int i = 1; i < size; i++) {
        if(max < data[i])   max = data[i];
    }
    return max;
    }

    int find_minimum(unsigned char* data, unsigned int size) {
    unsigned char min = data[0];
        for(int i = 1; i < size; i++) {
            if(min > data[i])   min = data[i];
        }
        return min;
        }

    void sort_array(unsigned char* data, unsigned int size) {
    unsigned char swap = 0;
    for(int i = size - 1 ; i > 0; i--) {
        for(int j = 0; j < (i - 1); j++) {
        if (data[j] < data[j+1] {
            swap = data[j];
            data[j] = data[j+1];
            data[j+1] = swap;
        }
    }
    }
    }

    }
