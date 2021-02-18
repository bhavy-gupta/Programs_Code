Python 3.8.1 (tags/v3.8.1:1b293b6, Dec 18 2019, 23:11:46) [MSC v.1916 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> hex(11)
'0xb'
>>> hex(195)
'0xc3'
>>> hex(1)
'0x1'
>>> oct(192)
'0o300'
>>> bin(156)
'0b10011100'
>>> id(62)
140733592620608
>>> a=10
>>> id(a)
140733592618944
>>> id(a)
140733592618944
>>> b=10
>>> id(b)
140733592618944
>>> a++
SyntaxError: invalid syntax
>>> ++a
10
>>> ++a
10
>>> -+a+-
SyntaxError: invalid syntax
>>> range(0,5)
range(0, 5)
>>> a=range(0,5)
>>> a
range(0, 5)
>>> id(a)
2170389388432
>>> for i in a
SyntaxError: invalid syntax
>>> for i in a;
SyntaxError: invalid syntax
>>> for i in a:
	print(i)

	
0
1
2
3
4
>>> isinstance(12,int)
True
>>> isinstance(9,str)
False
>>> for o in a:
	print(a)

	
range(0, 5)
range(0, 5)
range(0, 5)
range(0, 5)
range(0, 5)
>>> import java.io.*
SyntaxError: invalid syntax
>>> import cv2
Traceback (most recent call last):
  File "<pyshell#30>", line 1, in <module>
    import cv2
ModuleNotFoundError: No module named 'cv2'
>>> import python
Traceback (most recent call last):
  File "<pyshell#31>", line 1, in <module>
    import python
ModuleNotFoundError: No module named 'python'
>>> import math
>>> math.factorial(5)
120
>>> math.remainder(5,2)
1.0
>>> math.pow(2,9)
512.0
>>> bool(a+b)
Traceback (most recent call last):
  File "<pyshell#36>", line 1, in <module>
    bool(a+b)
TypeError: unsupported operand type(s) for +: 'range' and 'int'
>>> range(5,2,2)
range(5, 2, 2)
>>> all(1.2.1.)
SyntaxError: invalid syntax
>>> list(range(5,2))
[]
>>> list(range(4,13,3))
[4, 7, 10]
>>> list(reversed([1,2,3,4,5]))
[5, 4, 3, 2, 1]
>>> a=[10,20,30,40,50]
>>> a
[10, 20, 30, 40, 50]
>>> sorted(a)
[10, 20, 30, 40, 50]
>>> a=[65,94,15,87,265,42,35]
>>> a
[65, 94, 15, 87, 265, 42, 35]
>>> sorted(a)
[15, 35, 42, 65, 87, 94, 265]
>>> sorted(a,key=len,reverse=True)
Traceback (most recent call last):
  File "<pyshell#50>", line 1, in <module>
    sorted(a,key=len,reverse=True)
TypeError: object of type 'int' has no len()
>>> sorted(a,reverse=True)
[265, 94, 87, 65, 42, 35, 15]
>>> sorted(["aa","aaa","aaaa","b"])
['aa', 'aaa', 'aaaa', 'b']
>>> sorted(["aa","aaa","aaaa","b"],key=len)
['b', 'aa', 'aaa', 'aaaa']
>>> help(ascii)
Help on built-in function ascii in module builtins:

ascii(obj, /)
    Return an ASCII-only representation of an object.
    
    As repr(), return a string containing a printable representation of an
    object, but escape the non-ASCII characters in the string returned by
    repr() using \\x, \\u or \\U escapes. This generates a string similar
    to that returned by repr() in Python 2.

>>> help(filter)
Help on class filter in module builtins:

class filter(object)
 |  filter(function or None, iterable) --> filter object
 |  
 |  Return an iterator yielding those items of iterable for which function(item)
 |  is true. If function is None, return the items that are true.
 |  
 |  Methods defined here:
 |  
 |  __getattribute__(self, name, /)
 |      Return getattr(self, name).
 |  
 |  __iter__(self, /)
 |      Implement iter(self).
 |  
 |  __next__(self, /)
 |      Implement next(self).
 |  
 |  __reduce__(...)
 |      Return state information for pickling.
 |  
 |  ----------------------------------------------------------------------
 |  Static methods defined here:
 |  
 |  __new__(*args, **kwargs) from builtins.type
 |      Create and return a new object.  See help(type) for accurate signature.

>>> 