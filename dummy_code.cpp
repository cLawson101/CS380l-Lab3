#include <iostream>

#include <sys/resource.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdio.h>

#include <chrono>

int main(int argc, char* argv[])
{
    using namespace std;

    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    auto t1 = high_resolution_clock::now();
    
    printf("IN DUMMY CODE\n");
    printf("Argc = %d\n", argc);

    for(int i = 0; i < argc; i++){
        printf("Argv[%d]: %s\n", i, argv[i]);
    }

    void* temp = malloc(35);
    printf("Get past the malloc\n");


    uint64_t dummy_var = 0;
    for(int i = 0; i < 0xdeadbe; i++){
        dummy_var++;
        
    }

    auto t2 = high_resolution_clock::now();
    duration<double, std::milli> ms_double = t2 - t1;
    printf("\nTotal time(s): %f\n", ms_double.count() / 1000);
    return 0;
}
