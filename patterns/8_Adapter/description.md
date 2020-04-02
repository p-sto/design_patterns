Adapter design pattern
======================

Adapter is also known as wrapper pattern.

### Definition

Adapter converts interface of a class into another interface a client expects.
Adapter lets classes work together that couldn't otherwise because of incompatible interfaces.

Major point is that Adapter does not implement new functionality, it does not extend
interface.

### Details

|ITarget|
|---
| execute()

|client: ITarget|
|---

|INewTarget|
|---
| call()

|new_client: INewTarget|
|---

|adapter: ITarget|
|---

Heaving client which implements ITarget, we wish to be able to communicate with new_client,
which implements different - INewTarget - interface. 

We need adapter which implements ITarget in a such way, that when called .execute() method,
it'll use .call() method of a new_client.
