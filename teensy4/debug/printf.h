#define PRINT_DEBUG_STUFF

#ifdef PRINT_DEBUG_STUFF
#define printf_init() printf_debug_init()
// defining printf this way breaks things like Serial.printf() in C++ :(
#define printf(...) printf_debug(__VA_ARGS__)
#ifdef __cplusplus
extern "C" {
#endif
void print_debug_init(void);
void printf_debug(const char *format, ...);
#ifdef __cplusplus
}
#endif

#else
#define printf_init()
#define printf(...)

#endif
