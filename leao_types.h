#ifndef LEAO_TYPES_H_
#define LEAO_TYPES_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

// vector

typedef struct {
    float x;
    float y;
    float z;
} vec3_lt;

inline vec3_lt vec3_subtract(vec3_lt a, vec3_lt b) {
    return (vec3_lt){a.x - b.x, a.y - b.y, a.z - b.z};
}

inline vec3_lt vec3_add(vec3_lt a, vec3_lt b) {
    return (vec3_lt){a.x + b.x, a.y + b.y, a.z + b.z};
}

inline vec3_lt vec3_multiply(vec3_lt a, vec3_lt b) {
    return (vec3_lt){a.x * b.x, a.y * b.y, a.z * b.z};
}

typedef struct {
    float x;
    float y;
} vec2_lt;

inline vec2_lt vec2_subtract(vec2_lt a, vec2_lt b) {
    return (vec2_lt){a.x - b.x, a.y - b.y};
}

inline vec2_lt vec2_add(vec2_lt a, vec2_lt b) {
    return (vec2_lt){a.x + b.x, a.y + b.y};
}

inline vec2_lt vec2_multiply(vec2_lt a, vec2_lt b) {
    return (vec2_lt){a.x * b.x, a.y * b.y};
}

// c string utilities

static inline const char *bool_to_cstr(int value) {
    return value ? "true" : "false";
}

static inline char *int_to_cstr(int value, char *buffer) {

    snprintf(buffer, sizeof(buffer), "%d", value);
    return buffer;
}

#endif // LEAO_TYPES_H_
