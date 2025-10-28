## ☎️ `Phone Book Management System`

![Language](https://img.shields.io/badge/C++-Project-blue?style=for-the-badge&logo=c%2B%2B)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![Type](https://img.shields.io/badge/Type-Console%20App-lightgrey?style=for-the-badge)
![Focus](https://img.shields.io/badge/Focus-OOP%20%26%20File%20Handling-orange?style=for-the-badge)

---

### 🎯 `Why I Made This Project`
- To apply and demonstrate **object-oriented programming** and **file I/O** in a real-world scenario  
- To build a **simple yet functional database system** using C++  
- To simulate how data is stored, retrieved, and modified in a persistent way

---

### 🧠 `Purpose of the Project`
- Provide a **console-based phone book** that allows users to manage contact records  
- Practice **data persistence** using `.txt` files  
- Reinforce concepts like `std::map`, `fstream`, and `stringstream`

---

### ⚙️ `What This Project Does`
- Loads existing phone book records from a file at startup  
- Allows users to:
  - `Add` a new contact (with duplicate check)  
  - `Edit` an existing contact’s number  
  - `Delete` a contact by name  
  - `Print` all records with a total count  
- Saves all changes to `phone_book.txt` before exiting  
- Uses `std::map<string, string>` to store name-number pairs in memory

---

### 🚀 `Future Development Goals`
- Add **search functionality** by name or number  
- Implement **input validation** and better error handling  
- Add **timestamp logging** for each record update  
- Refactor into **multiple source/header files** for modularity  
- Expand to support **multiple fields** (e.g., email, address) per contact  

---

### 📁 `File Overview`
```
📦 Seat_Reservation/
 ┣ 📄 BryanAndersen_Portfolio_1.sln
 ┣ 📄 .gitignore
 ┣ 📁 .vs/ (ignored)
 ┣ 📁 x64/ (ignored)
 ┗ 📁 BryanAndersen_Portfolio_1/
   ┣ 📄 BryanAndersen_Portfolio_1.cpp
   ┣ 📄 BryanAndersen_Portfolio_1.vcxproj
   ┣ 📄 BryanAndersen_Portfolio_1.vcxproj.filters
   ┣ 📄 BryanAndersen_Portfolio_1.vcxproj.user (ignored)
   ┣ 📄 phone_book.txt
   ┗ 📄 README.md
```
