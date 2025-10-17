#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <sstream>

int
main()
{
constexpr char lf {0xa}, qte {0x22}, cma {0x2c};
const std::vector<std::string> src
{
"#include <iostream>",
"#include <string>",
"#include <vector>",
"#include <cstddef>",
"#include <sstream>",
"",
"int",
"main()",
"{",
"constexpr char lf {0xa}, qte {0x22}, cma {0x2c};",
"const std::vector<std::string> src",
"{",
"};",
"std::ostringstream oss {};",
"for (std::size_t i {0}; i < 12; ++i)",
"{ oss<<src[i]<<lf; }",
"for (const std::string &s : src)",
"{ oss<<qte<<s<<qte<<cma<<lf; }",
"for (std::size_t i {12}; i < src.size(); ++i)",
"{ oss<<src[i]<<lf; }",
"std::cout << oss.str();",
"return 0;",
"}",
"",
};
std::ostringstream oss {};
for (std::size_t i {0}; i < 12; ++i)
{ oss<<src[i]<<lf; }
for (const std::string &s : src)
{ oss<<qte<<s<<qte<<cma<<lf; }
for (std::size_t i {12}; i < src.size(); ++i)
{ oss<<src[i]<<lf; }
std::cout << oss.str();
return 0;
}

