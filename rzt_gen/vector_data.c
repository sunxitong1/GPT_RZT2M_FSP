/* generated vector source file - do not edit */
#include "bsp_api.h"
/* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
#if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
                        [122] = gpt_counter_overflow_isr, /* GPT0_OVF (GPT0 GTCNT overflow (GTPR compare match)) */
            [123] = gpt_counter_underflow_isr, /* GPT0_UDF (GPT0 GTCNT underflow) */
        };
        #endif
