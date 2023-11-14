# Object-Oriented ATM Simulation in C++

Simulate an ATM environment with robust functionality and error handling using C++ and object-oriented programming principles.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
  

## Overview

This project implements a fully functional ATM simulation in C++ with a focus on object-oriented principles. It provides features such as user authentication, balance checking, and cash withdrawal, while emphasizing modularity and robust error handling.

## Features

- User authentication
- Balance checking
- Cash withdrawal
- Object-oriented design

## Technologies Used

- C++
- Object-Oriented Programming

## Installation

1. Clone the repository: `git clone https://github.com/tabrez-dev/atm-simulation.git`
2. Navigate to the project directory: `cd atm-simulation`
3. Compile the C++ code using your preferred compiler.

## Usage

1. Run the compiled executable.
2. Follow the on-screen prompts to enter your account number and PIN.
3. Choose from available options to perform actions such as checking balance, withdrawing cash, and updating mobile number.

## Contributing

Contributions are welcome! If you have ideas for improvement or find any issues, please open an issue or submit a pull request.


# Object-Oriented Programming (OOP) in the Project

This project follows the principles of Object-Oriented Programming (OOP) to enhance code organization, encapsulation, and reusability. Here's how OOP concepts are applied:

### 1. Class Definition

The project defines a class named `atm` to model the ATM entity. This class encapsulates the data and behavior related to an individual user's account, promoting the concept of abstraction.

### 2. Encapsulation

The class `atm` encapsulates the private data members (`account_no`, `name`, `PIN`, `balance`, `mobile_no`) and provides public member functions to access and manipulate these attributes. Encapsulation helps in hiding the internal details and exposing only the necessary functionalities.

### 3. Constructor and Setter Method

The class includes a `setData` method, which acts as a constructor to initialize the object with initial data. This constructor ensures that the object is in a valid state upon creation.

### 4. Getter Methods

Getter methods like `getactno`, `getname`, `getpin`, `getbalance`, and `getmobileno` provide controlled access to the private member variables, promoting data abstraction.

### 5. Methods for ATM Operations

Methods like `setmobile` and `cashwithdraw` encapsulate the functionality related to updating the mobile number and withdrawing cash, respectively. These methods are part of the `atm` class, ensuring that behaviors associated with an ATM are encapsulated within the class.

### 6. Object Instantiation

In the `main` function, an instance of the `atm` class named `user1` is created. This object represents a specific ATM user and utilizes the encapsulated functionalities.

### 7. Object Interaction

The user interacts with the program through the methods provided by the `atm` class. This interaction is aligned with the principles of OOP, where objects interact with each other to perform actions.

### 8. Object-Oriented Design

The overall design of the project emphasizes the use of classes and objects to model real-world entities and actions, making the code modular, reusable, and easier to understand.

By adopting OOP principles, this project enhances code readability, maintainability, and scalability, offering a structured approach to simulate an ATM environment.


