 File              : intro.md
 Author            : Yanqing Wu <meet.yanqing.wu@gmail.com>
 Date              : 17.10.2019
 Last Modified Date: 17.10.2019
 Last Modified By  : Yanqing Wu <meet.yanqing.wu@gmail.com>


# Intro

## Terminology and Conventions in This Book

| Term | Version |
| C++ | All |
| C++98 | C++98, C++03 |
| C++11 | C++11, C++14 |
| C++14 | C++14 |

e.g.

- C++98 lack support for concurrency
- C++11 supports lambda expressions
- C++14 offers generalized function return type deduction
- C++11 most pervasive feature: __move semantics__, which distinguish _rvalue_ and _lvalue_.

### rvalue and lvalue
- If you can take the address of an expression, it typically is _lvalue_
    - all parameters are _lvalue_
    - arguments may be _rvalue_ or _lvalue_ (parameter vs argument, see eg below)
- _rvalue_ indicates a object __can move__, while _lvalue_ doesn't
- _rvalue_ corresponds to temporary objects returned from functions
- _lvalue_ corresponds to objects that can be referred to
    - by name / by following a pointer / _lvalue_ reference
- copy of _rvalue_ is generally _move_ constructed, copy of _lvalue_ is usually _copy_ constructed (see eg below)

### Misc.

There is copy-constructed copy and move-constructed copy, but we cannot distinguish them in C++ using terminology.

```
void someFunc(Widget w);    // w is pass-by-value
Widget wid;                 // wid is some Widget

// argument is `wid`, parameter is `wid`
someFunc(wid);              // w is a copy, created by copy construction

// argument is `std::move(wid)`, parameter is `wid`
someFunc(std::move(wid));   // w is a copy, created by move construction
```

# Chapter One Deducing Types
