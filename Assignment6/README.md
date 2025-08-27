# Assigment 6

## Author
**Mobina Ahmadimasoud, group 24.B83-MM**

## Contacts

st067173@student.spbu.ru

## Description

# Modular Data Processing Framework

## Overview
This project implements a **lightweight modular framework** for handling data operations in C++.  
It is designed to demonstrate:
- Use of multiple interdependent classes.
- Application of templates for generic programming.
- Clean separation between processing, analysis, and visualization components.
- Unit testing for correctness and maintainability.

---

## Components
The project consists of four major parts:

### 1. **DataProcessor (`data_processor.h/.cpp`)**
- Responsible for **pre-processing input data**.
- Handles transformations such as filtering, normalization, or restructuring.
- Provides utility functions for preparing datasets before deeper analysis.

### 2. **DataAnalyzer (`data_analyzer.h/.cpp`)**
- Focused on **examining and extracting insights** from data.
- Implements operations such as aggregation, statistical analysis, and comparisons.
- Serves as the logical layer that interprets processed data.

### 3. **DataVisualizer (`data_visualizer.h/.cpp`)**
- Provides **presentation logic** for processed and analyzed data.
- Can output results in a human-readable format.
- Bridges the gap between raw computations and understandable outputs.

### 4. **GenericContainer (`generic_container.h`)**
- A **templated utility class** for handling collections of arbitrary types.
- Demonstrates the use of templates in C++.
- Enables reusable, type-safe storage that supports generic programming patterns.

---

## Tests
- All classes are verified with **unit tests** located in `tests.cpp`.
- The test suite ensures that:
  - Each class behaves as expected.
  - Interactions between `DataProcessor`, `DataAnalyzer`, and `DataVisualizer` remain consistent.
  - The template-based `GenericContainer` works with multiple data types.

---

## Build & Run
## Build
make
## Run
./tests
