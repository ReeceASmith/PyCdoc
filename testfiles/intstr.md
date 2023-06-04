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

<a name="test"></a>Test