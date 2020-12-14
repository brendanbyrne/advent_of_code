#include "2020/utility/io.hh"

#include <string>

namespace advent::utility {
std::vector<std::string> read_newline_delimited(const std::filesystem::path &path)
{
  return read_newline_delimited<std::string>(path, [](std::string& string) { return string; });
}
}
