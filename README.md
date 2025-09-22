# **Experiment 16: Exception Handling in C++**

---

### **Title of the Experiment:**

To study and implement **Exception Handling** in C++.

---

### **Objective / Aim:**

* To understand the concept of **exception handling** in C++.
* To implement programs that demonstrate exception handling for:

  * Division by zero.
  * Handling underage input for voting eligibility.
* To learn how exception handling improves program reliability and prevents runtime errors.

---

### **Tools Used:**

* Code::Blocks IDE or Visual Studio Code
* GCC Compiler (MinGW or g++)
* Operating System: Windows / Linux

---

### **Theory:**

* **Exception Handling** is a mechanism to handle runtime errors in a program, ensuring that the program does not crash unexpectedly.

* C++ provides **`try`**, **`throw`**, and **`catch`** keywords to handle exceptions:

  * **`try`** – Block of code to test for exceptions.
  * **`throw`** – Used to signal an exception.
  * **`catch`** – Block of code to handle the exception.

* Advantages of Exception Handling:

  * Provides a structured way to detect and handle runtime errors.
  * Prevents abrupt termination of the program.
  * Separates error-handling code from regular program logic.

---

### **Algorithms of Programs:**

---

#### **1. Division by Zero Exception**

**Algorithm:**

1. Start.
2. Read two numbers `n1` and `n2`.
3. Use a `try` block:

   * If `n2 == 0`, throw `n2` as an exception.
   * Else, calculate `ans = n1 / n2` and display the result.
4. Use a `catch` block to handle the exception and display an error message.
5. Stop.

---

#### **2. Voting Age Exception**

**Algorithm:**

1. Start.
2. Read the age of the user.
3. Use a `try` block:

   * If `age < 18`, throw `age` as an exception.
   * Else, print that the user is approved for voting.
4. Use a `catch` block to handle the exception and display an error message.
5. Stop.

---

### **Flowchart (Text Description):**

Start → Read Input → Try Block → Check Condition → Throw Exception (if any) → Catch Block → Display Result → End

---

### **Conclusion:**

In this experiment, we studied and implemented **exception handling in C++**.

* We learned how to detect and handle **runtime errors** such as division by zero and underage input.
* Exception handling improves **program reliability** and separates error-handling logic from normal program flow.
* It is a crucial feature in **robust software development** and **object-oriented programming**.

---
