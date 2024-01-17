#include <iostream>
typedef unsigned int UINT;

// Function to toggle the contents of the first and last nibbles
UINT toggleNibbles(UINT iNo) 
{
    // Define masks for the first and last nibbles
    UINT iMask1 = 0xF0000000; // 1111 0000 0000 0000 0000 0000 0000 0000
    UINT iMask2 = 0x0000000F;  // 0000 0000 0000 0000 0000 0000 0000 1111

    // Extract the values of the first and last nibbles
    UINT iResult1 = (iNo & iMask1) >> 28;
    UINT iResult2 = iNo & iMask2;

    // Toggle the contents of the first and last nibbles
    iResult1 = ~iResult1;
    iResult2 = ~iResult2;

    // Clear the first and last nibbles in the original iNober
    iNo &= 0x0FFFFFFF; // 0000 1111 1111 1111 1111 1111 1111 1111

    // Combine the modified first and last nibbles back into the iNober
    iNo |= (iResult1 << 28) | iResult2;

    return iNo;
}

int main() {
    UINT iNober;

    // Input from the user
    std::cout << "Enter a iNober: ";
    std::cin >> iNober;

    // Call the function to toggle nibbles and get the modified iNober
    UINT modifiediNober = toggleNibbles(iNober);

    // Display the modified iNober
    std::cout << "Modified iNober: " << modifiediNober << std::endl;

    return 0;
}
