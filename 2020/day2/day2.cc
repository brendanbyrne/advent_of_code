#include "2020/day2/day2.hh"

#include <algorithm>
#include <regex>
#include <stdexcept>

namespace advent {
Policy read_policy(const std::string& policy_text)
{
  const std::regex pattern{"^(\\d+)-(\\d+) (\\w): (\\w+)$"};
  std::smatch matches;
  std::regex_search(policy_text, matches, pattern);

  if (matches.empty())
    throw std::runtime_error("Failed to read policy.");

  Policy policy;
  policy.lower_bound = std::stoi(matches[1]);
  policy.upper_bound = std::stoi(matches[2]);
  policy.special_character = matches[3].str().at(0);
  policy.password = matches[4].str();

  return policy;
}


bool is_valid_old(const Policy& policy)
{
  const auto count = std::count(policy.password.cbegin(), policy.password.cend(), policy.special_character);
  return (policy.lower_bound <= count) && (count <= policy.upper_bound);
}

bool is_valid_new(const Policy& policy)
{
  uint32_t count{0};

  if (policy.password.at(policy.lower_bound-1) == policy.special_character)
    ++count;

  if (policy.password.at(policy.upper_bound-1) == policy.special_character)
    ++count;

  return count == 1;
}
}
