#ifndef GET_STATIC_T_H
#define GET_STATIC_T_H
typedef int (*get_static_t)(cpumask_t *cpumask, int interval,
                            unsigned long voltage, u32 *power);
#endif
