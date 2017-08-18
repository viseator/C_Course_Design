
#include "utils.h"

bool string_match(const char *src, const char *dst) {
    return strstr(src, dst) != NULL;
}
