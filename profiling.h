// profiling.h

// extern void __cyg_profile_func_enter(void *, void *) __attribute__((no_instrument_function));
extern void __cyg_profile_func_enter(void *, void *) __attribute__((weak));
