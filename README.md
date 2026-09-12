# C++ Programs

A collection of small, self-contained C++ programs demonstrating core object-oriented programming concepts and templates. Each file is a single-file example with its own `main()`, written while studying C++ OOP.

> Note: some files (e.g. `sample.cpp`) are early drafts and may not compile as-is.

## Index

### OOP Fundamentals

| File | What it shows |
|---|---|
| `sample.cpp` | First class & objects example (early draft; uses `getdata`/`putdata` member functions) |
| `constructor.cpp` | Constructors and adding two `item` objects |
| `default_arguments.cpp` | Functions with default argument values |
| `inline_function.cpp` | Using `inline` functions |
| `friend_function.cpp` | Friend function accessing private class members |
| `object as argument.cpp` | Passing objects as function arguments |
| `static data member.cpp` | Static data member counting objects |
| `arrays within class.cpp` | Arrays as class members (course codes & marks, totals) |

### Arrays of Objects

| File | What it shows |
|---|---|
| `array of objects.cpp` | Array of `student` objects with get/print details |
| `array of objects_this pointer.cpp` | Array of students, finding the topper, static object count |
| `array of objects_this_reference_static_fun.cpp` | Student array with `this` pointer, reference parameters, and a static member function |

### Pointers

| File | What it shows |
|---|---|
| `pointer.cpp` | Pointer basics: addresses, indirection, dereferencing |
| `pointer_object.cpp` | Pointers to objects: `new`, `->`, and `(*p)` syntax |
| `pointer_this.cpp` | The `this` pointer; `costly(item)` returns the costlier object |

### Function Overloading

| File | What it shows |
|---|---|
| `function overloading.cpp` | Overloaded `getdetail` member functions in a `FOODCOURT` voucher class |
| `function overloading_using.cpp` | `using` base-class overloads in a derived `VOUCHER` class |

### Operator Overloading

| File | What it shows |
|---|---|
| `operator overloading.cpp` | Binary `operator+` as a member function |
| `operator overloading_unary.cpp` | Unary `operator-` alongside binary `operator+` |
| `operator overloading_binary friend.cpp` | Binary `operator+` as a friend function |

### Inheritance

| File | What it shows |
|---|---|
| `inheritance-single.cpp` | Single inheritance (`addfeatures` extends `item`) |
| `inheritance-multilevel.cpp` | Multilevel inheritance through a base chain |
| `inheritance-hierarchical.cpp` | Hierarchical inheritance from one base class |
| `inheritance-multiple.cpp` | Multiple inheritance from two base classes |
| `inheritance-protected.cpp` | The `protected` access specifier in inheritance |
| `Constructor_Multiple Heritance.exe` | Compiled Windows build of the multiple-inheritance example |

### Polymorphism & Method Overriding

| File | What it shows |
|---|---|
| `overridding_1.cpp` | Method overriding with direct object calls (compile-time binding) |
| `overridding_2.cpp` | Overriding via a base-class pointer without `virtual` |
| `overridding_3.cpp` | Overriding via a base-class pointer with `virtual` (dynamic dispatch) |
| `run time polymorphism.cpp` | Runtime polymorphism using virtual `feature()` in `parent`/`employee` subclasses |

### Templates (Generics)

| File | What it shows |
|---|---|
| `add_int.cpp` | Plain `int` addition (baseline for the generic version) |
| `add_generic.cpp` | Template function `add<T>` |
| `swap_generic.cpp` | Template function swapping two values |
| `class_generic.cpp` | Generic class `FOODCOURT<T, S>` |

## Compiling

Each program is standalone. With g++ on Linux/macOS:

```bash
g++ -o constructor constructor.cpp
./constructor
```

On Windows:

```powershell
g++ -o constructor.exe constructor.cpp
.\constructor.exe
```

Some file names contain spaces, so quote the paths:

```bash
g++ -o "array of objects.exe" "array of objects.cpp"
```

No license is currently specified for this repository.

