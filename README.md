
# 🎓 AI-Assisted Student Record and Result Management System

A menu-driven Student Record and Result Management System developed using **C Programming** as part of the Programming in C (PRC1001) project-based assignment at the University of Petroleum and Energy Studies (UPES).

The project manages student information, academic results, CGPA calculations and provides simple AI-assisted academic recommendations based on student performance.

---

## 📌 Project Information

| Detail | Information |
|---|---|
| Project Title | AI-Assisted Student Record and Result Management System |
| Language | C |
| Course | Programming in C |
| Course Code | PRC1001 |
| University | UPES |
| Program | B.Tech CSE |
| Semester | 1st Semester |
| Student | Kaushal Kumar |
| SAP ID | 590042095 |

---

## 🚀 Features

### 1. Student Record Management
- Add new student records.
- Store SAP ID, Roll Number, Name, Phone Number and Email ID.
- Store academic year and semester information.
- Maintain SGPA records for all eight semesters.
- Display all student records.
- Search students using SAP ID.
- Delete individual student records.

### 2. Academic Result Management
- Calculate individual student CGPA.
- Calculate average CGPA of students belonging to each academic year.
- Display semester-wise SGPA information.
- Handle available SGPA values for CGPA calculation.

### 3. Sorting and Searching
- Search student records using SAP ID.
- Sort student records in increasing order of SAP ID.
- Sort student records alphabetically by name.

### 4. AI-Assisted Academic Advisor

The project includes a simple academic advisor designed with the help of ChatGPT.

It uses predefined CGPA categories and conditional statements (`if-else`) to generate academic recommendations.

| CGPA Range | Performance Category |
|---|---|
| 9.00 and above | Excellent Performance |
| 8.00 – 8.99 | Good Performance |
| 6.00 – 7.99 | Needs Improvement |
| Below 6.00 | Requires Immediate Attention |

The advisor provides suggestions to help students understand their academic performance and identify areas for improvement.

**Note:** This is a rule-based feature implemented in C using AI-assisted suggestions. It does not connect to an external AI API.

---

## 🛠️ Technologies Used

- **C Programming:** Main programming language.
- **Structures:** Organizing student information.
- **Arrays:** Managing multiple student records.
- **Functions:** Dividing the program into modules.
- **Conditional Statements:** Implementing decision-making logic.
- **Loops:** Repeating menu operations.
- **String Handling:** Managing and comparing student information.
- **File Handling:** Saving academic advisor output and usage logs.
- **GitHub:** Version control and project submission.

---

## 📂 Project Structure

```text
student-record-ai-c/
│
├── 590042095.c
│
├── README.md
│
├── AI_USAGE_LOG.md
│
└── tests/
    ├── sample_input.txt
    └── sample_output.txt
```

---

## ⚙️ How to Run the Project

### Step 1: Clone the repository

```bash
git clone https://github.com/guptakaushal03/student-record-ai-c.git
```

### Step 2: Open the project directory

```bash
cd student-record-ai-c
```

### Step 3: Compile the C program

```bash
gcc 590042095.c -o student_record
```

### Step 4: Run the program

**Windows:**
```bash
student_record.exe
```

**Linux / macOS:**
```bash
./student_record
```

Make sure GCC is installed on your system.

---

## 🧪 Sample Testing

The `tests` folder contains sample input and output files.

The project demonstrates:
- Student record operations.
- CGPA calculations.
- Academic advisor recommendations.
- Different CGPA performance categories.

The sample output demonstrates four CGPA cases:

- 9.20 – Excellent Performance
- 8.50 – Good Performance
- 6.20 – Needs Improvement
- 5.40 – Requires Immediate Attention

---

## 🤖 AI Usage

ChatGPT was used as a learning assistant during project development.

It helped with:
- Understanding C programming concepts.
- Designing CGPA-based academic advice.
- Generating test cases.
- Improving project documentation.
- Understanding and improving program logic.

All AI-assisted suggestions were reviewed and adapted before implementation.

For more details, refer to **AI_USAGE_LOG.md**.

---

## 💾 Data Storage

Student records are currently maintained using an array of structures in the program's memory (RAM).

Academic advisor output and AI usage information are written to files using C file-handling functions.

Student records are not permanently saved between program executions in the current implementation.

---

## 🎯 Learning Outcomes

Through this project, I learned how to:

- Apply structures and arrays in C.
- Develop menu-driven applications.
- Implement searching and sorting algorithms.
- Perform academic calculations using functions.
- Work with file handling in C.
- Use AI tools as learning assistants.
- Manage source code using GitHub.
- Organize a programming project into separate files.

---

## 👨‍💻 Author

**Kaushal Kumar**

B.Tech Computer Science and Engineering  
University of Petroleum and Energy Studies (UPES)

**SAP ID:** 590042095

---

## 📜 Acknowledgement

This project was developed as part of the Programming in C (PRC1001) project-based assignment at UPES.

I would like to thank my faculty and use of AI-assisted learning tools for guidance and support throughout the development process.

