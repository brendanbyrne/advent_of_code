#include "2020/day3/day3.hh"

#include "gtest/gtest.h"


TEST(Day3, Map)
{
  const advent::Map::Str str = {".#"};

  const advent::Map map(str);

  ASSERT_EQ(map.size(), 1);

  ASSERT_EQ(map.at(0, 0), advent::Map::State::open);
  ASSERT_EQ(map.at(0, 1), advent::Map::State::tree);
  ASSERT_EQ(map.at(0, 2), advent::Map::State::open);
  ASSERT_EQ(map.at(0, 3), advent::Map::State::tree);
}

TEST(Day3, CountingTrees)
{
  const advent::Map::Str str = {
    "..##.......",
    "#...#...#..",
    ".#....#..#.",
    "..#.#...#.#",
    ".#...##..#.",
    "..#.##.....",
    ".#.#.#....#",
    ".#........#",
    "#.##...#...",
    "#...##....#",
    ".#..#...#.#"
  };

  const advent::Map map(str);
  constexpr std::size_t right = 3;
  constexpr std::size_t down = 1;
  constexpr std::size_t expected_num_trees = 7;

  ASSERT_EQ(count_trees(map, right, down), expected_num_trees);
}
