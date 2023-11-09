#define _GNU_SOURCE

#include <stdio.h>
#include <stdint.h>
#include <dlfcn.h>

static void* (*real_malloc)(size_t)=NULL;

static void mtrace_init(void)
{
    real_malloc = dlsym(RTLD_NEXT, "malloc");
    if (NULL == real_malloc) {
        fprintf(stderr, "Error in `dlsym`: %s\n", dlerror());
    }
}

void *malloc(size_t size)
{
    if(real_malloc==NULL) {
        mtrace_init();
    }

    fprintf(stderr, "I WILL BE HERE\n");

    fprintf(stderr, "Size requested is: %ld\n", size);

    void *p = NULL;
    p = real_malloc(size);

    fprintf(stderr, "Address returned is: %p\n\n", p);
 
    char* temp = (char*) p;

    for(int i = 0; i < size; i++){
        *(temp + i) = 0xBF;
        // fprintf(stderr, "%08x - %x\n", (uint64_t) (temp + i), (uint64_t) (*(temp + i)));
    }

    return p;
}