#include <stdio.h>
#include <unistd.h> // For sleep() function

//clear the console
void clearConsole() {
    printf("\033[H\033[J");
}


void displayTrafficLight(char vehicleLight[],char pedestrianLight[], int timer) {
    clearConsole();


    printf("TRAFFIC LIGHTS:\n");
    printf("--------------------\n");
    printf("Red    : %s\n", (vehicleLight == "Red") ? "ON" : "OFF");
    printf("Yellow : %s\n", (vehicleLight == "Yellow") ? "ON" : "OFF");
    printf("Green  : %s\n", (vehicleLight == "Green") ? "ON" : "OFF");


    printf("\nPEDESTRIAN SIGNAL:\n");
    printf("--------------------\n");
    printf("Walk   : %s\n", (pedestrianLight == "Walk") ? "ON" : "OFF");
    printf("Stop   : %s\n", (pedestrianLight == "Stop") ? "ON" : "OFF");


    printf("\nTIME REMAINING: %d seconds\n", timer);
}

int main() {
    while (1) {
        // Red Light and Walk(Pedestrian)
        for (int timer = 7; timer > 0; timer--) {
            displayTrafficLight("Red", "Walk", timer);
            sleep(1);
        }

        // Yellow Light and Stop(Pedestrian)
        for (int timer = 3; timer > 0; timer--) {
            displayTrafficLight("Yellow", "Stop", timer);
            sleep(1);
        }

        // Green Light and Stop(Pedestrian)
        for (int timer = 7; timer > 0; timer--) {
            displayTrafficLight("Green", "Stop", timer);
            sleep(1);
        }
    }

    return 0;
}
