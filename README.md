# C Hash Table

A hash table implementation in C built from scratch using malloc and my struggling brain cells

## Features
- Hash function using character summation
- Collision handling via linked list chaining
- Table size configurable at initialization

## Status 
WIP
Currently implemented:
- [x] Hashing function
- [x] Table initialization
- [x] Insert (C)
- [ ] Lookup (R)
- [ ] Update (U)
- [ ] Delete (D)
- [ ] Free/Empty

## Usage

```c
Hashtable ht;
init_ht(&ht, 10);
insert(&ht, "name", 42);
```

## Build
```bash
gcc hash_table.c -o hash_table
```
