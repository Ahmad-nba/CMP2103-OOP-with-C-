### Describing how I have implemented the Auto-Grading Program**

## Auto-Grading**

## Assignment Objectives**

- The program should be able to store the answers submitted by multiple students.

- The program should be able to store the correct answer for each question.

- The program should compare each student's answers with the correct answer key.

- The program should calculate the score obtained by each student.

- The program should display each student's score out of 10.
## Approach

I implemented the auto-grading program using two two-dimensional and one-dimensional character arrays. The `answers` array stores the answers submitted by 8 students, with each student having answers to 10 questions. The `key` array stores the correct answer for each of the 10 questions.

I then use nested `for` loops to go through each student and each question. For every question, the student's answer is compared with the corresponding answer in the key. If the answers are equal, the student's score is increased by one. After all 10 questions have been checked for a student, the program displays their final score out of 10.

## Prerequisites

- We need the students' submitted answers.

- We need the correct answer key.

- Each student must have answers for all 10 questions.

- The answers are represented using characters such as `A`, `B`, `C`, `D`, and `E`.

**## Implementation**

The program uses a two-dimensional character array to store the answers submitted by the students:

```cpp
char answers[8][10]
```

The first dimension represents the **8 students**, while the second dimension represents the **10 questions**.

Therefore:

```text
answers[student][question]
```

allows us to access the answer given by a particular student to a particular question.

For example:

```cpp
answers[0][0]
```

represents Student 0's answer to Question 0.

The correct answers are stored in a one-dimensional array:

```cpp
char key[10] = {
    'D', 'B', 'D', 'C', 'C',
    'D', 'A', 'E', 'A', 'D'
};
```

Here, each position in the `key` corresponds to one question.

For example:

```text
key[0] → correct answer for Question 0
key[1] → correct answer for Question 1
key[2] → correct answer for Question 2
```

and so on.

***The Outer `for` Loop*** -> The outer loop is responsible for moving through the students.

```cpp
for (int student = 0; student < 8; student++)
```

The variable `student` starts at `0` and continues until `7`.

Therefore, the loop processes all 8 students.

At the beginning of each iteration, the student's score is initialized:

```cpp
int score = 0;
```

This ensures that every student starts with a score of zero.

***The Inner `for` Loop*** -> The inner loop moves through the 10 questions for the current student.

```cpp
for (int question = 0; question < 10; question++)
```

The variable `question` starts at `0` and continues until `9`.

Therefore, all 10 questions are checked for each student.

***Comparing the Answers*** -> For every student and every question, the submitted answer is compared with the correct answer:

```cpp
if (answers[student][question] == key[question])
```

The two values being compared are:

```text
answers[student][question]
```

which is the student's answer, and:

```text
key[question]
```

which is the correct answer for that question.

If they are equal, the student gets one mark:

```cpp
score++;
```

If they are different, nothing is added to the score.

***Displaying the Score*** -> After all 10 questions have been checked, the program displays the student's final score:

```cpp
cout << "Student " << student
     << " scored " << score
     << " out of 10." << endl;
```

This is done after the inner question loop has completed, meaning the program has already checked all 10 questions for that student.

**## Array Structure**

The `answers` array can be visualized as a table:

```text
             Question
          0  1  2  3  4  5  6  7  8  9

Student 0  A  B  A  C  C  D  E  E  A  D
Student 1  D  B  A  B  C  A  E  E  A  D
Student 2  E  D  D  A  C  B  E  E  A  D
Student 3  C  B  A  E  D  C  E  E  A  D
Student 4  A  B  D  C  C  D  E  E  A  D
Student 5  B  B  E  C  C  D  E  E  A  D
Student 6  B  B  A  C  C  D  E  E  A  D
Student 7  E  B  E  C  C  D  E  E  A  D
```

The answer key is:

```text
Question:  0  1  2  3  4  5  6  7  8  9
Key:       D  B  D  C  C  D  A  E  A  D
```

The program compares the corresponding positions.

For example, for Student 0:

```cpp
answers[0][0] == key[0]
```

becomes:

```text
'A' == 'D'
```

which is false, so no mark is added.

For Question 1:

```cpp
answers[0][1] == key[1]
```

becomes:

```text
'B' == 'B'
```

which is true, so the score increases by one.

**## Nested Loop Logic**

The main grading process can therefore be represented as:

```text
Start
  |
  v
Select Student 0
  |
  v
Set score = 0
  |
  v
Check Question 0
  |
  v
Compare student's answer with key
  |
  +---- Correct ----> score++
  |
  v
Move to next question
  |
  v
Repeat until 10 questions are checked
  |
  v
Display student's score
  |
  v
Move to next student
  |
  v
Repeat until all 8 students are checked
  |
  v
End
```

