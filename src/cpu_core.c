#include "minicpu.h"

void cpu_init(CPU *cpu) {
    for (int i = 0; i < MEM_SIZE; i++) cpu->mem[i] = 0;
    for (int i = 0; i < NUM_REGS; i++) cpu->reg[i] = 0;
    cpu->pc = 0;
    cpu->zf = 0;
    cpu->running = 1;
    cpu->ciclo = 0;
}

void fetch(CPU *cpu, uint8_t *op, uint8_t *a, uint8_t *b) {
    *op = cpu->mem[cpu->pc];
    *a  = cpu->mem[cpu->pc + 1];
    *b  = cpu->mem[cpu->pc + 2];
    cpu->pc += 3;
}
