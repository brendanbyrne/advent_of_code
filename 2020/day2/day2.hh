#pragma once

#include <string>

namespace advent {
/// Password policy information
struct Policy
{
  std::size_t lower_bound;
  std::size_t upper_bound;
  char special_character;
  std::string password;
};

/// Attempt to convert a string into a password policy
///
/// @param[in] text Potential policy in text format
///
/// @throws std::runtime_error if text cannot be parsed
///
/// @erturns Policy from text
Policy read_policy(const std::string& text);

/// Check if a policy meets old company's standards
///
/// @param[in] policy Policy to check
///
/// @returns true if the policy is valid
bool is_valid_old(const Policy& policy);

/// Check if a policy meets newcompany's standards
///
/// @param[in] policy Policy to check
///
/// @returns true if the policy is valid
bool is_valid_new(const Policy& policy);
}
