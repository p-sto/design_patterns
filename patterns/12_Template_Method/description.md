Template Method design pattern
==============================

### Definition

Defines the skeleton of an algorithm deferring some steps to subclasses.
Template methods lets subclasses redefine certain steps of algorithm without
changing the algorithm structure. 

### Details

Static elements of an algorithm are defined in base abstract class while what
varies is implemented in subclasses.

In such case we rather speak about `abstract class` rather than an `interface`.

![](template_method_uml.svg)

UML diagram shows that `templateMethod` implements some known algorithm
which elements are modified by specific implementations of `method1` and `method2`
in concrete class (this methods may also be called `operations` in other examples).


#### Template Method vs Strategy

Template Method and Strategy UML diagrams look alike, however, pattern purposes are different.
While Strategy is about implementing unified interface for family of algorithms, Template intends
to modify specific algorithm. It can be used when `general approach (algorithm) is 
known (!!)` and only some parts of it are expected to be modified.  
Strategy focus on delivering composition approach while Template focus on inheritance.  

Both of them help to meet open/close principal.
 
Template, can be tricky to manage in a multilevel inheritance environment. 

### Example implementation

In a given example data extraction class is implemented. `DataExtractionABC` provides
analysing data from files. Two classes are implemented:
- `TextDataExtraction`
- `CSVDataExtraction`

which provides mechanisms dealing with text/csv files.
Method `processData` calls `getFileContent` and `parseFileContent`.

`parseFileContent` is a virtual method in `DataExtractionABC` class and is implemented
separately for `TextDataExtraction` and `CSVDataExtraction`.
