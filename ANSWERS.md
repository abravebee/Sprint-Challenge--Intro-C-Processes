**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
Created: waiting for admission to "ready" state, or to be suspended in external storage
Ready: loaded on to main memory and waiting for execution on CPU
Running: instructions being executed by a CPU/core; kernel or user modes available
Blocked: can't continue without external changes, like user input
Terminated: execution is complete or process has been killed


**2. What is a zombie process?**
A terminated process whose parent hasn't yet called `wait` for the exit status; a zombie process causes a resource leak if not destroyed


**3. How does a zombie process get created? How does one get destroyed?**
When the parent process fails to read its child's exit status on termination, the process becomes a zombie.

A zombie can be killed by terminating its parent process.


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
Compilers can be more efficient since you can load and execute multiple times after compiling once. An interpreted language has to be parsed, interpreted, and executed with every run, which is slower.

This makes compiled languages ideal for resource-intensive aspects of an application.