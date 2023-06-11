#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    //mengalokasikan memori untuk array 5 int
    int* p1 = (int*)malloc(5 * sizeof(int));

    //mengisi array
    for (int i = 0; i < 5; i++) {
        p1[i] = (i + 1) * 10;
    }

    //menampilkan array
    printf("%ld bytes allocated. Stored values: ", 5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("%d ", p1[i]);
    }
        
    //realokasi memori
    int* p2 = (int*)realloc(p1, 100 * sizeof(int));

    //menampilkan array
    printf("\n%ld bytes allocated. First 5 Stored values: ", 100 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        printf("%d ", p2[i]);
    }
        
    //membatalkan alokasi memori yang dialokasikan sebelumnya
    free(p2);

    _getch();
    return 0;
}