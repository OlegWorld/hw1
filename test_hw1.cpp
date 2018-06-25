#define BOOST_TEST_MODULE test_hello

//#include <boost/test/unit_test.hpp>
//#include "hello.h"
//
//BOOST_AUTO_TEST_SUITE(test_hello)
//
//BOOST_AUTO_TEST_CASE(test_hello_string)
//{
//    BOOST_CHECK(say_hello() == "Hello World!");
//}
//
//BOOST_AUTO_TEST_SUITE_END()

#include <iostream>
#include "gtest/gtest.h"
#include "hello.h"

TEST(test_hello, test_hello_string)
{
    ASSERT_EQ(say_hello(), "Hello World!");
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
