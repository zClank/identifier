#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

#define GET_TYPE(algorithm) \
    ((algorithm) < 2 ? "On" : ((algorithm) < 5 ? "On2" : "Onlogn"))

TEST(Sort, CorrectParameters) {
    int a[] = {1, 2, 3};
    int length = sizeof(a) / sizeof(a[0]);

    for (int algorithm = 0; algorithm < 8; algorithm++) {
        const char *type = GET_TYPE(algorithm);
        TEST_ASSERT_EQUAL(0, sort(a, length, (char *) type, algorithm));
    }
}

TEST(Sort, IntAEmpty) {
    int a[] = {};
    int length = 0;
    for (int algorithm = 0; algorithm < 8; algorithm++) {
        const char *type = GET_TYPE(algorithm);
        TEST_ASSERT_EQUAL(1, sort(a, length,(char *) type, algorithm));
    }
}

TEST(Sort, IntAEqualValues) {
    int a[] = {5, 5, 5, 5};
    int expected[] = {5, 5, 5, 5, 5};
    int length = sizeof(a) / sizeof(a[0]);
    char msg[100];
    const char *algNames[] = {
        "COUNTING",
        "RADIX",
        "BUBBLE",
        "INSERTION",
        "SELECTION",
        "HEAP",
        "MERGE",
        "QUICK"
    };

    for (int algorithm = 0; algorithm < 8; algorithm++) {
        sprintf(msg, "IntAEqualValues on: %s", algNames[algorithm]);

        const char *type = GET_TYPE(algorithm);
        TEST_ASSERT_EQUAL(0, sort(a, length,(char *) type, algorithm));
        TEST_ASSERT_EQUAL_INT32_ARRAY_MESSAGE(expected, a, length, msg);

    }
}

TEST(Sort, LengthTooBig) {
    int a[] = {21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = sizeof(a) / sizeof(a[0]);
    for (int algorithm = 0; algorithm < 8; algorithm++) {
        const char *type = GET_TYPE(algorithm);
        TEST_ASSERT_EQUAL(1, sort(a, length,(char *) type, algorithm));
    }
}

TEST(Sort, LengthTooSmall) {
    int a[] = {10};
    int length = sizeof(a) / sizeof(a[0]);
    for (int algorithm = 0; algorithm < 8; algorithm++) {
        const char *type = GET_TYPE(algorithm);
        TEST_ASSERT_EQUAL(1, sort(a, length,(char *) type, algorithm));
    }
}

TEST(Sort, LengthOnUpperLimit) {
    int a[] = {20, 18, 16, 14, 12, 10, 8, 6, 4, 2, 19, 17, 15, 13, 11, 9, 7, 5, 3, 1};
    int expected[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int length = sizeof(a) / sizeof(a[0]);
    char msg[100];
    const char *algNames[] = {
        "COUNTING",
        "RADIX",
        "BUBBLE",
        "INSERTION",
        "SELECTION",
        "HEAP",
        "MERGE",
        "QUICK"
    };

    for (int algorithm = 0; algorithm < 8; algorithm++) {
        sprintf(msg, "LengthOnUpperLimit on: %s", algNames[algorithm]);
        const char *type = GET_TYPE(algorithm);

        TEST_ASSERT_EQUAL(0, sort(a, length,(char *) type, algorithm));
        TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(expected, a, length, msg);
    }
}

TEST(Sort, LengthOnLowerLimit) {
    int a[] = {2, 1};
    int expected[] = {1, 2};
    int length = sizeof(a) / sizeof(a[0]);
    char msg[100];
    const char *algNames[] = {
        "COUNTING",
        "RADIX",
        "BUBBLE",
        "INSERTION",
        "SELECTION",
        "HEAP",
        "MERGE",
        "QUICK"
    };

    for (int algorithm = 0; algorithm < 8; algorithm++) {
      sprintf(msg, "LengthOnLowerLimit on: %s", algNames[algorithm]);
      const char *type = GET_TYPE(algorithm);

      TEST_ASSERT_EQUAL(0, sort(a, length,(char *) type, algorithm));
      TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(expected, a, length, msg);
    }
}

TEST(Sort, ComplexityEmpty) {
    int a[] = {1, 2, 3};
    int length = sizeof(a) / sizeof(a[0]);
    const char *type = "";

    for (int algorithm = 0; algorithm < 8; algorithm++){
        TEST_ASSERT_EQUAL(1, sort(a, length,(char *) type, algorithm));
    }
}

TEST(Sort, ComplexityInvalidString) {
    int a[] = {1, 2, 3};
    int length = sizeof(a) / sizeof(a[0]);
    const char *type = "abc";

    for (int algorithm = 0; algorithm < 8; algorithm++) {
        TEST_ASSERT_EQUAL(1, sort(a, length, (char *) type, algorithm));
    }
}

TEST(Sort, AlgorithmTooBig) {
    int a[] = {1, 2, 3};
    int length = sizeof(a) / sizeof(a[0]);
    const char *type = "On";
    TEST_ASSERT_EQUAL(1, sort(a, length,(char *) type, 9));
}

TEST(Sort, AlgorithmTooSmall) {
    int a[] = {1, 2, 3};
    int length = sizeof(a) / sizeof(a[0]);
    const char *type = "On";
    TEST_ASSERT_EQUAL(1, sort(a, length,(char *) type, -1));
}







