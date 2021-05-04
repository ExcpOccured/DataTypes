#include "check-0.15.2/src/check.h"
#include "../src/headers/array.h"
#include <stdlib.h>

START_TEST(test_correct_array_allocate)
        {
                array_t* allocated_array = (array_t*)(alloc((int)sizeof(int)).execution_data_ptr);

                ck_assert_ptr_nonnull((allocated_array));
                ck_assert_int_eq(allocated_array->array_size, 1024);
        }
END_TEST;

Suite* GetArraySuite(void) {
    Suite* suite;
    TCase *tc_core;

    suite = suite_create("Array");

    tc_core = tcase_create("Main functions");

    tcase_add_test(tc_core, test_correct_array_allocate);
    suite_add_tcase(suite, tc_core);

    return suite;
}

int main(void)
{
    int failed_numbers = 0;

    SRunner* sRunner;
    Suite* suite;

    suite = GetArraySuite();
    sRunner = srunner_create(suite);

    srunner_run_all(sRunner, CK_NORMAL);
    failed_numbers = srunner_ntests_failed(sRunner);

    srunner_free(sRunner);

    return (failed_numbers == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

