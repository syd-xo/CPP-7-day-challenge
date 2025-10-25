### Day 1: Motivational Quote Generator

**Goal:** To write a program that displays a random motivational quote each time it runs. The purpose of this project was to refresh my understanding of basic C++ syntax, practice using vectors, and learn how to generate random numbers for dynamic program output.

---

### How to run
// to be included here

---

### What I practised on Day 1
1. **Program structure**
    - the `main()` function
    - the `#include` directives for libraries 

2. **Vectors**
    - declaring a `std::vector<std::string>`
    - storing multiple strings (quotes) in it
    - accessing elements by index

3. **Random number generation**
    - using the system clock `std::time` to seed randomness
    - using the `std::rand()` to generate random numbers

4. **I/O formatting**
    - using `std::cout` for clean console output
    - adding separators eg `-----` for structure and readability 
    - combining text and variables in output statements

---

### Notes
- `std::srand()` should only be called once per program, usually at the start of `main()`.  
- `std::time(nullptr)` returns the current time in seconds. That’s what makes the seed different each run.  
- Without seeding, `std::rand()` will give the same results every time.  
- Using vectors is safer and more flexible than traditional arrays.  

---

### Reflection  
Today was a good start to my C++ 7-day challenge. I refreshed the fundamentals and realized how powerful small details like formatting and structure can be. 
It also reminded me that even simple programs can be made neat, organized, and professional. I’m getting more comfortable with writing clean console output and understanding how randomness works in C++. 
