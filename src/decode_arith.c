#include "minicpu.h"

/* ADD (0x03), SUB (0x04), CMP (0x06) + flag ZF. */
int decode_execute_arith(CPU *cpu, uint8_t op, uint8_t a, uint8_t b) {
    (void)cpu; (void)a; (void)b;
    switch (op) {
    case 0x03: /* TODO: REINICIO */
        break;
    case 0x04: /* TODO: REINICIO */
        break;
    case 0x06: /* TODO: REINICIO */
        break;
    }
    return 0;
}
