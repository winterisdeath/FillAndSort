#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
    srand(time(NULL));
    for (int i=0; i<argc; i++) {
    	printf("%s\n", argv[i]);
    }
    if (argc!=2) printf("Error, too many arguments!\n");
    char FileName[20];
    strcpy(FileName, argv[1]);
//    strcpy(FileName, "out.txt");
    printf("FileName\n");
    FILE *OutFile;
    if ((OutFile=fopen(FileName, "w")) == NULL) {
        printf("Error, file not opened!");
    }
    int GenerationCount=32000;
    for (short i=0; i<GenerationCount; i++) {
        int Number = rand();
        fprintf(OutFile, "%d\n", Number);
    }
    printf("File was filled\n");
    return 0;
}
