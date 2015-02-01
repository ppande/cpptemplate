/**
 * Every header file begins with a header guard. It is required because header files are included in other source files and the same file
 * can potentially get included more than once (directly or indirectly through another header file). This can result in compile time errors
 * saying that the same function has been declared twice. Thus, by using the header guard, the file only gets included once.
 *
 */

#ifndef __SQUARE_H__  // IF __SQUARE_H__ has not been defined before define it now.
#define __SQUARE_H__

// All functon declarations come here, inside the header guard.


int square(int x);



#endif  // Header guard ends
