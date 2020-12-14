#include <stdexcept>
#include <fstream>
#include <string>

namespace advent::utility {
template <typename T>
std::vector<T> read_newline_delimited(const std::filesystem::path& path, ParseLine<T> parse)
{
  std::ifstream file(path);

  std::vector<T> data;
  std::string line;
  while (std::getline(file, line))
  {
    std::istringstream iss(line);

    auto maybe = parse(line);

    if (!maybe)
      throw std::runtime_error("Failed to extract value.");

    data.push_back(maybe.value());
  }

  return data;
}
}
