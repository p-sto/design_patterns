Strategy design pattern
=======================

### Definition

Strategy design pattern defines family of algorithms, encapsulates each one of it
and allow to use them interchangeably. Strategy lets the algorithms vary independently 
from client that use it.


### Details

In a nutshell - strategy decouples implementation and usage by providing unified
interface, which family of algorithms have to implement in order to use them interchangeably.
This pattern works nicely with dependency injection.

Strategy focus on a composition over inheritance in order to effectively reuse code.

In a implemented example, IShape interface is defined, providing methods ``getCircumference``
and ``getArea``. Interface is implemented by ``Circle`` and ``Rectangle`` classes, which
calculate area and circumference accordingly to class specific shapes.
``ShapesBox`` is a class, which object accepts list of IShape compatible objects, and
implements method ``getShapesTotalArea``. It iterates over list of objects and calls
``getArea`` method on each of it, summing all values.
From ``ShapesBox`` perspective it doesnt's matter what's concrete object it is dealing with,
as all of them implement unified interface.

Execute ``make`` to compile. 
