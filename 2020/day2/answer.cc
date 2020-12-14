#include "2020/day2/day2.hh"
#include "2020/utility/io.hh"

#include <iostream>

int main()
{
  constexpr auto path = "2020/day2/input.txt";

  uint32_t valid_old{0};
  uint32_t valid_new{0};

  const auto policies = advent::utility::read_newline_delimited(path);

  for (const auto& line : policies)
  {
    const auto policy = advent::read_policy(line);
    if (advent::is_valid_old(policy))
      ++valid_old;

    if (advent::is_valid_new(policy))
      ++valid_new;
  }

  std::cout << "Number valid under old policy: " << valid_old << std::endl;
  std::cout << "Number valid under new policy: " << valid_new << std::endl;

  return 0;
}
