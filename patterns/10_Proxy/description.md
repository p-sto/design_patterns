Proxy design pattern
====================

### Definition

Proxy provides a surrogate or placeholder for another object in order to control access to it.

Pattern type - Structural

### Details

Proxy is about controlling an access.

Variations of pattern:

 * Remote proxy - used for resources which are "outside". Proxy is responsible for dealing with
    connection to that remote resource.  

 * Virtual proxy - controls access to a resource which is expensive to create.  
    It allows to interface with resource when it's really needed (lazy evaluation + cache).

 * Protection proxy - passes only requests from authorised clients.

Proxy pattern `implements additional` behaviour to control access to some resource.

Proxy class has to implement the same interface as targeted object.

![](proxy.png)

### Example implementation

`AssetManager` class provides some `Asset` objects.
Access to this manager is controlled via `AssetManagerAccessProxy`.
Only authorised clients are able to access assets.
        