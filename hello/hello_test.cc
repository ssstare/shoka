#include "hello/hello.h"

#include "gtest/gtest.h"

namespace hello {

TEST(Hello, Basic) {
  EXPECT_EQ("Hello World", Hello());
}

}  // namespace hello
