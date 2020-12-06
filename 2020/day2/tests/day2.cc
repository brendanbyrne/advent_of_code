#include "2020/day2/day2.hh"

#include "gtest/gtest.h"

TEST(Day2Test, Parsing)
{
  const auto policy = advent::read_policy("1-3 a: abcde");

  ASSERT_EQ(policy.lower_bound, 1);
  ASSERT_EQ(policy.upper_bound, 3);
  ASSERT_EQ(policy.special_character, 'a');
  ASSERT_EQ(policy.password, "abcde");
}

TEST(Day2Test, OldPolicy)
{
  const auto valid_policy = advent::read_policy("1-3 a: abcde");
  ASSERT_TRUE(advent::is_valid_old(valid_policy));

  const auto invalid_policy = advent::read_policy("1-3 b: cdefg");
  ASSERT_FALSE(advent::is_valid_old(invalid_policy));
}

TEST(Day2Test, NewPolicy)
{
  const auto valid_policy = advent::read_policy("1-3 a: abcde");
  ASSERT_TRUE(advent::is_valid_new(valid_policy));

  const auto invalid_policy = advent::read_policy("1-3 b: cdefg");
  ASSERT_FALSE(advent::is_valid_new(invalid_policy));
}
