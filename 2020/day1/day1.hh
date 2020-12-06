#pragma once

#include <cstdint>
#include <optional>
#include <tuple>
#include <utility>
#include <vector>

namespace advent {
/// Find the first pair of numbers whose sum equals @c desired_sum
///
/// @param[in] numbers What numbers to search
/// @param[in] desired_sum What the sum should equals
///
/// @returns If solution is found, a valid optional containing the numbers
std::optional<std::pair<uint32_t, uint32_t>>
find_sum(const std::vector<uint32_t> &numbers, const uint32_t desired_sum);

/// Find the first triplet of numbers whose sum equals @c desired_sum
///
/// @param[in] numbers What numbers to search
/// @param[in] desired_sum What the sum should equals
///
/// @returns If solution is found, a valid optional containing the numbers
std::optional<std::tuple<uint32_t, uint32_t, uint32_t>>
find_sum_3(const std::vector<uint32_t> &numbers, const uint32_t desired_sum);
}
