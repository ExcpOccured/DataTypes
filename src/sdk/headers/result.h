#ifndef DATATYPES_RESULT_H
#define DATATYPES_RESULT_H

#include <stdbool.h>

typedef struct Result {
    bool is_success;
    char* failed_message;
    void* execution_data_ptr;
} Result_t;

Result_t Failed(char* message);

Result_t Success(void* execution_function_data_prt);

#endif //DATATYPES_RESULT_H
