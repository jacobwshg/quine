#include <iostream>
#include <string>
#include <vector>
#include <cstddef>

int
main()
{
constexpr char lf {0xa}, q {0x22}, cma {0x2c};
const std::vector<std::string> src
{
"#include <iostream>",
"#include <string>",
"#include <vector>",
"#include <cstddef>",
"",
"int",
"main()",
"{",
"constexpr char lf {0xa}, q {0x22}, cma {0x2c};",
"const std::vector<std::string> src",
"{",
"};",
"for (std::size_t i {0}; i < 11; ++i)",
"{ std::cout<<src[i]<<lf; }",
"for (const std::string &s : src)",
"{ std::cout<<q<<s<<q<<cma<<lf; }",
"for (std::size_t i {11}; i < src.size(); ++i)",
"{ std::cout<<src[i]<<lf; }",
"std::cout<<lf;",
"return 0;",
"}",
};
for (std::size_t i {0}; i < 11; ++i)
{ std::cout<<src[i]<<lf; }
for (const std::string &s : src)
{ std::cout<<q<<s<<q<<cma<<lf; }
for (std::size_t i {11}; i < src.size(); ++i)
{ std::cout<<src[i]<<lf; }
std::cout<<lf;
return 0;
}

