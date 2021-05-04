#ifndef DATATYPES_ARRAY_H
#define DATATYPES_ARRAY_H

#include "../sdk/headers/result.h"

typedef struct array {
    void* element_ptr;
    int element_size;
    int capacity;
    int array_size;
} array_t;

Result_t alloc(int element_size);

Result_t delete(array_t* array_ptr);

Result_t size_is(array_t* array_ptr);

#endif //DATATYPES_ARRAY_H
