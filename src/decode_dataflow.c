#include "minicpu.h"

/* LOAD (0x01), STORE (0x02), MOV (0x05). */
int decode_execute_dataflow(CPU *cpu, uint8_t op, uint8_t a, uint8_t b) {
    (void)cpu; (void)a; (void)b;
    switch (op) {
    case 0x01: /* TODO: Donart */
        break;
    case 0x02: /* TODO: Donart */
        break;
    case 0x05: /* TODO: Donart */
        break;
    }
    return 0;
}
