#pragma once

#include <filesystem>
#include <functional>
#include <optional>
#include <vector>

namespace advent::utility {
template <typename T>
using ParseLine = std::function<std::optional<T>(std::string&)>;

/// Parse a file by trying to extract a give type from each line.
///
/// @tparam T Type to extract from each line
///
/// @param[in] path Location of file to read
/// @param[in] parse_line Function that constructs a type T object from a string
///
/// @throws std::runtime_error if the a line fails extraction
template <typename T>
std::vector<T> read_newline_delimited(const std::filesystem::path& path,
                                      ParseLine<T> parse);
}
#include "2020/utility/io.inl"
