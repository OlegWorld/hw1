#define BOOST_TEST_MODULE test_hello

#include <boost/test/unit_test.hpp>
#include "hello.h"

BOOST_AUTO_TEST_SUITE(test_hello)

BOOST_AUTO_TEST_CASE(test_hello_string)
{
    BOOST_CHECK(say_hello() == "Hello World!");
}

BOOST_AUTO_TEST_SUITE_END()
