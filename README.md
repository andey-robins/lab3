Code for Lab Number 3 for COSC 2030 at the University of Wyoming
Fall 2018

Code by Jacob "Andey" Tuttle

StackOverflow consulted to assist with Answer #7
https://stackoverflow.com/questions/16124040/for-loop-with-float-as-counter-increasing-by-0-01-does-not-print-expected-floa

Solutions Follow below.

Answer #2
When n = 255, the sum is 32640
When n = 256, the sum is -32640
This change in sign, when a positive number has been added indicates an overflow error. Meaning the formula can take at maximum the number 255 as input before failing.

Answer #3
When n = 65535, the sum is 2147450880
When n = 65536, the sum is -2147385343.
Once again, the change in sign indicates that the values have overflowed and the sum is now bigger than we are able to store in the given data type. The maximum number of iterations of the algorithm for a size long, is 65535.

Answer #4
When n = 34, the product is 2.95233*10^38
When n = 35, the product is inf(inity)
This overflow shows that the portion of the float object has overflowed into the other portions of the data bit rendering it larger than a float has been able to store and thus it is read as infinity since it is bigger than can be interpreted by the compiler.

Answer #5
When n = 170, the product is 7.25742*10^306
When n = 171, the product is inf(inity)

Answer #6
The harmonic series diverges, and as a result, the sum for a sufficiently large n should be infinity.
As n grows larger and larger, the value calculated in the float falls further and further behind the value calculated in the double. For instance, when n = 10 000 000, the double = 16.6953 and the float = 15.4037
Since the float stores long numbers with less precision than the double, it makes sense that the value would not be as accurate as the double with tries to store all of the information it can have at the cost of using more memory.

Answer #7
The puzzling code segment executes the loop one additional time, printing out "i = 4.4" when it shouldn't according to the loop.
Due to the way that floating point arithmetic works, some values are unable to be represented as a float, and instead the computer must give up the required level of precision and simply approximate what the answer should be.
In reality, the value of i, when it should be 4.4, is ever so slightly lesser than 4.4 and as a result will execute the loop an additional time.
However, the value is so close to 4.4 that when it is printed, the vast number of trailing values following the value we expect is rounded off.

Answer #8
By switching the loop to utilizing a double, exact precision can be achieved, and the loop behaves as anticipated.
