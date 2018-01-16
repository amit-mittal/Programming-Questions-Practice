#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
int main()
{//int argc, char* argv[]
    bool MachineIsWorking = true;

    cout << "Since this machine is working, its value is "
         << MachineIsWorking << endl;

    MachineIsWorking = false;

    cout << "The machine has stopped operating. "
         << "Now its value is " << MachineIsWorking << endl;

    return 0;
}
