//----------------------------------------------------------------------------------------------------------------------
///
/// \file       spml.cpp
/// \brief      SPML (Special Program Modules Library) - Cпециальная Библиотека Программных Модулей (СБПМ)
/// \date       14.07.20 - создан
/// \author     Соболев А.А.
/// \addtogroup spml
/// \{
///

#include <spml.h>

namespace SPML /// Специальная библиотека программных модулей (СБ ПМ)
{
//----------------------------------------------------------------------------------------------------------------------
std::string GetVersion()
{
    return "SPML_25.11.2021_v01_Develop";
}

//----------------------------------------------------------------------------------------------------------------------
void ClearConsole()
{
    // 1 способ:
    // Reset terminal - быстрее, чем вызов std::system
    printf("\033c");

    // 2 способ:
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
//    std::cout << "\x1B[2J\x1B[H";

    // 3 способ:
//    std::system("clear");
}

}
/// \}
