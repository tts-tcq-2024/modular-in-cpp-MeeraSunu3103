#include "TelCoColorCoderTestFunctions.h"
#include "TelCoColorCoderTests_RunPairToNumberTests.h"
#include "TelCoColorCoderTests_RunNumberToPairTests.h"
#include "TelCoColorCoder_PrintColorCodes.h"

int main() {
    RunNumberToPairTests();
    RunPairToNumberTests();
    PrintColorCodes();

    return 0;
}
