#pragma once

#include <bits/stdint-uintn.h>
#include <string>
#include <vector>

namespace advent {

class Map
{
 public:
  enum class State: uint8_t
  {
    open,
    tree
  };

  using Str = std::vector<std::string>;
  using Row = std::vector<State>;
  using Base = std::vector<Row>;

  explicit Map(const Str& str_map);

  /// Get value at location in map, with row wrapping
  State at(const std::size_t row, const std::size_t col) const;

  std::size_t size() const;

 private:
  Base base_{};
};

std::size_t count_trees(const Map& map, const std::size_t right, const std::size_t down);
}
