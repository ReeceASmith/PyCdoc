# Integer-String Methods

Various functions that deal with string-represented numbers in the Cint library\
Generalises all C number-types (int, long, etc.) and strings that represent numbers simply as "integers"\
All references to an "integer" or "integer-string" in this file refer to a Cint integer (compressed string-represented number) unless specified otherwise

### List of functions
| Function Name | Description |
|:---:|---|
| [struct Integer](#struct-Integer-9) | Integer object to make working with Cint Integers easier |
| [integer](#integer-10) | Integer Constructor |
| [freeCint](#freeCint-11) | Integer Destructor |
| [printCint](#printCint-12) | Print Cint Integer |
| [getCint](#getCint-13) | Get Cint Integer from user input |
| [Cintlen](#Cintlen-14) | Get number of digits in Cint Integer |
| [Cintsize](#Cintsize-15) | Get size of Cint Integer (in bytes) |
| [CintCat](#CintCat-16) | Contatenates two Cint Integers |
| [subCint](#subCint-17) | Gets a portion of a Cint Integer |
| [CintAdd](#CintAdd-18) | Add two Cint Integers |
| [CintSub](#CintSub-19) | Subtract a Cint Integer from another |
| [CintMul](#CintMul-20) | Multiply two Cint Integers |
| [CintDiv](#CintDiv-21) | Divide a Cint Integer by another |
| [CintMod](#CintMod-22) | Modulus of two Cint Integers |
| [CintInc](#CintInc-23) | Increments a Cint Integer |
| [CintDec](#CintDec-24) | Decrements a Cint Integer |

## <a name="struct-Integer-9"></a>`struct Integer `
**Integer object to make working with Cint Integers easier**

Will be referred to as just an "Integer"\
\



### Attributes
| Attribute | Description | Notes |
|:---:|---|---|
| <a name="struct-Integer-9"></a>char *value | Pointer to string containing integer value |  |



#### Extra Info



## <a name="integer-10"></a>`integer(char * const s)`
**Integer Constructor**

Takes in a string and converts it to an Integer object using pairing (compression)\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="integer-10"></a>char * const s | String input | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info:
Does not (yet) check if it successfully allocates the requested memory. (May crash if too much memory is allocated)



## <a name="freeCint-11"></a>`Cintcpy(const Integer c)`
**Integer Copy Constructor**

Takes in an Integer and creates a copy of it.\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="freeCint-11"></a>const Integer c | Integer to copy | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info:
Does not (yet) check if it successfully allocates the requested memory. (May crash if too much memory is allocated)



## <a name="printCint-12"></a>`freeCint(Integer *c)`
**Integer Destructor**

Takes in an Integer and frees up its memory\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="printCint-12"></a>Integer &c | Address of Integer to free |  |


**Returns:** Nothing


#### Extra Info



## <a name="getCint-13"></a>`printCint(const Integer c)`
**Print Cint Integer**

Takes in an Integer and prints it to the screen by decompressing it in chunks\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="getCint-13"></a>Integer c | Integer to print | Const ensures original value is unchanged<br> |


**Returns:** Nothing


#### Extra Info



## <a name="Cintlen-14"></a>`long long Cintlen(const Integer c)`
**Get Cint Integer from user input**

Gets a string input from the user and converts it to an Integer\
\
No parameters\
\
Returns an Integer\
*/\
Integer getCint();\
\
\
\
/*\
Get number of digits in Cint Integer\
\
Takes in an Integer and returns its length (the number of digits in the Integer)\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="Cintlen-14"></a>Integer c | Integer to find length of | Const ensures original value is unchanged<br> |


**Returns:** `unsigned long long`


#### Extra Info



## <a name="Cintsize-15"></a>`long long Cintsize(const Integer c)`
**Get size of Cint Integer (in bytes)**

Takes in an Integer and returns its size in memory (in bytes)\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="Cintsize-15"></a>Integer c | Integer to find size of | Const ensures original value is unchanged<br> |


**Returns:** `unsigned long long`


#### Extra Info



## <a name="CintCat-16"></a>`CintCat(const Integer a, const Integer b)`
**Concatenates two Cint Integers**

Takes in two Integers and returns a single Integer with the inputs concatenated together\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="CintCat-16"></a>Integer a | Start integer | Const ensures original value is unchanged<br> |
| <a name="CintCat-16"></a>Integer b | Integer to concatenate | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info



## <a name="subCint-17"></a>`subCint(const Integer c, const unsigned long long s, const unsigned long long e)`
**Gets a portion of a Cint Integer**

Takes in an Integer, and two unsigned long longs and returns a portion of the input Integer\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="subCint-17"></a>Integer c | Integer to find portion of | Const ensures original value is unchanged<br> |
| <a name="subCint-17"></a>unsigned long long s | Start of portion - index value | Const ensures original value is unchanged<br> |
| <a name="subCint-17"></a>unsigned long long e | End of portion - index value - the digit at this index will not be included in the output | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info



## <a name="CintAdd-18"></a>`CintAdd(const Integer a, const Integer b)`
**Add two Cint Integers**

Takes in two Integers and adds them together, since adding two Integer structs with C will not work\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="CintAdd-18"></a>Integer a | Integer to add | Const ensures original value is unchanged<br> |
| <a name="CintAdd-18"></a>Integer b | Integer to add | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info



## <a name="CintSub-19"></a>`CintSub(const Integer a, const Integer b)`
**Subtract one Cint Integer from another**

Takes in two Integers and subtracts one from the other, since subtracting two Integer structs with C will not work\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="CintSub-19"></a>Integer a | Integer to subtract from | Const ensures original value is unchanged<br> |
| <a name="CintSub-19"></a>Integer b | Integer to subtract | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info



## <a name="CintMul-20"></a>`CintMul(const Integer a, const Integer b)`
**Multiply two Cint Integers**

Takes in two Integers and multiplies them together, since multiplying two Integer structs with C will not work\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="CintMul-20"></a>Integer a | Integer to multiply | Const ensures original value is unchanged<br> |
| <a name="CintMul-20"></a>Integer b | Integer to multiply | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info



## <a name="CintDiv-21"></a>`CintDiv(const Integer a, const Integer b)`
**Divide a Cint Integer by another**

Takes in two Integers and divides one by the other, since dividing two Integer structs with C will not work\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="CintDiv-21"></a>Integer a | Integer to divide (numerator) | Const ensures original value is unchanged<br> |
| <a name="CintDiv-21"></a>Integer b | Integer to divide by (denominator) | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info



## <a name="CintMod-22"></a>`CintMod(const Integer a, const Integer b)`
**Modulus of two Cint Integers**

Takes in two Integers and finds their modulus, since finding the modulo of two Integer structs with C will not work\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="CintMod-22"></a>Integer a | Integer to divide (numerator) | Const ensures original value is unchanged<br> |
| <a name="CintMod-22"></a>Integer b | Integer to divide by (denominator) | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info



## <a name="CintInc-23"></a>`CintInc(const Integer c)`
**Increments a Cint Integer**

Takes in an Integer and increments it by 1, since C cannot increment Integer structs\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="CintInc-23"></a>Integer c | Integer to increment | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info



## <a name="CintDec-24"></a>`CintDec(const Integer c)`
**Decrements a Cint Integer**

Takes in an Integer and decrements it by 1, since C cannot decrement Integer structs\
\



### Parameters
| Parameter | Description | Notes |
|:---:|---|---|
| <a name="CintDec-24"></a>Integer c | Integer to decrement | Const ensures original value is unchanged<br> |


**Returns:** `Integer`


#### Extra Info



