#include<iostream>

using namespace std;
int main()
{
    //Interger variable:
    // int a=12;
    // int b=15;
    int a=12,b=15;// WE CAN COMBINE SAME TYPES OF VARIABLE IN A SINGLE LINE.
    cout<<"This is tutorial-4.\nHere the value of a is:"<<a<<
    ".\nThe value of b is:"<<b<<endl;
  
    //Float variable:
   float pi=3.14;
    cout<<"The value of pi is:"<< pi<<endl;

   //Character Variable:
    char c = 'S';//CHARACTER SHOULD BE WRITE IN''
    cout<<"The value of c is:"<<c<<endl;

    //boolean Variable:
    // bool is_true= false;
    // cout<<bool;
    return 0;
}
/*
Rules of naming of a variables:
---> Variable name should be a to z(255 characters)
---> Variable name shoud be start with alphabet or underscore
---> Variable name is case sensetive
---> No special caracter should be use
---> No reserve keyword name choose as variable name  
*/



/*

Types of variables  Typical Bit Width    Typical Range 


char	                1byte:	     -127 to 127 or 0 to 255
unsigned char   	    1byte	     0 to 255
signed char	            1byte   	 -127 to 127
int	                    4bytes  	-2147483648 to 2147483647
unsigned int	        4bytes	     0 to 4294967295
signed int	            4bytes	    -2147483648 to 2147483647
short int	            2bytes	    -32768 to 32767
unsigned short int	    2bytes	    0 to 65,535
signed short int	    2bytes	    -32768 to 32767
long int	            8bytes	    -9223372036854775808 to 9223372036854775807
signed long int	        8bytes	    same as long int
unsigned long int	    8bytes	    0 to 18446744073709551615
long long int	        8bytes  	-(2^63) to (2^63)-1
unsigned long long int	8bytes	     0 to 18,446,744,073,709,551,615
float	                4bytes	
double	                8bytes	
long double	            12bytes	
wchar_t	                2 or 4 bytes	1 wide character

===== > Here is a list of all these reserved words <====

alignas (since C++11)       alignof (since C++11)       and
and_eq                      asm                         atomic_cancel (TM TS)
atomic_commit (TM TS)       atomic_noexcept (TM TS)     auto(1)
bitand                      bitor                       bool
break                       case                        catch
char                        char16_t (since C++11)      char32_t (since C++11)
class(1)                    compl                       concept (since C++20)       
const                       constexpr (since C++11)     const_cast
continue                    co_await (coroutines TS)    co_return (coroutines TS)
co_yield (coroutines TS)    decltype (since C++11)      default(1)
delete(1)                   do                          double
dynamic_cast                else                        enum
explicit                    export(1)                   extern(1)
false                       float                       for
friend                      goto                        if
import (modules TS)         inline(1)                   int
long                        module (modules TS)         mutable(1)
namespace                   new                         noexcept (since C++11)
not                         not_eq                      nullptr (since C++11)
operator                    or                          or_eq
private                     protected                   public
register(2)                 reinterpret_cast            requires (since C++20)
return                      short                       signed
sizeof(1)                   static                      static_assert (since C++11)
static_cast                 struct(1)                   switch
synchronized (TM TS)        template                    this
thread_local (since C++11)  throw                       true
try                         typedef                     typeid
typename                    union                       unsigned
using(1)                    virtual                     void
volatile                    wchar_t                     while
xor                         xor_eq

*/