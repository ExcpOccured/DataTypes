#include <stdlib.h>
#include "headers/array.h"

#define INVALID_ELEMENT_SIZE_MESSAGE "Element size must be more than zero!"

Result_t alloc(int element_size) {
    if(element_size <= 0) {
        return Failed((char *) &INVALID_ELEMENT_SIZE_MESSAGE);
    }

    array_t* array = (array_t*)malloc(sizeof(array_t));

    array->element_size = element_size;
    array->capacity = 1024;
    array->array_size = 0;
    array->element_ptr = ((void *)0);

    return Success((void *)array);
}

