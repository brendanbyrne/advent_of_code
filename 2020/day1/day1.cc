#include "2020/day1/day1.hh"

namespace advent
{
std::optional<std::pair<uint32_t, uint32_t>> find_sum(const std::vector<uint32_t>& numbers, const uint32_t desired_sum)
{
  if (numbers.size() < 2)
    return {};

  const auto cend = numbers.cend();
  const auto cend_m1 = std::next(cend, -1);

  for (auto first = numbers.cbegin(); first != cend_m1; ++first)
  {
    for (auto second = std::next(first, 1); second != cend; ++second)
    {
      const auto sum = *first + *second;
      if (sum == desired_sum)
      {
        return std::make_pair(*first, *second);
      }
    }
  }

  return {};
}

std::optional<std::tuple<uint32_t, uint32_t, uint32_t>>
find_sum_3(const std::vector<uint32_t> &numbers, const uint32_t desired_sum)
{
  if (numbers.size() < 3)
    return {};

  const auto cend = numbers.cend();
  const auto cend_m1 = std::next(cend, -1);
  const auto cend_m2 = std::next(cend, -2);

  for (auto first = numbers.cbegin(); first != cend_m2; ++first)
  {
    for (auto second = std::next(first, 1); second != cend_m1; ++second)
    {
      for (auto third = std::next(first, 2); third != cend_m2; ++third)
      {
        const auto sum = *first + *second + *third;
        if (sum == desired_sum)
        {
          return std::make_tuple(*first, *second, *third);
        }
      }
    }
  }

  return {};
}
}
