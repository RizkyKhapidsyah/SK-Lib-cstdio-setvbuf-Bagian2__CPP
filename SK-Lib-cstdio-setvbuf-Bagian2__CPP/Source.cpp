#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

#define SIZE 1024

using namespace std;

int main() {
    char buffer[SIZE] = "...";
    char str[] = "This is first line\nThis is second line";
    FILE* fp = fopen("test.txt", "wb+");

    /* no buffering, buffer remains unchanged */
    setvbuf(fp, buffer, _IONBF, SIZE);
    fwrite(str, sizeof(str), 1, fp);
    cout << buffer << endl;

    /* line buffering, only a single line is buffered */
    setvbuf(fp, buffer, _IOLBF, SIZE);
    fwrite(str, sizeof(str), 1, fp);
    cout << buffer << endl;

    /* full buffering, all the contents are buffered */
    setvbuf(fp, buffer, _IOFBF, SIZE);
    fwrite(str, sizeof(str), 1, fp);
    cout << buffer << endl;

    fclose(fp);

    _getch();
    return 0;
}