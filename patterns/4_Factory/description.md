(method) Factory design pattern
===============================

### Definition

The factory method design pattern defines interface for creating an object.
But lets subclasses decide which class to instantiate. Factory method lets the class
defer instantiation to subclasses.

Pattern type - Creational

### Details

Factory design pattern allows to hide logic responsible for creation of an object.
Within this pattern some general `IFabric` interface and `IProduct`
interface are defined. `IFabric` has to have a method which returns objects of a `IProducts`.
Specific Fabrics will implement `IFabric` interface, while specific Products
will implement IProduct interface.

![](factory_uml.jpg)


### Example implementation

Car fabric may be a good example for such pattern. An interface
`ICarFabric` with method `fabricateVehicle(Specification spec)` provides mechanism
for obtaining new `IVehicle` objects through provided `Specification`.

Concrete CarFabric implementation allow to deliver particular car models.
Each Car implement `IVehicle` interface.

In a given example - `ToyotaFabric` returns objects of a `ToyotaCar` while `NissanFabric` creates `NissanCar`.
`PriusCar` or `JukeCar` are examples of classes specific to particular manufacturer.
