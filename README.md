# Traffic Light Simulation in C

## Overview
This project is a **console-based simulation of a traffic light system** implemented in the C programming language. 
It demonstrates the functioning of traffic lights and pedestrian signals with countdown timers, all displayed in a text-based interface.

## Features
- **Traffic Light Simulation**:
  - Vehicle traffic lights: Red, Yellow, and Green.
  - Pedestrian signals: Walk and Stop.
- **Countdown Timer**:
  - Displays the remaining time for the current light phase.
- **Console-Based**:
  - No graphics library is required; uses ANSI escape codes for dynamic console updates.
- **Dynamic Updates**:
  - Lights and timers update in real-time with delays.

## How It Works
1. **Traffic Light Phases**:
   - **Red Light**: Vehicles stop, pedestrians walk (5 seconds).
   - **Yellow Light**: Transition phase, both vehicles and pedestrians stop (2 seconds).
   - **Green Light**: Vehicles go, pedestrians stop (5 seconds).
2. **Timers**:
   - A countdown timer is displayed for each phase, decrementing every second.
3. **Console Output**:
   - The console is cleared and updated dynamically for each phase.

## Code Structure
### Key Functions
- `clearConsole()`:
  - Clears the console for dynamic updates using the escape sequence `\033[H\033[J`.
- `displayTrafficLight()`:
  - Displays the current state of traffic lights and pedestrian signals along with the countdown timer.
- Main Loop:
  - Cycles through Red, Yellow, and Green light phases with appropriate delays.

### Code Snippet
```c
void displayTrafficLight(char vehicleLight[],char pedestrianLight[], int timer) {
    clearConsole();

    printf("TRAFFIC LIGHTS:\n");
    printf("--------------------\n");
    printf("Red    : %s\n", (vehicleLight == "Red") ? "ON" : "OFF");
    printf("Yellow : %s\n", (vehicleLight == "Yellow") ? "ON" : "OFF");
    printf("Green  : %s\n", (vehicleLight == "Green") ? "ON" : "OFF");

    printf("\nPEDESTRIAN SIGNAL:\n");
    printf("----------------------\n");
    printf("Walk   : %s\n", (pedestrianLight == "Walk") ? "ON" : "OFF");
    printf("Stop   : %s\n", (pedestrianLight == "Stop") ? "ON" : "OFF");

    printf("\nTIME REMAINING: %d seconds\n", timer);
}
```

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/DevadharsiniSivakumar/Traffic_Light_Simulation.git
   ```
2. Navigate to the project directory:
   ```bash
   cd Traffic_Light_Simulation
   ```
3. Compile the code using a C compiler (e.g., GCC):
   ```bash
   gcc Traffic_Light_Simulation.c -o Traffic_Light_Simulation
   ```
4. Run the executable:
   ```bash
   ./Traffic_Light_Simulation
   ```

## Output Example
### Red Light Phase
```
TRAFFIC LIGHTS:
Red    : ON
Yellow : OFF
Green  : OFF

PEDESTRIAN SIGNAL:
Walk   : ON
Stop   : OFF

TIME REMAINING: 5 seconds
```

### Yellow Light Phase
```
TRAFFIC LIGHTS:
Red    : OFF
Yellow : ON
Green  : OFF

PEDESTRIAN SIGNAL:
Walk   : OFF
Stop   : ON

TIME REMAINING: 2 seconds
```

### Green Light Phase
```
TRAFFIC LIGHTS:
Red    : OFF
Yellow : OFF
Green  : ON

PEDESTRIAN SIGNAL:
Walk   : OFF
Stop   : ON

TIME REMAINING: 5 seconds
```


## Contributors
Dhanushya T
Abi Shree R
Gobika S


## Contact
For questions or suggestions, please contact Devadharsini Sivakumar at devadharsinisivakumar@gmail.com

