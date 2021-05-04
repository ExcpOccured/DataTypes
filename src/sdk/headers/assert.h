#ifndef DATATYPES_ASSERT_H
#define DATATYPES_ASSERT_H

#define assert(expr) \
    if (!(expr)) \
        assert_failed();

#endif //DATATYPES_ASSERT_H
