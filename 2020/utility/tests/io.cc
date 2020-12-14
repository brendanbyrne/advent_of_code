#include "2020/utility/io.hh"

#include "gtest/gtest.h"

#include <sstream>

constexpr auto path = "2020/utility/tests/input.txt";

TEST(IO, NewLine)
{
  const auto loaded_data = advent::utility::read_newline_delimited<uint32_t>(path,
                                                                             [](const auto& line) -> std::optional<uint32_t>
                                                                             {
                                                                               std::basic_istringstream iss(line);
                                                                               uint32_t value;
                                                                               if (!(iss >> value))
                                                                                 return {};
                                                                               return value;
                                                                             });

  const std::vector<uint32_t> expected_data{1721, 979, 366, 299, 675, 1456};

  ASSERT_EQ(loaded_data.size(), expected_data.size());

  for (std::size_t i = 0; i < expected_data.size(); ++i)
  {
    ASSERT_EQ(loaded_data.at(i), expected_data.at(i));
  }
}

TEST(IO, Default)
{
  const auto loaded_data = advent::utility::read_newline_delimited(path);

  const std::vector<std::string> expected_data = {"1721", "979", "366", "299", "675", "1456"};

  ASSERT_EQ(loaded_data, expected_data);
}
