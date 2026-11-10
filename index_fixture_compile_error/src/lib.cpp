#include "index_fixture_compile_error/lib.hpp"

namespace index_fixture_compile_error
{
// The error is on purpose: a string is not an int.
int answer() { int value = "forty two"; return value; }
}
