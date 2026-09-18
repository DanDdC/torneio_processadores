#include "minicpu.h"

int main(void) {
    CPU cpu;

    cpu_init(&cpu);
    load_program(&cpu);
    run(&cpu);

    return 0;
}
