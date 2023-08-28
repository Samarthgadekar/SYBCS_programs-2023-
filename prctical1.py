Python 3.10.12 (main, Jun 11 2023, 05:26:28) [GCC 11.4.0] on linux
Type "help", "copyright", "credits" or "license()" for more information.
>>> print("hello world !")
hello world !
>>> print(3)
3
>>> print(2+3)
5
>>> print(2*3)
6
>>> print(2**3)
8
>>> print(7/3)
2.3333333333333335
>>> print(7//3)
2
>>> #practical:1,Q.1
>>> print("the value of 3+4 is",3+4,".")
the value of 3+4 is 7 .
>>> print("the value of 3**2 is",3**2,".")
the value of 3**2 is 9 .
>>> print("i am samarth gadekar")
i am samarth gadekar
>>> print("my number is 9322752921")
my number is 9322752921
>>> print(9//2)
4
>>> print(9/2)
4.5
>>> print(29-20)
9
>>> #Q2
>>> 4.0/10.0+3.5*2
7.4
>>> a=10%4+6/3
print(a)
4.0
c=abs(4-20//3)**3
print(c)
8
from math import *
d=sqrt(4.5-5.0)+7*3
Traceback (most recent call last):
  File "/usr/lib/python3.10/idlelib/run.py", line 578, in runcode
    exec(code, self.locals)
  File "<pyshell#22>", line 1, in <module>
ValueError: math domain error
from math import*
d=sqrt(4.5-5.0)+7*3
Traceback (most recent call last):
  File "/usr/lib/python3.10/idlelib/run.py", line 578, in runcode
    exec(code, self.locals)
  File "<pyshell#24>", line 1, in <module>
ValueError: math domain error
from math import*
d=sqrt((4.5-5.0)+7*3)
print(d)
4.527692569068709
s=3*10//3+10%3
print(s)
11
3**3
27
#Question-3
a==2
False
a=2
type(a)
<class 'int'>
pi=3.14
type(pi)
<class 'float'>
name="python"
type(name)
<class 'str'>
q=true
Traceback (most recent call last):
  File "/usr/lib/python3.10/idlelib/run.py", line 578, in runcode
    exec(code, self.locals)
  File "<pyshell#39>", line 1, in <module>
NameError: name 'true' is not defined. Did you mean: 'trunc'?
q="true"
type(q)
<class 'str'>
q= True
type(q)
<class 'bool'>
z=False
type(z)
<class 'bool'>
#question-4
2+5
7
2+5*3
17
(2/5)+4/5-(7*5)/5
-5.8
17%5
2
2**5
32
2**5+5**2
57
56/8
7.0
#question-5
import random
a=1,b=10
SyntaxError: invalid syntax. Maybe you meant '==' or ':=' instead of '='?
import random
a=1
b=10
print(random.randint(a,b))
10
print(random.randint(a,b))
7
print(random.randint(a,b))
4
print(random.randint(a,b))
4
print(random.randint(a,b))
2
print(random.randint(a,b))
3
print(random.randint(a,b))
9
1=0
SyntaxError: cannot assign to literal here. Maybe you meant '==' instead of '='?
a=1
b=100
print(random.randint(a,b))
17
print(random.randint(a,b))
65
print(random.randint(a,b))
46
print(random.randint(a,b))
56
print(random.randint(a,b))
67
#question-6
diameter=5
perimeter=3.14*diameter
print(perimeter)
15.700000000000001
Ue=230
amplitude=Ue*sqrt(2)
print(amplitude)
325.2691193458119
def(x):
    
SyntaxError: invalid syntax
def (x)
SyntaxError: invalid syntax
def (x):
    
SyntaxError: invalid syntax
def f(x):
    sq=x*x
    print("squre::",sq)

    
f(4)
squre:: 16
def f(x):
    a=sin(x)
    b=cos(x)
    c=log(x)
    print("sin",x,"=",a)

    
def f(x):
    a=sin(x)
    b=cos(x)
    c=log(x)
    print("sin",x,"=",a)
    print("cos",x,"=",b)
    print("log",x,"=",c)

    
f(2)
sin 2 = 0.9092974268256817
cos 2 = -0.4161468365471424
log 2 = 0.6931471805599453

def f(x)
SyntaxError: incomplete input
def f(x,y,z):
    sum=x+y+z
    product=x*y*z
    print("sum::",sum)
    print("product::",product)

    
f(2,3,5)
sum:: 10
product:: 30
