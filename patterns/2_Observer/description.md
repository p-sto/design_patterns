Observer design pattern
=======================

### Definition

The observer pattern defines one to many dependency between objects, so that
when one object changes state all of it's dependencies are notified and updated
automatically. 

Pattern type - Behavioral

### Details

This pattern focuses on `push` architecture instead of pooling. We distinguish observable
(aka subject) and observer(s) object.

### Example implementation

Imagine a process which need to perform some calculations. Due to heaviness of a task,
results cannot be provided instantly and in general it's hard to estimate expected time
of arrival. In this case, process performing computing will be regarded
as an observable, and it's responsibility is to notify when computing finishes.

Process will have an interface - `IComputingProcess` and it'll provide methods:
* registerObservable(Observer obj)
* removeObservable(Observer obj)
* notify()

`IComputingProcess` will be implemented by concrete class named `ComputingProcess`.

`ComputingProcess` will take as an argument `computes_count`, which will be just some
fake data to "model" calculations (in fact it'll perform some loop run with delay).

ProcessClient (observer) class implements `IProcessClient` interface, which provides method
`update()`.

Execute ``make`` to compile. 
