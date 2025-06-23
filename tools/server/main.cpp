#include <iostream>

extern "C" int llama_server_main(int argc, char * argv[]);

int main(int argc, char * argv[]) {
    return llama_server_main(argc, argv);
}
