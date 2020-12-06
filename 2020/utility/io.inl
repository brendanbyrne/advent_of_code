#include <stdexcept>
#include <fstream>
#include <sstream>
#include <string>

namespace advent::utility {
template <typename T>
std::vector<T> read_newline_delimited(const std::filesystem::path& path)
{
  std::ifstream file(path);

  std::vector<T> data;
  std::string line;
  while (std::getline(file, line))
  {
    std::istringstream iss(line);

    T value;

    if (!(iss >> value))
      throw std::runtime_error("Failed to extract value.");

    data.push_back(value);
  }

  return data;
}
}
