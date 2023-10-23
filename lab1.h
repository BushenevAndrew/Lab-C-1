#ifndef LAB1_H
#define LAB1_H
#include <stdio.h>
#include <stdlib.h>

enum ESort
{
    E_UP = 0,
    E_DOWN
};

void print(int *mass, size_t size);
void sort_mass(int *mass, size_t size, enum ESort eSort);
float get_median(int *mass, size_t size);
void print_moda(int *mass, size_t size);
float get_average(int *mass, size_t size);
int get_max(int *mass, size_t size);
int get_min(int *mass, size_t size);
int get_range(int *mass, size_t size);

#endif