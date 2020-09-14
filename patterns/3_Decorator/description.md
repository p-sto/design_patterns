Decorator design pattern
========================

### Definition

Decorator attaches additional responsibilities dynamically and provides flexible alternative
to subclassing.

Pattern type - Structural

### Details

Core idea behind decorator pattern is to change behaviour of an object at runtime
without modifying it's implementation. At the same time, decorator (an object aka wrapper),
has to be of a type of decorated object as it's interchangeable with it.

What's kind of unique for this pattern is that is has to implement interface of
a object type it has to decorate but it also has an object it decorates. So it
uses both inheritance and composition.


![](decorator.gif) 

We can chain decorators and from perspective of whichever decorator we choose
(from this chain), it'll be always thinking that there's nothing between itself
and decorated object. In other words - decorator is not aware if there are any 
other decorators applied. Decorated component/object preserve's decorated object's
interface, but it's behaviour may change dynamically at runtime.

### Example implementation

When speaking about particular implementation, let's think about a buying brand new
car and possible amenities variations. Obviously, there's always some base version
of a car and client can equip it with some additional options. Base car version
offer may be treated as a fundamental object (implementing ``IOffer`` interface)
and all additional options (e.g. LED headlights) can be treated as decorators.


#### Important note

Some languages e.g. Python or Java have "decorators" but these should
not be confused with patterns itself. These do provide similar
functionality, though it's only some syntax sugar for easier
method/function response modification.
