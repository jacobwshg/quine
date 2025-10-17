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
        "        ",
        "#include <iostream>",
        "#include <string>",
        "#include <vector>",
        "#include <cstddef>",
        "",
        "int",
        "main()",
        "{",
        "    constexpr char lf {0xa}, q {0x22}, cma {0x2c};",
        "    const std::vector<std::string> src",
        "    {",
        "    };",
        "    for (std::size_t i {1}; i < 12; ++i)",
        "    {",
        "        std::cout << src[i] << lf;",
        "    }",
        "    for (const std::string &s : src)",
        "    {",
        "        std::cout << src[0] << q << s << q << cma << lf;",
        "    }",
        "    for (std::size_t i {12}; i < src.size(); ++i)",
        "    {",
        "        std::cout << src[i] << lf;",
        "    }",
        "    return 0;",
        "}",
        "",
    };
    for (std::size_t i {1}; i < 12; ++i)
    {
        std::cout << src[i] << lf;
    }
    for (const std::string &s : src)
    {
        std::cout << src[0] << q << s << q << cma << lf;
    }
    for (std::size_t i {12}; i < src.size(); ++i)
    {
        std::cout << src[i] << lf;
    }
    return 0;
}

