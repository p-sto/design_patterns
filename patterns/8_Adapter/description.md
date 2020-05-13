Adapter design pattern
======================

Adapter is also known as wrapper pattern.

### Definition

Adapter converts interface of a class into another interface a client expects.
Adapter lets classes work together that couldn't otherwise because of incompatible interfaces.

`Major point is that Adapter does not implement new functionality, it does not extend
interface.`

### Details

Adapter does not implement new functionality but allows to handle new interfaces/different
without reworking clients.

![](adapter.gif)

### Example implementation

We wish to create a class which allows client implementing some specific interface
to delegate request via adapter to use different interface flawlessly.

This pattern is very useful in a situation when interface changes and for some
reason we cannot modify client e.g. we have some legacy code (or vice versa).

Let's imagine HDMI to DVI converter (very real case shown in software domain).
We'll define `IHDMI` and client implementing this interface.
Next we'll have some `IDVI` object which we wish to cooperate with.
To make such relation work we'll create `HDMItoDVI` adapter.
Cour client will be named `HDMIMonitorClient` and our adaptee will be `DVIComputer`.

To be honest - real DVI in fact implements HDMI video interface on a logical and electrical
level so it mostly differs by plug (DVI allows also to send analog data so it's
kind of hub of a several interfaces, though HDMI can send sound while DVI can't).
