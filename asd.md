# Embedded C++ Interview Questions

<details>
<summary>C++ Language & Low-Level Concepts</summary>

| # | Question |
|---|----------|
| 1  | Explain the difference between `const`, `constexpr`, and `consteval` in embedded firmware. |
| 2  | How does `volatile` affect compiler optimizations, and why is it critical in memory-mapped peripheral access? |
| 3  | What are the costs and implications of using virtual functions on a microcontroller? |
| 4  | How would you implement polymorphism without virtual functions? |
| 5  | Explain how the vtable works and how it impacts memory usage in embedded systems. |
| 6  | What is the difference between `new/delete` and `malloc/free` in terms of memory layout and overhead? |
| 7  | How would you prevent memory alignment issues when mapping structs to hardware registers? |
| 8  | Discuss the difference between struct padding on ARM vs x86 architectures. |
| 9  | Can exceptions be safely used in ISR context? Why or why not? |
| 10 | How do you implement a type-safe peripheral register abstraction using templates? |
</details>

---

<details>
<summary>Memory Management & Optimization</summary>
  
| # | Question |
|---|----------|
| 11 | How do you track dynamic memory usage in a microcontroller without an OS? |
| 12 | Explain memory fragmentation and how it affects embedded systems with long uptime. |
| 13 | What is a memory pool, and how would you implement one in C++? |
| 14 | How do `placement new` and `std::aligned_storage` help in embedded memory management? |
| 15 | Explain the trade-offs between static allocation, dynamic allocation, and stack allocation. |
| 16 | How do move semantics help in reducing RAM usage in embedded systems? |
| 17 | Can you implement a small garbage collector for a microcontroller? How? |
| 18 | How would you handle memory leaks in bare-metal embedded firmware? |
</details>

---

<details>
<summary>Peripheral & Hardware Interaction</summary>

| # | Question |
|---|----------|
| 19 | How would you design a type-safe C++ wrapper for a memory-mapped UART peripheral? |
| 20 | Explain why direct register access via `*(volatile uint32_t*)0x40000000` might be unsafe. |
| 21 | How would you implement a DMA buffer manager in C++ for SPI data transfers? |
| 22 | What are the pitfalls of using interrupts with C++ objects containing non-trivial constructors? |
| 23 | How would you implement a hardware abstraction layer (HAL) using templates? |
| 24 | How can you ensure peripheral drivers are ISR-safe? |
| 25 | Explain how you would implement an event-driven GPIO driver using C++ classes. |
| 26 | How would you implement compile-time configuration of peripherals using template metaprogramming? |
| 27 | Discuss strategies to avoid race conditions when multiple peripherals share a DMA channel. |
| 28 | How would you implement an atomic peripheral register modification without using locks? |
</details>

---

<details>
<summary>Real-Time & RTOS-Level</summary>

| # | Question |
|---|----------|
| 29 | How do you design a thread-safe singleton in a FreeRTOS environment? |
| 30 | Explain the concept of priority inversion and how it affects C++ tasks. |
| 31 | How would you implement a lock-free queue for inter-task communication? |
| 32 | Explain how `volatile` and `atomic` types interact in multi-threaded embedded C++. |
| 33 | Can you safely use `std::mutex` in embedded systems without an RTOS? Why or why not? |
| 34 | How would you design a preemptive RTOS task that safely interacts with peripheral ISR callbacks? |
| 35 | Discuss the trade-offs between message queues vs direct task notifications in RTOS. |
| 36 | How do you implement ISR-safe logging in a real-time system? |
| 37 | Explain the impact of context switching on C++ object lifetimes. |
| 38 | How would you implement a C++ class to abstract an RTOS timer API for multiple hardware timers? |
</details>

---

<details>
<summary>Embedded Design Patterns</summary>
| # | Question |
|---|----------|
| 39 | How would you implement the State Machine pattern for an embedded device using templates? |
| 40 | Explain how to implement the Observer pattern for hardware events. |
| 41 | Discuss policy-based design and how it can make drivers configurable at compile time. |
| 42 | How would you implement a command queue pattern for peripheral commands? |
| 43 | Explain the Singleton pattern’s pros and cons in embedded firmware. |
| 44 | How do you implement dependency injection without dynamic memory allocation? |
| 45 | Discuss strategies to implement polymorphic behavior with minimal memory overhead. |
</details>

---

<details>
<summary>Advanced C++ Features</summary>
| # | Question |
|---|----------|
| 46 | How can `constexpr` and compile-time evaluation reduce runtime overhead in embedded code? |
| 47 | What are CRTP (Curiously Recurring Template Pattern) and its use cases in embedded systems? |
| 48 | Explain SFINAE (Substitution Failure Is Not An Error) with an embedded example. |
| 49 | How would you implement a compile-time safe register map using templates? |
| 50 | How do coroutines or async-like features fit into resource-constrained embedded systems? |
</details>

---

<details>
<summary>Debugging, Reliability & Testing</summary>

| # | Question |
|---|----------|
| 51 | How do you implement unit tests for bare-metal drivers without hardware? |
| 52 | How would you design watchdog-friendly C++ code? |
| 53 | What techniques would you use for fault-tolerant firmware design in embedded systems? |
| 54 | How would you profile stack and heap usage in an MCU with no OS? |
| 55 | How do you safely log errors in low-RAM embedded systems without blocking tasks? |
</details>

---

