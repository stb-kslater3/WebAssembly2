
#include <stdio.h>


int main() {
    FILE *img = fopen("7SeriesDriverSide.png", "r");

    if(img == NULL) {
        printf("\nERROR: fopen failed\n");

        return 1;
    }

    char pngSignature[8];
    char reader[4];
    char currChunkType[4];

    size_t offset = 0;

    offset = fread(pngSignature, 1, 8, img);

    int length = 0;

    offset = fread(&length, 4, 1, (img+offset));

    printf("%s", reader);

    fclose(img);

    return 0;
}
