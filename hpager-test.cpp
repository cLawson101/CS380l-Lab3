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

    uint64_t a00  [4096 * 2];
    uint64_t a01  [4096 * 2];
    uint64_t a02  [4096 * 2];
    uint64_t a03  [4096 * 2];
    uint64_t a04  [4096 * 2];
    uint64_t a05  [4096 * 2];
    uint64_t a06  [4096 * 2];
    uint64_t a07  [4096 * 2];
    uint64_t a08  [4096 * 2];
    uint64_t a09  [4096 * 2];
    uint64_t a10  [4096 * 2];
    uint64_t a11  [4096 * 2];
    uint64_t a12  [4096 * 2];
    uint64_t a13  [4096 * 2];
    uint64_t a14  [4096 * 2];
    uint64_t a15  [4096 * 2];
    uint64_t a16  [4096 * 2];
    uint64_t a17  [4096 * 2];
    uint64_t a18  [4096 * 2];
    uint64_t a19  [4096 * 2];
    uint64_t a20  [4096 * 2];
    uint64_t a21  [4096 * 2];
    uint64_t a22  [4096 * 2];
    uint64_t a23  [4096 * 2];
    uint64_t a24  [4096 * 2];
    uint64_t a25  [4096 * 2];
    uint64_t a26  [4096 * 2];
    uint64_t a27  [4096 * 2];
    uint64_t a28  [4096 * 2];
    uint64_t a29  [4096 * 2];
    uint64_t a30  [4096 * 2];
    uint64_t a31  [4096 * 2];
    uint64_t a32  [4096 * 2];
    uint64_t a33  [4096 * 2];
    uint64_t a34  [4096 * 2];
    uint64_t a35  [4096 * 2];
    uint64_t a36  [4096 * 2];
    uint64_t a37  [4096 * 2];
    uint64_t a38  [4096 * 2];
    uint64_t a39  [4096 * 2];
    uint64_t a40  [4096 * 2];
    uint64_t a41  [4096 * 2];
    uint64_t a42  [4096 * 2];
    uint64_t a43  [4096 * 2];
    uint64_t a44  [4096 * 2];
    uint64_t a45  [4096 * 2];
    uint64_t a46  [4096 * 2];
    uint64_t a47  [4096 * 2];
    uint64_t a48  [4096 * 2];
    uint64_t a49  [4096 * 2];

    for(int i = 0; i < 4096 * 2; i++){
        a00[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a01[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a02[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a03[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a04[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a05[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a06[i] = i;
    }
    
    for(int i = 0; i < 4096 * 2; i++){
        a07[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a08[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a09[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a10[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a11[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a12[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a13[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a14[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a15[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a16[i] = i;
    }
    
    for(int i = 0; i < 4096 * 2; i++){
        a17[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a18[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a19[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a20[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a21[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a22[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a23[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a24[i] = i;
    }

    for(int i = 0; i < 4096 * 2; i++){
        a25[i] = i;
    }

    auto t2 = high_resolution_clock::now();
    duration<double, std::milli> ms_double = t2 - t1;
    printf("\nTotal time(s): %f\n", ms_double.count() / 1000);

    return 0;
}
