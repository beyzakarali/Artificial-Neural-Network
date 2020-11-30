#include "WinForm.h"

using namespace System;



[STAThreadAttribute]

int main()
{
    System::Windows::Forms::Application::Run(gcnew ProjectANN::WinForm());
   
    return 0;
}

