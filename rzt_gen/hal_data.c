/* generated HAL source file - do not edit */
#include "hal_data.h"

gpt_instance_ctrl_t g_timer2_ctrl;
#if 1
const gpt_extended_pwm_cfg_t g_timer2_pwm_extend =
{ .trough_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT2_UDF)
    .trough_irq          = VECTOR_NUMBER_GPT2_UDF,
#else
  .trough_irq = FSP_INVALID_VECTOR,
#endif
  .poeg_link = GPT_POEG_LINK_POEG0,
  .output_disable = GPT_OUTPUT_DISABLE_NONE,
  .adc_trigger = GPT_ADC_TRIGGER_NONE,
  .dead_time_count_up = 100,
  .dead_time_count_down = 100,
  .adc_a_compare_match = 0,
  .adc_b_compare_match = 0,
  .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
  .interrupt_skip_count = GPT_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_adc = GPT_INTERRUPT_SKIP_ADC_NONE,
  .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
  .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
  .interrupt_skip_source_ext1 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
  .interrupt_skip_count_ext1 = GPT_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_source_ext2 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
  .interrupt_skip_count_ext2 = GPT_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_func_ovf = GPT_INTERRUPT_SKIP_SELECT_NONE,
  .interrupt_skip_func_unf = GPT_INTERRUPT_SKIP_SELECT_NONE,
  .interrupt_skip_func_adc_a = GPT_INTERRUPT_SKIP_SELECT_NONE,
  .interrupt_skip_func_adc_b = GPT_INTERRUPT_SKIP_SELECT_NONE, };
#endif
const gpt_extended_cfg_t g_timer2_extend =
        { .gtioca =
        { .output_enabled = true, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = true, .stop_level = GPT_PIN_LEVEL_HIGH },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE), .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT2_CCMPA)
    .capture_a_irq       = VECTOR_NUMBER_GPT2_CCMPA,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT2_CCMPB)
    .capture_b_irq       = VECTOR_NUMBER_GPT2_CCMPB,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE,
          .capture_filter_gtiocb = GPT_CAPTURE_FILTER_NONE,
#if 1
          .p_pwm_cfg = &g_timer2_pwm_extend,
#else
    .p_pwm_cfg                   = NULL,
#endif
          .dead_time_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT2_DTE)
    .dead_time_irq       = VECTOR_NUMBER_GPT2_DTE,
#else
          .dead_time_irq = FSP_INVALID_VECTOR,
#endif
          .icds = 0, };
