#include "2020/day3/day3.hh"
#include "2020/utility/io.hh"

#include <iostream>
#include <tuple>
#include <vector>

int main()
{
  constexpr auto path = "2020/day3/input.txt";

  const auto str_map = advent::utility::read_newline_delimited(path);
  const advent::Map map(str_map);

  const auto num_trees = count_trees(map, 3, 1);
  std::cout << "Number of trees encountered on (3, 1): " << num_trees << std::endl;

  std::vector<std::tuple<std::size_t, std::size_t>> slopes {{1, 1},
                                                            {3, 1},
                                                            {5, 1},
                                                            {7, 1},
                                                            {1, 2}};

  std::size_t product{1};
  for (const auto& [right, down] : slopes)
  {
    product *= advent::count_trees(map, right, down);
  }

  std::cout << "Product: " << product << std::endl;

  return 0;
}
