Iterator design pattern
=======================

### Definition

Provides a way to access the elements of an aggregate objects sequentially without exposing 
its underlying representation.

### Details

Providing iteration functionality:

- Allows to hide collection's representation (user does not have to be aware what's inside)
- Allows lazy evaluation (especially useful if obtaining some data requires some cost e.g. computation)
- Supports infinitive collections
- Allows to preserve state of iteration (so it can be split into several stages)

UML diagram:

![](iterator.png)

Aggregate is also known as Iterable or Enumer (while Iterator may be named Enumerator).
`Next()` method can either modify Iterator or return a new one, it depends on
implementation a philosophy - making Iterator a immutable object might be better.

The left hand side of diagram - Aggregate (interface) and ConcreteAggregate acts
as a Factory method pattern.

### Example implementation

Iterator was used to generate Fibonacci numbers.

`FibonacciIterable` provides `getIterator()` method which returns instance of
`FibonacciIterator`. This iterator has `hasNext()`, `next()` and `getCurrentValue()`
methods. It allows to generate infinite (well actually limited to unsigned int) amount
of values.
