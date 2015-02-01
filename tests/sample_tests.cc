#include <gtest/gtest.h>
#include <square.h>
#include <stack.h>

class SampleTest : public testing::Test {
  protected:
    virtual void SetUp() {
    }

    virtual void TearDown() {
    }
};

TEST_F(SampleTest, SquareOfTwo) {
  ASSERT_EQ(4, square(2));
}

TEST_F(SampleTest, EmptyStackSize) {
  Stack stk;
  ASSERT_EQ(0, stk.Size());
}
