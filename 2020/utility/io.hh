#pragma once

#include <filesystem>
#include <vector>

namespace advent::utility {
/// Parse a file by trying to extract a give type from each line.
///
/// @tparam T Type to extract from each line
///
/// @param[in] path Location of file to read
///
/// @throws std::runtime_error if the a line fails extraction
template <typename T>
std::vector<T> read_newline_delimited(const std::filesystem::path& path);
}

#include "2020/utility/io.inl"
