#include "hello.hpp"

#include <userver/utest/utest.hpp>

UTEST(SayHelloTo, Basic) {
  EXPECT_EQ(testuserver::SayHelloTo("Developer"), "Hello, Developer!\n");
  EXPECT_EQ(testuserver::SayHelloTo({}), "Hello, unknown user!\n");
}
