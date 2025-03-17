# C-PROJECT
# Robotics and Automation
Develop a program that simulates robotics and automation using pointers. The program can simulate robot movement, sensor data processing, and automation control. It can also provide features like robot navigation, object recognition, and automation scripting. 
#include <iostream>

// Define a structure to represent a robot
struct Robot {
    int x, y;  // Robot's position
};

// Function to initialize a robot
void initRobot(Robot* robot) {
    robot->x = 0;
    robot->y = 0;
}

// Function to move a robot
void moveRobot(Robot* robot, int dx, int dy) {
    robot->x += dx;
    robot->y += dy;
}

int main() {
    // Create a robot
    Robot* robot = new Robot;
    initRobot(robot);

    // Move the robot
    moveRobot(robot, 10, 20);

    // Print the robot's position
    std::cout << "Robot moved to (" << robot->x << ", " << robot->y << ")" << std::endl;

    // Delete allocated memory
    delete robot;

    return 0;
}
![image](https://github.com/user-attachments/assets/821d07fb-4f05-4fbc-8a47-ca4320d996b9)
