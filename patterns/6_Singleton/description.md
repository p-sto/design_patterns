Singleton design pattern
========================

### Definition

The singleton design pattern ensures that class has single instance and provides
a global access to it.

### Details

This pattern has always caused a lot of fuss and there are countless of people calling
it an anti-pattern. For me it's just another pattern IT IS hard to find suitable
application for it, but it's doable.

![](singleton_uml.png)


### Example implementation

I personally perceive config objects as one of examples where this patter COULD be
potentially useful - to ensure that our app (e.g. web) always uses the same setup.
The biggest trick to deal with sigleton in C++ is to operate properly with `static`
keyword.