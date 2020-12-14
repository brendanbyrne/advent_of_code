#include "2020/day1/day1.hh"
#include "2020/utility/io.hh"

#include <iostream>

int main()
{
  constexpr auto path = "2020/day1/input.txt";
  const auto data = advent::utility::read_newline_delimited<uint32_t>(path,
                                                                      [](const auto& line) -> std::optional<uint32_t>
                                                                      {
                                                                        std::basic_istringstream iss(line);
                                                                        uint32_t value;
                                                                        if (!(iss >> value))
                                                                          return {};
                                                                        return value;
                                                                      });

  const auto maybe_2 = advent::find_sum(data, 2020);

  if(!maybe_2)
    std::cout << "No solution was found" << std::endl;
  else
    std::cout << "Multiple: " << maybe_2->first * maybe_2->second << std::endl;

  const auto maybe_3 = advent::find_sum_3(data, 2020);

  if(!maybe_3)
    std::cout << "No solution was found" << std::endl;
  else
  {
    const auto& tuple = maybe_3.value();
    const auto product = std::get<0>(tuple) * std::get<1>(tuple) * std::get<2>(tuple);
    std::cout << "Multiple: " << product << std::endl;
  }

  return 0;
}
