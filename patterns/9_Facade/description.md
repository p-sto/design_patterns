Facade design pattern
=====================

### Definition

The facade provides unified interface to a set of interfaces in a subsystem.
Facade provide a higher level interface that make a sub system easier to use.

### Details

Facade allows to hide some (complex) logic by aggregating usage of multiple interfaces in a simpler manner.
If client is intended to perform an action, which requires usage of multiple
interfaces (objects), then intention of facade is to provide hide all this logic behind e.x. one, unified
of a new interface.

`Facade does not probide new functionality.`

Example:

C client class may require to call method1 of a A class, method2 of a B class and method3 of C class.
Additionally, those classes might be coupled together. To reduce client logic, we provide
a simplified interface (facade) which deal with all this things under a single method.
