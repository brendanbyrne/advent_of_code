#include "2020/day3/day3.hh"

#include <tuple>

namespace advent {
Map::Map(const Str& str_map)
{
  base_.reserve(str_map.size());

  for (const auto& str_row : str_map)
  {
    Row row;
    row.reserve(str_row.size());
    for (const auto& value : str_row)
      row.emplace_back((value == '.') ? State::open : State::tree);
    base_.emplace_back(std::move(row));
  }
}

Map::State Map::at(const std::size_t row, const std::size_t col) const
{
  return base_.at(row).at(col % base_.at(row).size());
}

std::size_t Map::size() const
{
  return base_.size();
}

std::size_t count_trees(const Map& map, const std::size_t right, const std::size_t down)
{
  std::size_t num_trees{0};
  std::size_t row{0};
  std::size_t col{0};

  do
  {
    if (map.at(row, col) == Map::State::tree)
      ++num_trees;
    row += down;
    col += right;
  } while (row < map.size());

  return num_trees;
}
}
