Bridge design pattern
=====================

### Definition

Bridge design pattern decouples an abstraction from its implementation
so that these two can vary independently.

Pattern type - Structural

### Details

Heaving some defined abstraction (rather abstract class than interface)
and some implementor (interface) which is being used by our
abstraction, we can separate concrete abstraction from a specific 
implementation of implementor.

Bridge can be used when we are willing to have a (set of) concrete
implementation(s) of abstraction using some interface(s) for which
different implementations may exists as well.

![](bridge.png)

Compared to Strategy it allows to change interfaces and abstractions independently
while Strategy allows to separate implementations (e.g. of an algorithm).

### Example implementation

Heaving a service gathering builds from deployment services (Jenkins, QuickBuild),
we can implement `Build` which has a `Source` type property (representing implementor).
`Build` abstraction is loosely coupled with `Source` and these two can change independently.
