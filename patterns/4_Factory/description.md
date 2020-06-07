(method) Factory design pattern
===============================

### Definition

The factory method design pattern defines interface for creating an object.
But lets subclasses decide which class to instantiate. Factory method lets the class
defer instantiation to subclasses.

Pattern type - Creational

### Details

Factory design pattern allows to hide logic responsible for creation of an object.
Within this pattern, we implement some general IFabric interface and IProduct
interface. IFabric has to have a method which returns objects of a IProducts.
Specific Fabrics will implement IFabric interface, while specific Products
will implement IProduct interface.

![](factory_uml.jpg)


### Example implementation

Car fabric may be a good example of implementation. We'll have an interface,
`ICarFabric` with method .fabricateVehicle(Specification spec) which will take general struct
called `Specification`. This method will return object of an interface `IVehicle`.
Then we will implement concrete CarFabric implementations which will deliver particular
car models based on `Specification`. Each Car will implement interface IVehicle.

Both fabrics create objects of an interface `IVehcile`. `ToyotaFabric` returns objects
of a `ToyotaCar` and `NissanFabric` - `NissanCar`. Both of those `car` classes are
abstractions for specific car implementations e.g. `PriusCar` or `JukeCar`.
