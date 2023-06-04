#pragma once

/*
	Integer-String Methods
	Various functions that deal with string-represented numbers in the Cint library
	Generalises all C number-types (int, long, etc.) and strings that represent numbers simply as "integers"
	All references to an "integer" or "integer-string" in this file refer to a Cint integer (compressed string-represented number) unless specified otherwise
	
	List of functions:
		struct Integer		Integer object to make working with Cint Integers easier
		integer				Integer Constructor
		freeCint			Integer Destructor
		printCint			Print Cint Integer
		getCint				Get Cint Integer from user input
		Cintlen				Get number of digits in Cint Integer
		Cintsize			Get size of Cint Integer (in bytes)
		CintCat				Contatenates two Cint Integers
		subCint				Gets a portion of a Cint Integer
		CintAdd				Add two Cint Integers
		CintSub				Subtract a Cint Integer from another
		CintMul				Multiply two Cint Integers
		CintDiv				Divide a Cint Integer by another
		CintMod				Modulus of two Cint Integers
		CintInc				Increments a Cint Integer
		CintDec				Decrements a Cint Integer
*/



/*
	Integer object to make working with Cint Integers easier
	
	Will be referred to as just an "Integer"
	
	Attributes:
		char *value	= Pointer to string containing integer value
	
*/
typedef struct Integer {
	char *value;
} Integer;



/*
	Integer Constructor
	
	Takes in a string and converts it to an Integer object using pairing (compression)
	
	Parameters:
		char * const s	= String input
			Const ensures original value is unchanged
	
	Returns an Integer
	
	Does not (yet) check if it successfully allocates the requested memory. (May crash if too much memory is allocated)
*/
Integer integer(char * const s);



/*
	Integer Copy Constructor
	
	Takes in an Integer and creates a copy of it.
	
	Parameters:
		const Integer c	= Integer to copy
			Const ensures original value is unchanged
	
	Returns an Integer
	
	Does not (yet) check if it successfully allocates the requested memory. (May crash if too much memory is allocated)
*/
Integer Cintcpy(const Integer c);



/*
	Integer Destructor
	
	Takes in an Integer and frees up its memory
	
	Parameters:
		Integer &c	= Address of Integer to free
	
	No return value
*/
void freeCint(Integer *c);


/*
	Print Cint Integer
	
	Takes in an Integer and prints it to the screen by decompressing it in chunks
	
	Parameters:
		Integer c	= Integer to print
			Const ensures original value is unchanged
	
	No return value
*/
void printCint(const Integer c);



/*
	Get Cint Integer from user input
	
	Gets a string input from the user and converts it to an Integer
	
	No parameters
	
	Returns an Integer
*/
Integer getCint();



/*
	Get number of digits in Cint Integer
	
	Takes in an Integer and returns its length (the number of digits in the Integer)
	
	Parameters:
		Integer c	= Integer to find length of
			Const ensures original value is unchanged
	
	Returns an unsigned long long
*/
unsigned long long Cintlen(const Integer c);



/*
	Get size of Cint Integer (in bytes)
	
	Takes in an Integer and returns its size in memory (in bytes)
	
	Parameters:
		Integer c	= Integer to find size of
			Const ensures original value is unchanged
	
	Returns an unsigned long long
*/
unsigned long long Cintsize(const Integer c);



/*
	Concatenates two Cint Integers
	
	Takes in two Integers and returns a single Integer with the inputs concatenated together
	
	Parameters:
		Integer a	= Start integer
			Const ensures original value is unchanged
		Integer b	= Integer to concatenate
			Const ensures original value is unchanged
	
	Returns an Integer
*/
Integer CintCat(const Integer a, const Integer b);



/*
	Gets a portion of a Cint Integer
	
	Takes in an Integer, and two unsigned long longs and returns a portion of the input Integer
	
	Parameters:
		Integer c				= Integer to find portion of
			Const ensures original value is unchanged
		unsigned long long s	= Start of portion - index value
			Const ensures original value is unchanged
		unsigned long long e	= End of portion - index value - the digit at this index will not be included in the output
			Const ensures original value is unchanged
	
	Returns an Integer
*/
Integer subCint(const Integer c, const unsigned long long s, const unsigned long long e);



/*
	Add two Cint Integers
	
	Takes in two Integers and adds them together, since adding two Integer structs with C will not work
	
	Parameters:
		Integer a	= Integer to add
			Const ensures original value is unchanged
		Integer b	= Integer to add
			Const ensures original value is unchanged
	
	Returns an Integer
*/
Integer CintAdd(const Integer a, const Integer b);



/*
	Subtract one Cint Integer from another
	
	Takes in two Integers and subtracts one from the other, since subtracting two Integer structs with C will not work
	
	Parameters:
		Integer a	= Integer to subtract from
			Const ensures original value is unchanged
		Integer b	= Integer to subtract
			Const ensures original value is unchanged
	
	Returns an Integer
*/
Integer CintSub(const Integer a, const Integer b);



/*
	Multiply two Cint Integers
	
	Takes in two Integers and multiplies them together, since multiplying two Integer structs with C will not work
	
	Parameters:
		Integer a	= Integer to multiply
			Const ensures original value is unchanged
		Integer b	= Integer to multiply
			Const ensures original value is unchanged
	
	Returns an Integer
*/
Integer CintMul(const Integer a, const Integer b);



/*
	Divide a Cint Integer by another
	
	Takes in two Integers and divides one by the other, since dividing two Integer structs with C will not work
	
	Parameters:
		Integer a	= Integer to divide (numerator)
			Const ensures original value is unchanged
		Integer b	= Integer to divide by (denominator)
			Const ensures original value is unchanged
	
	Returns an Integer
*/
Integer CintDiv(const Integer a, const Integer b);



/*
	Modulus of two Cint Integers
	
	Takes in two Integers and finds their modulus, since finding the modulo of two Integer structs with C will not work
	
	Parameters:
		Integer a	= Integer to divide (numerator)
			Const ensures original value is unchanged
		Integer b	= Integer to divide by (denominator)
			Const ensures original value is unchanged
	
	Returns an Integer
*/
Integer CintMod(const Integer a, const Integer b);



/*
	Increments a Cint Integer
	
	Takes in an Integer and increments it by 1, since C cannot increment Integer structs
	
	Parameters:
		Integer c	= Integer to increment
			Const ensures original value is unchanged
	
	Returns an Integer
*/
Integer CintInc(const Integer c);



/*
	Decrements a Cint Integer
	
	Takes in an Integer and decrements it by 1, since C cannot decrement Integer structs
	
	Parameters:
		Integer c	= Integer to decrement
			Const ensures original value is unchanged
	
	Returns an Integer
*/
Integer CintDec(const Integer c);
