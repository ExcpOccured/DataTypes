#include "headers/result.h"

Result_t Failed(char* message) {
    Result_t result;

    result.is_success = false;
    result.failed_message = message;
    result.execution_data_ptr = ((void *)0);

    return result;
}

Result_t Success(void* execution_function_data_prt) {
    Result_t result;

    result.execution_data_ptr = execution_function_data_prt;
    result.failed_message = (char *)((void *)0);
    result.is_success = true;

    return result;
}

