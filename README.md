# 🛠️ C++ Utility Toolkit & Helper Libraries

![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-blue?style=for-the-badge&logo=cplusplus)
![Architecture](https://img.shields.io/badge/Architecture-Header--Only_Modular-brightgreen?style=for-the-badge)
![Code Standard](https://img.shields.io/badge/Clean_Code-Object__Oriented-orange?style=for-the-badge)

A centralized, header-only C++ utility library providing reusable helper functions, robust input validation mechanics, custom data structures tools, and data-formatting handlers. Developed using Object-Oriented Programming (OOP) and Static Utility Design Patterns to ensure modularity and code reusability across C++ applications.

---

## 🌟 Core Components & Features

### 🛡️ 1. Input Validation Engine (`clsInputValidate.h`)
* **Type-Safe Range Checkers:** Validates numeric ranges (`IsNumberBetween`) for integers, floats, and doubles.
* **Date Range Validation:** Verifies whether a given date falls strictly between two boundary dates.
* **Console Input Protection:** Prevents infinite loops caused by invalid stream data (`std::cin`) and forces safe re-entry.

### 🧰 2. General Utilities Toolkit (`clsUtil.h`)
* **Random Generators:** Standard algorithms for generating random numbers, characters, dynamic keys, and formatted tokens.
* **Array & Data Processing:** Utility functions for array shuffling, element swapping, and data filling pipelines.
* **Text Processing & Security:** Integrated basic text encryption and decryption handlers.

### 📅 3. Date & Time Processing (`clsDate.h`)
* **Comprehensive Date Arithmetic:** Add/subtract days, calculate precise differences between dates, and identify leap years.
* **Formatting & Conversions:** String-to-date and date-to-string parsing with full calendar display support.

---

## 🚀 Quick Start & Integration

Since this toolkit is designed as a **Header-Only Library**, integrating it into any C++ project requires zero complex build steps:

1. Clone the repository into your project root:
   ```bash
   git clone [https://github.com/ahmedjahmed24/Cpp-Utility-Toolkit.git](https://github.com/ahmedjahmed24/Cpp-Utility-Toolkit.git)