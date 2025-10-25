### Day 4: File-Based Student Record System

**Goal:**
To build on the Day 3 project by saving and reading student records from a text file using file handling techniques. 

--- 

### Features 
1. Add students with names and grades
2. View all student records
3. Save records to a text file
4. Load records from a text file
5. Input validation for grades (0-100)

---

### Prerequisites 
C++ compiler (g++ from MSYS2)
Visual Studio Code with C/C++ extension

---

### How to Run 
1. **Manual Compilation & Execution**
- Compile the program 
    ```bash
    g++ FileBasedStudentRecordSystem.cpp -o FileBasedStudentRecordSystem.exe

- Run the executable
    ```bash
    .\FileBasedStudentRecordSystem.exe

2. **Using VSCode Run button**    
- Use "Run C/C++ File" button in VSCode
- **Note:** *May require deleting .exe between runs due to permisssipn issues*

---

### Common issues and solutions 
1. **Permission denied when compiling**

-*Solution:* 
Delete the existing .exe file first
    ```bash
    del FileBasedStudentRecordSystem.exe

2. **Red sqiggles in VSCode for #include lines**

-*Solution:*
Configure C++ extension with correct compiler path. 
- Press CTRL+SHIFT+P
- Run "C/C++: Edit Configurations (UI)"
- Set compiler path to: `C:\msys64\ucrt64\bin\g++.exe`

3. **Program skips name input or behaves strangely**

-*Solution:* 
This is fixed in the current code- ensure you are running the latest compile version. 

4. **Running wrong executable**

-*Solution:* 
Make sure the compile and run commands use the same file name:
        
        g++ FileBasedStudentRecordSystem.cpp -o FileBasedRecordSystem.exe
        .\FileBasedStudentRecordSystem.exe # Runs the old version

        g++ FileBAsedStudentRecordSystem.cpp -o FileBasedStudentRecordSystem.exe
        .\FileBasedStudentRecordSystem.exe #Runs the new version

5. **File Format**
- The `students.txt` file uses this format: 
`StudentName1 Grade1`
`StudentName2 Grade2`    

---

### Technical Notes 
- Uses getline() for student names to support spaces between two names
- Grades are validated between 0-100
- Data persists between sessions via `student.txt`
- Built with standard C++ libraries (iostram, fstream, vector)

---

### Development History 
- Fixed input buffer issues with `cin` and  `getline()`
- Resolved VSCode IntelliSense configuration
- Solved .exe permission conflicts
- Implemented proper file I/O operations

---

## Compilation verified:
Working with g++ from MSYS2 UCRT64 environment.