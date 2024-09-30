#include "TelCoColorCoderTestFunctions.h"
#include "TelCoColorCoderTests_RunPairToNumberTests.h"
#include "TelCoColorCoderTests_RunNumberToPairTests.h"

int main() {
    RunNumberToPairTests();
    RunPairToNumberTests();

    return 0;
}
