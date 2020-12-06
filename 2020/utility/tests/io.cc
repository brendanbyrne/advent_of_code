#include "2020/utility/io.hh"

#include "gtest/gtest.h"

TEST(UtilityTest, NewLine)
{
  // [TODO] figure out how to use bazel's "data" attribute to link this better
  constexpr auto path = "/home/bbyrne/projects/advent_of_code/2020/utility/tests/test_input.txt";
  const auto loaded_data = advent::utility::read_newline_delimited<uint32_t>(path);

  std::vector<uint32_t> expected_data{1721, 979, 366, 299, 675, 1456};

  ASSERT_EQ(loaded_data.size(), expected_data.size());

  for (std::size_t i = 0; i < expected_data.size(); ++i)
  {
    ASSERT_EQ(loaded_data.at(i), expected_data.at(i));
  }
}
