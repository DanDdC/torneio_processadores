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

static void decode_execute(CPU *cpu, uint8_t op, uint8_t a, uint8_t b) {
    if (decode_execute_dataflow(cpu, op, a, b)) return;
    if (decode_execute_arith(cpu, op, a, b)) return;
    if (decode_execute_control(cpu, op, a, b)) return;
}

void run(CPU *cpu) {
    while (cpu->running && cpu->pc < MEM_SIZE) {
        uint8_t op, a, b;
        cpu->ciclo++;
        fetch(cpu, &op, &a, &b);
        decode_execute(cpu, op, a, b);
        trace(cpu, op, a, b);
    }
}
