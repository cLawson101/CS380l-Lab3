#include <iostream>

#include <sys/resource.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>

#include <chrono>

#define PAGE_SIZE 4096

int main(int argc, char* argv[])
{
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    auto t1 = high_resolution_clock::now();

    char* p = (char*) malloc ( 5 * PAGE_SIZE);

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }
    
    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    free(p);

    p = (char*) malloc ( PAGE_SIZE * PAGE_SIZE);

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(1){
        printf("RAN A TEST\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    if(0){
        printf("RAN A TEST I SHOULDN'T HAVE\n");
        for(int i = 0; i < PAGE_SIZE * PAGE_SIZE; i++){
            *(p+i) = (i % 26) + 97;
        }
    }

    auto t2 = high_resolution_clock::now();
    duration<double, std::milli> ms_double = t2 - t1;
    printf("\nTotal time(s): %f\n", ms_double.count() / 1000);

    return 0;
}