const timer_cfg_t g_timer2_cfg =
{ .mode = TIMER_MODE_TRIANGLE_WAVE_ASYMMETRIC_PWM,
  /* Actual period: 0.0001 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0x4e20,
  .duty_cycle_counts = 0x2710,
  .source_div = (timer_source_div_t) 0,
  .channel = 2,
  .p_callback = NULL,
  .p_context = NULL,
  .p_extend = &g_timer2_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT2_OVF)
    .cycle_end_irq       = VECTOR_NUMBER_GPT2_OVF,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer2 =
{ .p_ctrl = &g_timer2_ctrl, .p_cfg = &g_timer2_cfg, .p_api = &g_timer_on_gpt };
gpt_instance_ctrl_t g_timer1_ctrl;
#if 1
const gpt_extended_pwm_cfg_t g_timer1_pwm_extend =
{ .trough_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT1_UDF)
    .trough_irq          = VECTOR_NUMBER_GPT1_UDF,
#else
  .trough_irq = FSP_INVALID_VECTOR,
#endif
  .poeg_link = GPT_POEG_LINK_POEG0,
  .output_disable = GPT_OUTPUT_DISABLE_NONE,
  .adc_trigger = GPT_ADC_TRIGGER_NONE,
  .dead_time_count_up = 100,
  .dead_time_count_down = 100,
  .adc_a_compare_match = 0,
  .adc_b_compare_match = 0,
  .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
  .interrupt_skip_count = GPT_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_adc = GPT_INTERRUPT_SKIP_ADC_NONE,
  .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
  .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
  .interrupt_skip_source_ext1 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
  .interrupt_skip_count_ext1 = GPT_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_source_ext2 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
  .interrupt_skip_count_ext2 = GPT_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_func_ovf = GPT_INTERRUPT_SKIP_SELECT_NONE,
  .interrupt_skip_func_unf = GPT_INTERRUPT_SKIP_SELECT_NONE,
  .interrupt_skip_func_adc_a = GPT_INTERRUPT_SKIP_SELECT_NONE,
  .interrupt_skip_func_adc_b = GPT_INTERRUPT_SKIP_SELECT_NONE, };
#endif
const gpt_extended_cfg_t g_timer1_extend =
        { .gtioca =
        { .output_enabled = true, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = true, .stop_level = GPT_PIN_LEVEL_HIGH },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE), .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT1_CCMPA)
    .capture_a_irq       = VECTOR_NUMBER_GPT1_CCMPA,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT1_CCMPB)
    .capture_b_irq       = VECTOR_NUMBER_GPT1_CCMPB,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE,
          .capture_filter_gtiocb = GPT_CAPTURE_FILTER_NONE,
#if 1
          .p_pwm_cfg = &g_timer1_pwm_extend,
#else
    .p_pwm_cfg                   = NULL,
#endif
          .dead_time_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT1_DTE)
    .dead_time_irq       = VECTOR_NUMBER_GPT1_DTE,
#else
          .dead_time_irq = FSP_INVALID_VECTOR,
#endif
          .icds = 0, };
const timer_cfg_t g_timer1_cfg =
{ .mode = TIMER_MODE_TRIANGLE_WAVE_ASYMMETRIC_PWM,
  /* Actual period: 0.0001 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0x4e20,
  .duty_cycle_counts = 0x2710,
  .source_div = (timer_source_div_t) 0,
  .channel = 1,
  .p_callback = NULL,
  .p_context = NULL,
  .p_extend = &g_timer1_extend,
  .cycle_end_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT1_OVF)
    .cycle_end_irq       = VECTOR_NUMBER_GPT1_OVF,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer1 =
{ .p_ctrl = &g_timer1_ctrl, .p_cfg = &g_timer1_cfg, .p_api = &g_timer_on_gpt };
gpt_instance_ctrl_t g_timer0_ctrl;
#if 1
const gpt_extended_pwm_cfg_t g_timer0_pwm_extend =
{ .trough_ipl = (12),
#if defined(VECTOR_NUMBER_GPT0_UDF)
    .trough_irq          = VECTOR_NUMBER_GPT0_UDF,
#else
  .trough_irq = FSP_INVALID_VECTOR,
#endif
  .poeg_link = GPT_POEG_LINK_POEG0,
  .output_disable = GPT_OUTPUT_DISABLE_NONE,
  .adc_trigger = GPT_ADC_TRIGGER_NONE,
  .dead_time_count_up = 100,
  .dead_time_count_down = 100,
  .adc_a_compare_match = 0,
  .adc_b_compare_match = 0,
  .interrupt_skip_source = GPT_INTERRUPT_SKIP_SOURCE_NONE,
  .interrupt_skip_count = GPT_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_adc = GPT_INTERRUPT_SKIP_ADC_NONE,
  .gtioca_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
  .gtiocb_disable_setting = GPT_GTIOC_DISABLE_PROHIBITED,
  .interrupt_skip_source_ext1 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
  .interrupt_skip_count_ext1 = GPT_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_source_ext2 = GPT_INTERRUPT_SKIP_SOURCE_NONE,
  .interrupt_skip_count_ext2 = GPT_INTERRUPT_SKIP_COUNT_0,
  .interrupt_skip_func_ovf = GPT_INTERRUPT_SKIP_SELECT_NONE,
  .interrupt_skip_func_unf = GPT_INTERRUPT_SKIP_SELECT_NONE,
  .interrupt_skip_func_adc_a = GPT_INTERRUPT_SKIP_SELECT_NONE,
  .interrupt_skip_func_adc_b = GPT_INTERRUPT_SKIP_SELECT_NONE, };
#endif
const gpt_extended_cfg_t g_timer0_extend =
        { .gtioca =
        { .output_enabled = true, .stop_level = GPT_PIN_LEVEL_LOW },
          .gtiocb =
          { .output_enabled = true, .stop_level = GPT_PIN_LEVEL_HIGH },
          .start_source = (gpt_source_t) (GPT_SOURCE_NONE), .stop_source = (gpt_source_t) (GPT_SOURCE_NONE), .clear_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .count_up_source = (gpt_source_t) (GPT_SOURCE_NONE), .count_down_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_source =
                  (gpt_source_t) (GPT_SOURCE_NONE),
          .capture_b_source = (gpt_source_t) (GPT_SOURCE_NONE), .capture_a_ipl = (BSP_IRQ_DISABLED), .capture_b_ipl =
                  (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_CCMPA)
    .capture_a_irq       = VECTOR_NUMBER_GPT0_CCMPA,
#else
          .capture_a_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_GPT0_CCMPB)
    .capture_b_irq       = VECTOR_NUMBER_GPT0_CCMPB,
#else
          .capture_b_irq = FSP_INVALID_VECTOR,
#endif
          .capture_filter_gtioca = GPT_CAPTURE_FILTER_NONE,
          .capture_filter_gtiocb = GPT_CAPTURE_FILTER_NONE,
#if 1
          .p_pwm_cfg = &g_timer0_pwm_extend,
#else
    .p_pwm_cfg                   = NULL,
#endif
          .dead_time_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_GPT0_DTE)
    .dead_time_irq       = VECTOR_NUMBER_GPT0_DTE,
#else
          .dead_time_irq = FSP_INVALID_VECTOR,
#endif
          .icds = 0, };
const timer_cfg_t g_timer0_cfg =
{ .mode = TIMER_MODE_TRIANGLE_WAVE_ASYMMETRIC_PWM,
  /* Actual period: 0.0001 seconds. Actual duty: 50%. */.period_counts = (uint32_t) 0x4e20,
  .duty_cycle_counts = 0x2710,
  .source_div = (timer_source_div_t) 0,
  .channel = 0,
  .p_callback = gpt_interrupt,
  .p_context = NULL,
  .p_extend = &g_timer0_extend,
  .cycle_end_ipl = (15),
#if defined(VECTOR_NUMBER_GPT0_OVF)
    .cycle_end_irq       = VECTOR_NUMBER_GPT0_OVF,
#else
  .cycle_end_irq = FSP_INVALID_VECTOR,
#endif
        };
/* Instance structure to use this module. */
const timer_instance_t g_timer0 =
{ .p_ctrl = &g_timer0_ctrl, .p_cfg = &g_timer0_cfg, .p_api = &g_timer_on_gpt };
gpt_three_phase_instance_ctrl_t g_three_phase0_ctrl;
const three_phase_cfg_t g_three_phase0_cfg =
{ .buffer_mode = (THREE_PHASE_BUFFER_MODE_SINGLE), .p_timer_instance =
{ &g_timer0, &g_timer1, &g_timer2 },
  .callback_ch = THREE_PHASE_CHANNEL_U, .channel_mask = (1 << 0) | (1 << 1) | (1 << 2), .p_context = NULL, .p_extend =
          NULL, };
/* Instance structure to use this module. */
const three_phase_instance_t g_three_phase0 =
{ .p_ctrl = &g_three_phase0_ctrl, .p_cfg = &g_three_phase0_cfg, .p_api = &g_gpt_three_phase_on_gpt_three_phase };
void g_hal_init(void)
{
    g_common_init ();
}
