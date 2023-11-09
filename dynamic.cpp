#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#define SIZE 64

#define MAGIC 0xBF // (can be any value you want)

int main() {
unsigned char* mem = (unsigned char*)malloc(SIZE);
printf("MALLOC SUCCEEDED\n");
for(int i = 0; i < SIZE; i++)
    assert(mem[i] == MAGIC);
}