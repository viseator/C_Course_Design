#include "utils.h"

/**test if src string contains dst string */
bool string_match(const char *src, const char *dst) {
    return strstr(src, dst) != NULL;
}
