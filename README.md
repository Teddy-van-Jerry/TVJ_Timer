# TVJ_Timer
It provides a TVJ_Timer class that simplifies the use of timer in C++.
> **Tip:** At least C++/11 is needed.

## Version
Version 1.0 updated in 2021/03/01.

## Include
`#include "TVJ_Timer"`

## `time_unit` in TVJ_Timer
| `time_unit` | time unit |
| :-: | :-: |
| u | microsecond |
| m | millisecond |
| s | second |
| M | minute |
| h | hour |

If the listed character above is followed by a dot and number from 1 to 9, it means the output version is `double` with the specific precision.

> Example:
> - `"m"` is the `long long` version of millisecond.
> - `"m.8"` is the `double` version of millisecond with the precision of 8.

## Functions

### Public
| Function | Description |
| - | - |
| `TVJ_Timer(std::string time_unit = "m", bool output_with_unit = false)` | constructor |
| `void setUnit(std::string time_unit, bool output_with_unit = false)` | set the unit |
| `void restart()` | restart the timer |
| `auto durationTime() const` | return the the `long long` version of time duration |
| `auto durationTimeDouble() const` | return the `double` version of time duration |

### Protected
| Function | Description |
| - | - |
| `void print(std::ostream& out = std::cout) const` | print time without unit |

### Global
| Function | Description |
| - | - |
| `std::ostream& operator<<(std::ostream& out, const TVJ_Timer& timer)` | overloaded `<<` function to output the time |