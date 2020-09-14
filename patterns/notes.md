Notes
=====

Below are some personal reflections about different design patterns. 

### Adapter vs Facade vs Proxy vs Decorator

Adapter is about making two incompatible interface compatible, without 
adding any new functionality.

Facade hides complex interactions behind unified interface.

Proxy is about placing an object between other objects to control communication,
either an access or provide lazy evaluation of heavy operations.
Not to confuse it with adapter pattern, which is intended 
to access specific interface with an interface which is not compatible.

Decorator is a way of adding new behaviour without changing object's implementation.

### Template method

Using this pattern makes it hard to debug code if method performs some complex logic.
Template can be effective in a situations when:
- Implemented logic in simple i.e there's not a lot of code in this method.
- Different implementations of method affects business logic but does not affect overall algorithm.

The second point is very important. If different algorithms are expected to be used,
implement it using `Strategy` pattern.
