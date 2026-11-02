# 🛠️ C++ Production-Grade Utility Toolkit & Helper Libraries

![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-blue?style=for-the-badge&logo=cplusplus)
![Architecture](https://img.shields.io/badge/Architecture-Header--Only_Modular-brightgreen?style=for-the-badge)
![Code Standard](https://img.shields.io/badge/Clean_Code-Object__Oriented-orange?style=for-the-badge)

A centralized, header-only C++ utility library providing enterprise-grade helper functions, robust input validation mechanics, custom data structures tools, and data-formatting handlers. Engineered using modern Object-Oriented Design (OOP) and Static Utility Patterns for seamless reusability across software systems.

---

## 🌟 Core Components & Features

### 🛡️ 1. Input Validation Engine (`clsInputValidate.h`)
* **Type-Safe Range Checkers:** Validates numeric ranges (`IsNumberBetween`) for integers, floats, and doubles.
* **Date Range Validation:** Verifies whether a given date falls strictly between two boundary dates.
* **Console Input Protection:** Prevents infinite loops caused by invalid stream data (`std::cin`) and forces re-entry until safe data is received.

### 🧰 2. General Utilities Toolkit (`clsUtil.h`)
* **Random Generators:** Secure algorithms for generating random numbers, characters, dynamic keys, and formatted GUID/Token structures.
* **Array & Data Processing:** High-performance functions for array shuffling, element swapping, and dynamic filler pipelines.
* **Encryption & Security:** Integrated basic encryption/decryption mechanics for data streams and text fields.

### 📅 3. Date & Time Processing (`clsDate.h`)
* **Comprehensive Date Arithmetic:** Add/subtract days, calculate precise differences between dates, and identify leap years.
* **Formatting & Conversions:** String-to-date and date-to-string parsing with custom formatting support.

---

## 🚀 Quick Start & Integration

Since this toolkit is designed as a **Header-Only Library**, integrating it into any project requires zero external build steps:

1. Clone the repository into your project root:
   ```bash
   git clone [https://github.com/ahmedjahmed24/Cpp-Utility-Toolkit.git](https://github.com/ahmedjahmed24/Cpp-Utility-Toolkit.git)