#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <sstream>

int
main()
{
    constexpr char lf {0xa}, q {0x22}, cma {0x2c};
    const std::vector<std::string> src
    {
        "        ",
        "#include <iostream>",
        "#include <string>",
        "#include <vector>",
        "#include <cstddef>",
        "#include <sstream>",
        "",
        "int",
        "main()",
        "{",
        "    constexpr char lf {0xa}, q {0x22}, cma {0x2c};",
        "    const std::vector<std::string> src",
        "    {",
        "    };",
        "    std::ostringstream oss {};",
        "    for (std::size_t i {1}; i < 13; ++i)",
        "    {",
        "        oss << src[i] << lf;",
        "    }",
        "    for (const std::string &s : src)",
        "    {",
        "        oss << src[0] << q << s << q << cma << lf;",
        "    }",
        "    for (std::size_t i {13}; i < src.size(); ++i)",
        "    {",
        "        oss << src[i] << lf;",
        "    }",
        "    std::cout << oss.str();",
        "    return 0;",
        "}",
        "",
    };
    std::ostringstream oss {};
    for (std::size_t i {1}; i < 13; ++i)
    {
        oss << src[i] << lf;
    }
    for (const std::string &s : src)
    {
        oss << src[0] << q << s << q << cma << lf;
    }
    for (std::size_t i {13}; i < src.size(); ++i)
    {
        oss << src[i] << lf;
    }
    std::cout << oss.str();
    return 0;
}

