#include "TelCoColorCoderFunctions.h"

void RunReferenceManualTest() {
    std::string expectedReferenceManual = "\nCode\tMajor Color\tMinor Color";
    expectedReferenceManual +=  "\n1\tWhite\t\tBlue";
    expectedReferenceManual +=  "\n2\tWhite\t\tOrange";
    expectedReferenceManual +=  "\n3\tWhite\t\tGreen";
    expectedReferenceManual +=  "\n4\tWhite\t\tBrown";
    expectedReferenceManual +=  "\n5\tWhite\t\tSlate";
    expectedReferenceManual +=  "\n6\tRed\t\tBlue";
    expectedReferenceManual +=  "\n7\tRed\t\tOrange";
    expectedReferenceManual +=  "\n8\tRed\t\tGreen";
    expectedReferenceManual +=  "\n9\tRed\t\tBrown";
    expectedReferenceManual +=  "\n10\tRed\t\tSlate";
    expectedReferenceManual +=  "\n11\tBlack\t\tBlue";
    expectedReferenceManual +=  "\n12\tBlack\t\tOrange";
    expectedReferenceManual +=  "\n13\tBlack\t\tGreen";
    expectedReferenceManual +=  "\n14\tBlack\t\tBrown";
    expectedReferenceManual +=  "\n15\tBlack\t\tSlate";
    expectedReferenceManual +=  "\n16\tYellow\t\tBlue";
    expectedReferenceManual +=  "\n17\tYellow\t\tOrange";
    expectedReferenceManual +=  "\n18\tYellow\t\tGreen";
    expectedReferenceManual +=  "\n19\tYellow\t\tBrown";
    expectedReferenceManual +=  "\n20\tYellow\t\tSlate";
    expectedReferenceManual +=  "\n21\tViolet\t\tBlue";
    expectedReferenceManual +=  "\n22\tViolet\t\tOrange";
    expectedReferenceManual +=  "\n23\tViolet\t\tGreen";
    expectedReferenceManual +=  "\n24\tViolet\t\tBrown";
    expectedReferenceManual +=  "\n25\tViolet\t\tSlate";
    
    assert((expectedReferenceManual == BuildColorCodeReferenceManual()));
}
