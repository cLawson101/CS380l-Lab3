#include <iostream>

int main(int argc, char* argv[])
{
    using namespace std;
    
    printf("IN DUMMY CODE\n");
    printf("Argc = %d\n", argc);

    for(int i = 0; i < argc; i++){
        printf("Argv[%d]: %s\n", i, argv[i]);
    }

    void* temp = malloc(35);
    printf("Get past the malloc\n");

    return 0;
}
