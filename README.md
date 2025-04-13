
# 📚 Word and Letter Counter & Robust Double Input (C Projects)

This project showcases two practical C programming assignments that demonstrate efficient string manipulation, character filtering, sorting, and type-safe input conversion. Whether you're learning to process text or clean numeric input, these examples serve as strong foundational exercises.

---

## 🔠 Part 1: Word and Letter Counter

### 📝 Objective

Write a program that reads a line of text and:

- Counts the **number of words** in the line.
- Counts the **occurrences of each letter**.
- Treats uppercase and lowercase letters as the same.
- Delimits words using whitespace, periods, commas, or string boundaries.
- Outputs the letter counts in **alphabetical order**.

### 🛠 Language

**C**

### 🧩 Approach

1. **Input Reading**: User inputs a line of text, stored in `line`.
2. **Normalization**: Only alphabetic characters are retained and converted to lowercase → stored in `linelowered`.
3. **Sorting**: `linelowered` is sorted using **bubble sort**.
4. **Finding Uniques**: Distinct letters are extracted into `linedistinct`.
5. **Counting Occurrences**: For each character in `linedistinct`, count its frequency in `linelowered` → store in `counted[]`.
6. **Output**: Number of words and letter counts are printed in the specified format.

### 💡 Example

**Input**:  
`I say Hi.`

**Output**:  
`3 words 1 a 1 h 2 i 1 s 1 y`

---

## 🔢 Part 2: Robust Double Input

### 📝 Objective

Write a function:

```c
void get_double(double* input_number);
```

- Reads user input as characters.
- Discards invalid symbols.
- Supports normal and scientific notation (e.g., `23.789`, `4.5e+2`).
- Converts cleaned input to a `double`.

### 🛠 Language

**C**

### 🧩 Approach

1. **Function Used**: `get_double()` invokes `read_and_clean()`.
2. **Input**: Line is taken and stored in `strinput`.
3. **Parsing**:
   - Decimal point → captured once.
   - `e` or `E` for scientific notation → identified if present.
   - Sign symbol (`+`, `-`) → captured for exponent section.
4. **Cleaning**:
   - Valid digits and notation components are stored in `strselective`.
5. **Conversion**:
   - `strselective` is converted to `double` via `strtod()` and stored in the variable.

### 💡 Example

**Input**:  
`abc3.14e+02xyz`

**Output**:  
`The double value is: 314.000000`

---

## 🧪 Technologies Used

- `stdio.h`, `string.h`, `ctype.h`, `stdlib.h`
- Manual string handling
- Character validation and sorting
- Input parsing logic

---

## 📜 License

Licensed under the **MIT License** — free for personal or educational use.

---

## 🚀 Final Notes

These programs reflect core C programming skills:
- Text parsing and manipulation
- Sorting and frequency analysis
- Safe and robust numeric input parsing

Ideal for CS students, instructors, or anyone building foundational programming knowledge.

**Happy coding!** 🔣📊🧮
