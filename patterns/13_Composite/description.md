Composite design pattern
========================

### Definition

Composes objects into tree structures to represent
part-whole hierarchies. Composite let's clients treat individual
objects and composition of objects - uniformly.

### Details

Composite is useful when we have to deal either with collections
of data or single elements. Major idea is to provide interface allowing
to treat aggregated and singular objects the same way.

![](composite.png)
 
It can be used every time we deal with tree like hierarchy
and something-has-something relation.

### Example implementation

In a given example YAML-like parser containing only integer values
is implemented. `source.y` example file:

```
id_param: 1000
params:
    param1: 1
    param2: 2
    other_params:
        param3: 3
        param5: 5
    param6: 6
param7: 7
```

Singular element is represented by `Scalar` object while list of
elements is called `Vector` (containing collection of `Scalar` or 
`Vector` type objects).
Unified interface for both elements is named `IModule`.

Yep, it's quite unfortunate to name Leaf/Composite elements
as Scalar/Vector as it may look alike STL's vector...

Listing all elements with method `listModuleContent()` for given example
ends with output like:

```
Values for section: head
  Value for id_param is 1000
  Values for section: params
    Value for param1 is 1
    Value for param2 is 2
    Values for section: other_params
      Value for param3 is 3
      Value for param5 is 5
    Value for param6 is 6
  Value for param7 is 7
```
