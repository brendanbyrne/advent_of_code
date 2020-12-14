#include "2020/day1/day1.hh"

#include "gtest/gtest.h"

TEST(Day1, NoInput)
{
  const std::vector<uint32_t> empty_input{};
  const auto maybe = advent::find_sum(empty_input, 0);
  ASSERT_FALSE(maybe);
}

TEST(Day1, KnownGoodValues)
{
  const std::vector<uint32_t> input{1721, 979, 366, 299, 675, 1456};
  const auto maybe_pair = advent::find_sum(input, 2020);

  ASSERT_TRUE(maybe_pair);
  ASSERT_EQ(maybe_pair->first, 1721);
  ASSERT_EQ(maybe_pair->second, 299);
}
