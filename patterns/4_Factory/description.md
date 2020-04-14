(method) Factory design pattern
===============================

### Definition

The factory method design pattern defines interface for creating an object.
But lets subclasses decide which class to instantiate. Factory method lets the class
defer instantiation to subclasses.

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

In example, `ToyotaFabric` and `NissanFabric` were implemented which creates
`ToyotaCar` and `NissanCar` respectively. Both fabrics implements the same `ICarFabric`
interface as well as both 'car' classes implements `IVehicle` interface.

It would be just better if all models were represented by dedicated classes while
`ToyotaCar` and `NissanCar` would be an abstract classes for models... It would
probably illustrate fabric usage way better. Maybe the other day...
