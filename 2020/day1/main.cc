#include "2020/day1/day1.hh"
#include "2020/utility/io.hh"

#include <iostream>

int main()
{
  constexpr auto path = "/home/bbyrne/projects/advent_of_code/2020/day_1/input.txt";
  const auto data = advent::utility::read_newline_delimited<uint32_t>(path);

  const auto maybe_2 = advent::find_sum(data, 2020);

  if(!maybe_2)
    std::cout << "No solution was found";
  else
    std::cout << "Multiple: " << maybe_2->first * maybe_2->second << std::endl;

  const auto maybe_3 = advent::find_sum_3(data, 2020);

  if(!maybe_3)
    std::cout << "No solution was found";
  else
  {
    const auto& tuple = maybe_3.value();
    const auto product = std::get<0>(tuple) * std::get<1>(tuple) * std::get<2>(tuple);
    std::cout << "Multiple: " << product << std::endl;
  }

  return 0;
}