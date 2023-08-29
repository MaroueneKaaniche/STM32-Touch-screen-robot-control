# STM32-Touch-screen-robot-control
Project for STM32f746g-discovery board for control of two autonomous robots remotely, calibration of robots wheels and dimensions, testing actuators and setting strategy for the EUROBOT international competition.  
# Embedded Graphical User Interface for Robotic Control


Welcome to the Embedded Graphical User Interface (GUI) for Robotic Control repository. This project showcases the development of an intuitive interface for tuning, calibrating, and controlling robots powered by the STM32F746G Discovery board.

## About the Project

The main objective of this project is to create an efficient and user-friendly Embedded GUI that enables seamless control of robotic systems. The GUI leverages TouchGFX, an intuitive drag-and-drop-based graphical design tool, for frontend development, while the backend is handled using STM32 Cube IDE. The STM32F746G Discovery board runs on FreeRTOS, utilizing separate tasks for display management, touch event handling, and communication.

## Features

- **TouchGFX GUI:** Utilize the power of TouchGFX to build a visually appealing and responsive user interface for controlling and interacting with robots.
- **STM32 Cube IDE Backend:** Employ STM32 Cube IDE for the backend logic, providing robust control and communication with the robots.
- **FreeRTOS Multitasking:** The project utilizes FreeRTOS to implement multitasking, ensuring efficient management of display, touch events, and communication tasks.
- **Raspberry Pi Integration:** Establish communication between the GUI and the main Raspberry Pi using serial communication (UART) for data exchange.
- **ROS Integration:** The main Raspberry Pi acts as a ROS (Robot Operating System) master, with additional Raspberry Pi units mounted on individual robots serving as ROS slaves. This setup enables seamless data exchange through ROS topics and services.


## Getting Started

To start working with the Embedded GUI for Robotic Control, follow these steps:

1. Set up the STM32f746g Discovery board with STM32 Cube IDE.
2. Configure and deploy the TouchGFX GUI using the provided resources.
3. Establish UART communication between the Discovery board and the main Raspberry Pi.
4. Configure the Raspberry Pi units on the robots to communicate with the ROS master.
5. Customize and expand the GUI and backend functionalities to suit your robotic control requirements.

## Contributors

This project was made possible through the contributions of the following individuals:

- Farid Adwani ([@farid](https://github.com/Farid-Adwani))

## License

This project is licensed under the [MIT License](LICENSE).

Feel free to explore, contribute, and adapt the Embedded GUI to enhance your robotic control applications!

For any questions or assistance, please contact me at marouene.kaaniche@insat.ucar.tn .
