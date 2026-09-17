#ifndef MINICPU_H
#define MINICPU_H

#include <stdint.h>

#define MEM_SIZE 256
#define NUM_REGS 4

typedef struct {
    uint8_t mem[MEM_SIZE];
    uint8_t reg[NUM_REGS];
    uint16_t pc;
    uint8_t zf;
    int running;
    int ciclo;
} CPU;

void cpu_init(CPU *cpu);
void fetch(CPU *cpu, uint8_t *op, uint8_t *a, uint8_t *b);
void run(CPU *cpu);

int decode_execute_dataflow(CPU *cpu, uint8_t op, uint8_t a, uint8_t b);

int decode_execute_arith(CPU *cpu, uint8_t op, uint8_t a, uint8_t b);

int decode_execute_control(CPU *cpu, uint8_t op, uint8_t a, uint8_t b);

void load_program(CPU *cpu);

void trace(CPU *cpu, uint8_t op, uint8_t a, uint8_t b);

#endif
