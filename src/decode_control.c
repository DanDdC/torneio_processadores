#include "minicpu.h"

/* JMP (0x07), JZ (0x08), JNZ (0x09), HALT (0x0A). */
int decode_execute_control(CPU *cpu, uint8_t op, uint8_t a, uint8_t b) {
    (void)cpu; (void)a; (void)b;
    switch (op) {
    case 0x07: /* TODO: AIREL */
        break;
    case 0x08: /* TODO: AIREL */
        break;
    case 0x09: /* TODO: AIREL */
        break;
    case 0x0A: /* TODO: AIREL */
        break;
    }
    return 0;
}
