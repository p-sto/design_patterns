Adapter design pattern
======================

Adapter is also known as wrapper pattern.

### Definition

Adapter converts interface of a class into another interface a client expects.
Adapter lets classes work together that couldn't otherwise because of incompatible interfaces.

`Major point is that Adapter does not implement new functionality, it does not extend
interface.`

Pattern type - Structural

### Details

Adapter does not implement new functionality but allows to handle new interfaces/different
without reworking clients.

![](adapter.gif)

### Example implementation

This pattern is very useful in a situation when interface changes and for some
reason we cannot modify client e.g. we have some legacy code (or vice versa).

Imagine HDMI to DVI converter (very real case shown in software domain).
`IHDMI` defines an interface for HDMI device, similarly `IDVI`. 
To allow communication between HDMI and DVI devices `HDMItoDVI` adapter is needed.
`HDMIMonitorClient` represents client and adaptee is `DVIComputer`.
