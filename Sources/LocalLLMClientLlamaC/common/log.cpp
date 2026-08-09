#include "ggml.h"

int common_log_verbosity_thold = 0;

void common_log_set_verbosity_thold(int verbosity) { common_log_verbosity_thold = verbosity; }
struct common_log * common_log_init() { return nullptr; }
struct common_log * common_log_main() { return nullptr; }
void common_log_set_prefix(struct common_log * log, bool prefix) {}
void common_log_set_timestamps(struct common_log * log, bool timestamps) {}
void common_log_add(struct common_log * log, enum ggml_log_level level, const char * fmt, ...) {}
void common_log_default_callback(enum ggml_log_level level, const char * text, void * user_data) {}
