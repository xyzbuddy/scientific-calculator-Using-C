# scientific-calculator
 #### MINI LAB PROJECT REPORT.
 ##### This Report Presented in Partial Fulfillment of the course.CSE114: Programming and Problem Solving Lab in the Computer Science and Engineering Department
---
## DECLARATION
We hereby declare that this lab project has been done by us under the supervision of
Course Teacher’s Name, Designation, Department of Computer Science and Engineering,
Daffodil International University. We also declare that neither this project nor any part of this
project has been submitted elsewhere as lab projects.
### COURSE & PROGRAM OUTCOME
##### Table 1: Course Outcome Statements (as provided in the course outline).  
<p align="center"><b>  CO’s  Statements </b></p>

<b> CO1 </b> Define and relate classes, objects, members of the class, and relationships among
them needed for solving specific problems.

<b> CO2 </b>Formulate knowledge of object-oriented programming and Java in problem solving.

<b> CO3 </b> Analyze Unified Modeling Language (UML) models to present a specific problem.

<b> CO4 </b> Develop solutions for real-world complex problems applying OOP concepts while
evaluating their effectiveness based on industry standards.

##### Table 2: Mapping of CO, PO, Blooms, KP and CEP.
![The Table Markdown](./image/Table%202.PNG)
### Chapter 1 — Introduction

This chapter introduces the problem, motivation, objectives, feasibility, gap analysis, and
expected outcomes.

<b> 1.1 Introduction</b>

A scientific calculator is a tool that performs basic arithmetic and a wide range of scientific
computations (logarithmic, trigonometric, exponential, factorial, etc.). Our project implements
a text-based scientific calculator in C that uses standard mathematical libraries and robust
input validation to emulate features of a physical calculator within a console environment.

<b> 1.2 Motivation </b>

A command-line calculator is lightweight, fast, and platform-independent. Building it in C
strengthens our understanding of modular programming, numerical computation, the C
standard library (math.h), error handling, and team collaboration—skills directly applicable to
systems programming and competitive programming.

<b>1.3 Objectives</b>
<ul>
  <li>Provide a user-friendly menu-driven text interface.</li>
  <li>Implement basic arithmetic: addition, subtraction, multiplication, division (with
divide-by-zero protection).</li>
  <li>Implement advanced math: power, square root, cube root, logarithms (log10, ln), and
exponential.</li>
  <li>Implement trigonometric functions: sin, cos, tan; inverse trig: asin, acos, atan;
hyperbolic: sinh, cosh, tanh.
</li>
  <li>Implement factorial, modulo, and absolute value.</li>
  <li>Ensure input validation, domain checks, and graceful handling of edge cases.</li>
  <li>Allow repeated calculations in a loop until user exits; maintain a clean UX.</li>
</ul>
<b> 1.4 Feasibility Study</b>
<ul>
  <li>Technical feasibility: Uses ANSI C and standard library functions (math.h), compilable
with GCC/Clang/Code::Blocks on Windows/Linux. No third-party dependencies.</li>
  <li>Economic feasibility: Zero cost—free compilers/IDEs. Suitable for low-resource
machines.</li>
  <li>Operational feasibility: Simple text UI; easy to use, learn, and test.</li>
</ul>
<b>1.5 Gap Analysis</b>

Many sample calculators handle only basic operations or omit domain validation. Our
implementation covers a wider function set and emphasizes robust validation (e.g.,
non-positive logs, negative square roots, out-of-domain inverse trigs), improving reliability.

<b>1.6 Project Outcome </b><br>
 A portable C program that: 

 <ul>
 <li>Executes a comprehensive set of scientific operations accurately</li>
 <li>Demonstrates modular code design and safe input handling.</li>
 <li>Serves as a reusable template for future coursework and extensions (history,
memory, angle-unit modes).
</li>
 </u>

