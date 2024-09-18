// DLL_Function_Caller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DLL_Creater.h"

int main()
{
    std::cout << "Calling SetAxis1Enable from DLL..." << std::endl;

    SetAxis1Enable();
    
  //  Axis1JogFWD();
    
  //  Axis1JogFwdStop();

    SetAxis1Disable();

    ReadAxis1Enable();

    //ReadAxis1Position();


    Get_nIntToRead_Function();

    //GetAxis1Status();
    



    std::cout << "Function call completed." << std::endl;
    return 0;
}
