#include <lab1.h>
#include <math.h>


void sort_mass(int *mass, size_t size, enum ESort eSort) {
    if (eSort == 0) {
        for(unsigned long long int i = 0 ; i < size - 1; i++) { 
           for(unsigned long long int j = 0 ; j < size - i - 1 ; j++) {  
               if(mass[j] > mass[j+1]) {           
                  int tmp = mass[j];
                  mass[j] = mass[j+1] ;
                  mass[j+1] = tmp; 
               }
            }
        }
    } else {
        for(unsigned long long int i = 0 ; i < size - 1; i++) { 
           for(unsigned long long int j = 0 ; j < size - i - 1 ; j++) {  
               if(mass[j] < mass[j+1]) {           
                  int tmp = mass[j];
                  mass[j] = mass[j+1] ;
                  mass[j+1] = tmp; 
               }
            }
        }
    }
}


int get_max(int *mass, size_t size) {
    enum ESort type;
    type = E_UP;
    sort_mass(*mass, size, type);
    return mass[size - 1];
}

int get_min(int *mass, size_t size) {
    enum ESort type;
    type = E_UP;
    sort_mass(*mass, size, type);
    return mass[0];
}

int get_range(int *mass, size_t size) {
    return (get_max(*mass, size) - get_min(*mass, size));
}


int len(int n) {
    if (n < 0) {
        n *= -1;
    }
    int i;
    for(i = 1; n / (int)pow(10, i) == 0; i++) {
        ;
    }
    return i;
}

void print(int *mass, size_t size) {
    enum ESort type;
    type = E_UP;
    sort_mass(*mass, size, type);
    int l = len(get_max(*mass, size));
    for(unsigned long long int i = 0; i < size; i++) {
        int a = mass[i];

        for (int j = 0; j < (l - len(a) - 1); j++) {
            printf(" ");
        }

        if (mass[i] > 0) {
            printf("+");
        } else {
            printf("-");
        }

        printf("%i", mass[i]);

        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}


float get_average(int *mass, size_t size) {
    long int summ = 0;
    for(unsigned long long int i = 0; i < size; i++) {
        summ += mass[i];
    }
    return (float)summ/size;
}

float get_median(int *mass, size_t size) {
    if (size % 2 == 1) {
        return mass[size / 2 + 1];
    } else {
        int a = mass[size / 2];
        int b = mass[size / 2 + 1];
        return (float)(a + b) / 2;
    }
}

void print_moda(int *mass, size_t size) {
    
}