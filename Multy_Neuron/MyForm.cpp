#include "MyForm.h"

using namespace System;



[STAThreadAttribute]

int main()
{
    System::Windows::Forms::Application::Run(gcnew MultyNeuron::MyForm());

    return 0;
}
