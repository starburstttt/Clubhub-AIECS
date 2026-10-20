#include <iostream>

#include "clubhub/banner.hpp"

int main()
{
    std::cout << clubhub::banner(clubhub::kTeamName);
    std::cout << "=================================\n";
    std::cout << "AIECS Club Hub\n";
    std::cout << "Team KoPrei\n";
    std::cout << "=================================\n";
    std::cout << "Commands arrive later in a lab, Bye!\n";
    return 0;
}