#pragma once

#include <filesystem>
#include <functional>
#include <optional>
#include <vector>

namespace advent::utility {
template <typename T>
using ParseLine = std::function<std::optional<T>(std::string&)>;

/// Parse a file by trying to extract a given type from each line.
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


/// Parse a file by trying to extract a string from each line.
///
/// @param[in] path Location of file to read
std::vector<std::string> read_newline_delimited(const std::filesystem::path& path);
} // namespace advent::utility

#include "2020/utility/io.inl"
