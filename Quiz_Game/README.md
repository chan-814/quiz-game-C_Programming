# 🎯 Quiz Game — Console Based Application

A console-based interactive quiz game built in **C**, developed as a course project for the **IIT (Pravartak) C Programming Course**. The game features three difficulty levels with C programming questions, instant scoring, and a wrong-answer review system.

---

## 📌 Project Overview

Quiz Game is a fully menu-driven terminal application where users select a difficulty level and answer 5 multiple-choice questions. After submission, users can view the correct answers for any questions they got wrong — making it both a quiz and a self-learning tool.

> All questions are based on **C Programming concepts**, making this a great revision tool for C learners.

---

## 🚀 Features

- **Welcome Screen** — Intro menu with Start and Exit options
- **3 Difficulty Levels** — Easy, Medium, and Hard, each with 5 C programming MCQs
- **Option-Based Input** — Users enter `a`, `b`, `c`, or `d` to answer each question
- **Post-Quiz Options** — After answering all 5 questions, choose to:
  - **Submit** — View score and review answers
  - **Restart** — Retake the same level
  - **Back to Level** — Return to the level selection menu
- **Score & Feedback** — Score out of 5 with performance messages:
  - 0–2 → *Need to improve, you Fail the test*
  - 3 → *Ohhh Just Miss, You Need 1 to Pass*
  - 4 → *Good Mark, you pass the test*
  - 5 → *Excellent Mark, you pass the test*
- **Wrong Answer Review** — Optionally view correct answers for only the questions answered incorrectly

---

## ❓ Questions Covered

### 🟢 Easy Level
| # | Question | Correct Answer |
|---|----------|----------------|
| 1 | Who is known as the father of C language? | b. Dennis Ritchie |
| 2 | Which symbol is used to declare a pointer in C? | b. * |
| 3 | Which function is used to print output in C? | c. printf() |
| 4 | Which header file is required for printf() and scanf()? | c. stdio.h |
| 5 | Which loop is guaranteed to execute at least once? | c. do-while loop |

### 🟡 Medium Level
| # | Question | Correct Answer |
|---|----------|----------------|
| 1 | Which is the correct way to declare a pointer in C? | b. int *ptr; |
| 2 | What is the default initial value of a global variable in C? | c. 0 |
| 3 | Which loop is most suitable when the number of iterations is known? | c. for |
| 4 | Which function is used to compare two strings in C? | b. strcmp() |
| 5 | Which statement about arrays in C is TRUE? | d. Arrays are stored in contiguous memory |

### 🔴 Hard Level
| # | Question | Correct Answer |
|---|----------|----------------|
| 1 | Which memory area stores local variables of a function? | b. Stack |
| 2 | Which storage class retains its value between function calls? | c. static |
| 3 | Which of the following is TRUE about calloc()? | b. Allocates and initializes memory to zero |
| 4 | What is the main difference between Structure and Union? | c. Structure allocates memory for all members, union shares memory |
| 5 | What happens if a recursive function has no base condition? | c. Infinite recursion leading to stack overflow |

---

## 🛠️ Tech Stack

| Component | Technology |
|-----------|------------|
| Language  | C          |
| Interface | Console / Terminal |
| Compiler  | GCC / MinGW or any standard C compiler |

---

## 📁 Project Structure

```
quiz-game/
│
├── quiz.c        # Full source code — all game logic, questions, scoring, and review
└── README.md     # Project documentation
```

### Functions in `quiz.c`

| Function | Description |
|----------|-------------|
| `main()` | Entry point — calls `intro()` to launch the game |
| `intro()` | Welcome screen with Start / Exit options |
| `start()` | Level selection menu — Easy / Medium / Hard / Exit |
| `easy()` | Displays 5 Easy questions and collects answers |
| `medium()` | Displays 5 Medium questions and collects answers |
| `hard()` | Displays 5 Hard questions and collects answers |
| `easysubmit()` | Calculates and displays score for Easy level |
| `mediumsubmit()` | Calculates and displays score for Medium level |
| `hardsubmit()` | Calculates and displays score for Hard level |
| `easyans()` | Shows correct answers for wrong Easy questions |
| `mediumans()` | Shows correct answers for wrong Medium questions |
| `heardans()` | Shows correct answers for wrong Hard questions |

---

## ⚙️ Setup & Compilation

### Prerequisites
- GCC compiler (Linux / macOS) or MinGW (Windows)

### Steps

1. **Clone the repository**
   ```bash
   git clone https://github.com/chan-814/quiz-game-C_Programming.git
   cd quiz-game-C_Programming
   ```

2. **Compile the program**
   ```bash
   gcc quiz.c -o quiz
   ```

3. **Run the program**
   ```bash
   # On Linux / macOS
   ./quiz

   # On Windows
   quiz.exe
   ```

---

## 🖥️ Sample Output

```
            ------------------------
            | Welcome To Quiz Game |
            ------------------------

1. Start
2. Exit

Enter the option: 1

------------------------------------------
| Choose the Levels of questions to solve |
------------------------------------------

1. Easy
2. Medium
3. Hard
4. Exit

Enter the option: 1

------------------
| Easy Questions |
------------------

1. Who is known as the father of C language?

a. James Gosling
b. Dennis Ritchie
c. Bjarne Stroustrup
d. Guido van Rossum

Enter the option: b

...

1. Submit
2. Restart
3. Back to level

Enter the option: 1

Your Total Marks: 4
Good Mark you pass the test
------------------------------END---------------------------

If you want to see the answer

1. Yes
2. No

Please Enter the Right Option: 1

Your Wrong Questions Answers

Q5. do-while loop
------------------------------END---------------------------
```

---

## 🎓 About

This project was built as part of the **C Programming Course** offered by **IIT (Pravartak)**, applying core C programming concepts including:

- Functions and modular code design
- Recursive function calls for menu re-navigation
- `char` type input handling with `scanf()`
- Conditional logic (`if-else`) for scoring and answer validation
- Menu-driven program structure

---

## 📄 License

This project is for educational purposes as part of the IITM C Programming Course. All rights reserved.
