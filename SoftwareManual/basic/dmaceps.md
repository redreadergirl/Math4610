**Routine Name:**           dmaceps

**Author:** Claire Romney

**Language:** C++

The code can be compiled by running:

     g++ dmaceps.cpp -o maceps

**Description/Purpose:** This routine will compute the double precision value for the machine epsilon or the number of digits
in the representation of real numbers in double precision. This is a routine for analyzing the behavior of any computer. This
usually will need to be run one time for each computer.

**Input:** None.

**Output:** This routine returns a double precision value for the number of decimal digits that can be represented on the
computer being queried.

**Usage/Example:**

The routine doesn't have any arguments.

     ./dmaceps.exe

Output from the lines above:

      1.11022e-16

**Implementation/Code:** The following is the code for dmaceps()

    double dmaceps() {
	    double num = 1.0;
	    while (num + 1.0 != 1.0) {
		    num /= 2;
	    }
	    return num;
    }
