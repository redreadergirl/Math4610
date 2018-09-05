**Routine Name:**           maceps

**Author:** Claire Romney

**Language:** C++

The code can be compiled by running:

     g++ maceps.cpp -o maceps

**Description/Purpose:** This routine will compute the single precision value for the machine epsilon or the number of digits
in the representation of real numbers in single precision. This is a routine for analyzing the behavior of any computer. This
usually will need to be run one time for each computer.

**Input:** None.

**Output:** This routine returns a single precision value for the number of decimal digits that can be represented on the
computer being queried.

**Usage/Example:**

The routine doesn't have any arguments.

     ./maceps.exe

Output from the lines above:

      5.96046E-08

**Implementation/Code:** The following is the code for maceps()

    float maceps() {
	    float num = 1;
	    while (num + 1 != 1) {
		    num /= 2;
	    }
	    return num;
    }
