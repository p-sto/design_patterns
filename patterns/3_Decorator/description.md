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
a object type it has to decorate but it also has an object it decorates.

UML:

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

There'll be also a ``OfferSpecification`` class, which will contain information about all
included amenities - TBD.

---

#### Important note

Some languages e.g. Python or Java have a "decorators" but please
not confuse it with this pattern. It's only some syntax sugar which at the first
glance may look like some language-supported decorator pattern built-in, but it's not. 